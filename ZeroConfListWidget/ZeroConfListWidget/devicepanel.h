#ifndef DEVICEPANEL_H
#define DEVICEPANEL_H

#include <QDialog>
#include "qzeroconf.h"

namespace Ui {
class devicePanel;
}

class devicePanel : public QDialog
{
    Q_OBJECT

public:
    explicit devicePanel(QWidget *parent = 0);
    ~devicePanel();

    void SetDomainName(std::string _dn);
    void SetIp(std::string _ip);
    void SetPort(std::string _port);

private:
    Ui::devicePanel *ui;

    std::string deviceDN;
    std::string ip;
    std::string port;

};

#endif // DEVICEPANEL_H
