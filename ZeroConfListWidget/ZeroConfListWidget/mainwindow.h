#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qzeroconf.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QZeroConf zeroConf;
    bool publishEnabled;
    QList<QZeroConfService> zeroConfSrvcs;

    void startPublish();
    QString buildName(void);
    void updateListWidget(void);

private slots:
    void appStateChanged(Qt::ApplicationState state);
    void addService(QZeroConfService item);
    void removeService(QZeroConfService item);
    void updateService(QZeroConfService zcs);

};

#endif // MAINWINDOW_H
