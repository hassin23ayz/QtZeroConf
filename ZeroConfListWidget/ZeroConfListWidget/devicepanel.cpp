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

void devicePanel::assignZeroConfSrvc(QZeroConfService zcs)
{
    ui->deviceName_label->setText(zcs.name());
}
