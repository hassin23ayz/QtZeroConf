#include "devicepanel.h"
#include "ui_devicepanel.h"

devicePanel::devicePanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::devicePanel)
{
    ui->setupUi(this);
}

devicePanel::~devicePanel()
{
    delete ui;
}

void devicePanel::SetDomainName(std::string _dn)
{
    deviceDN = _dn;
    ui->deviceDN_label->setText(QString::fromStdString(deviceDN));
}

void devicePanel::SetIp(std::string _ip)
{
    ip = _ip;
    ui->deviceIP_label->setText(QString::fromStdString(ip));
}

void devicePanel::SetPort(std::string _port)
{
    port = _port;
    ui->devicePort_label->setText(QString::fromStdString(port));
}

