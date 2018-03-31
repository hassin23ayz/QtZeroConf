#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QNetworkInterface>

#ifdef Q_OS_IOS
    #define	OS_NAME		"iOS"
#elif defined(Q_OS_MAC)
    #define	OS_NAME		"Mac"
#elif defined(Q_OS_ANDROID)
    #define	OS_NAME		"Android"
#elif defined(Q_OS_LINUX)
    #define	OS_NAME		"Linux"
#elif defined(Q_OS_WIN)
    #define	OS_NAME		"Windows"
#elif defined(Q_OS_FREEBSD)
    #define	OS_NAME		"FreeBSD"
#else
    #define	OS_NAME		"Some OS"
#endif

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    publishEnabled = 0;

    connect(&zeroConf, &QZeroConf::serviceAdded, this, &MainWindow::addService);
    connect(&zeroConf, &QZeroConf::serviceRemoved, this, &MainWindow::removeService);
    connect(&zeroConf, &QZeroConf::serviceUpdated, this, &MainWindow::updateService);
    connect(qGuiApp, SIGNAL(applicationStateChanged(Qt::ApplicationState)), this, SLOT(appStateChanged(Qt::ApplicationState)));

    publishEnabled = 1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::buildName(void)
{
    QString name;

    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces(); // now you have interfaces list

    name = list.last().hardwareAddress();
    name.remove(":");
    name.remove(0, 6);
    name+= ')';
    name.prepend("Qt ZeroConf Test - " OS_NAME " (");
    return name;
}

void MainWindow::updateListWidget()
{
    ui->listWidget->clear();
    QList<QZeroConfService>::iterator it = zeroConfSrvcs.begin();
    while(it != zeroConfSrvcs.end())
    {
        ui->listWidget->addItem((*it).name()+ " at IP:"+ (*it).ip().toString());
        it++;
    }
}

void MainWindow::appStateChanged(Qt::ApplicationState state)
{
    if (state == Qt::ApplicationSuspended)
    {
        zeroConf.stopServicePublish();
        zeroConf.stopBrowser();
    }
    else if (state == Qt::ApplicationActive)
    {
        if (publishEnabled && !zeroConf.publishExists())
        {
            //startPublish();
        }
        if (!zeroConf.browserExists())
        {
            zeroConf.startBrowser("_zeroconfled._tcp");
        }
    }
}

// ---------- Service Publish ----------
void MainWindow::startPublish()
{
    zeroConf.clearServiceTxtRecords();
    zeroConf.addServiceTxtRecord("Qt", "the best!");
    zeroConf.addServiceTxtRecord("ZeroConf is nice too");
    zeroConf.startServicePublish(buildName().toUtf8(), "_zeroconfled._tcp", "local", 11437);
}
// ---------- Discovery Callbacks ----------
void MainWindow::addService(QZeroConfService zcs)
{
    qDebug() << "Added service: " << zcs;
    zeroConfSrvcs.push_back(zcs);
    updateListWidget();
}

void MainWindow::removeService(QZeroConfService zcs)
{
    qDebug() << "Removed service: " << zcs;
    zeroConfSrvcs.removeAll(zcs);
    updateListWidget();
}

void MainWindow::updateService(QZeroConfService zcs)
{
    qDebug() << "Service updated: " << zcs;
}

void MainWindow::on_ConnectBtn_clicked()
{
    QListWidgetItem* item = ui->listWidget->currentItem();
    item->setTextColor(Qt::green);
}
