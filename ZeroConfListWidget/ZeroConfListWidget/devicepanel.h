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
    void assignZeroConfSrvc(QZeroConfService zcs);

private:
    Ui::devicePanel *ui;
};

#endif // DEVICEPANEL_H
