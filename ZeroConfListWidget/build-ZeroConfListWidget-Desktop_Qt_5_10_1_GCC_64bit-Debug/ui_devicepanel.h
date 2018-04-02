/********************************************************************************
** Form generated from reading UI file 'devicepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICEPANEL_H
#define UI_DEVICEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_devicePanel
{
public:
    QGroupBox *groupBox_3;
    QSplitter *splitter_3;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_15;
    QSplitter *splitter;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QSplitter *splitter_2;
    QLabel *label_2;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_16;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *pushButton_6;
    QCheckBox *checkBox;
    QPushButton *pushButton_7;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *deviceDN_label;
    QLabel *deviceIP_label;
    QLabel *devicePort_label;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_30;
    QLabel *label_33;
    QLabel *label_35;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_23;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_26;
    QTimeEdit *timeEdit_2;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_24;
    QSlider *horizontalSlider;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_25;
    QSlider *horizontalSlider_2;
    QProgressBar *progressBar_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_27;
    QSlider *horizontalSlider_3;
    QProgressBar *progressBar_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_28;
    QSlider *horizontalSlider_4;
    QProgressBar *progressBar_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_29;
    QSlider *horizontalSlider_5;
    QProgressBar *progressBar_5;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_4;
    QSplitter *splitter_5;
    QLCDNumber *lcdNumber_11;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_9;
    QSplitter *splitter_6;
    QLabel *label_22;
    QLabel *label_20;
    QLabel *label_17;
    QWidget *layoutWidget_9;
    QFormLayout *formLayout;
    QLabel *label_21;
    QLabel *label_19;
    QLabel *label_18;
    QGroupBox *groupBox;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_2;
    QTimeEdit *timeEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *devicePanel)
    {
        if (devicePanel->objectName().isEmpty())
            devicePanel->setObjectName(QStringLiteral("devicePanel"));
        devicePanel->resize(886, 546);
        groupBox_3 = new QGroupBox(devicePanel);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(550, 210, 281, 171));
        splitter_3 = new QSplitter(groupBox_3);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(15, 38, 131, 121));
        splitter_3->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_3);
        label->setObjectName(QStringLiteral("label"));
        splitter_3->addWidget(label);
        label_9 = new QLabel(splitter_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        splitter_3->addWidget(label_9);
        label_11 = new QLabel(splitter_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        splitter_3->addWidget(label_11);
        label_13 = new QLabel(splitter_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        splitter_3->addWidget(label_13);
        label_15 = new QLabel(splitter_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        splitter_3->addWidget(label_15);
        splitter = new QSplitter(groupBox_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(160, 40, 64, 115));
        splitter->setOrientation(Qt::Vertical);
        lcdNumber = new QLCDNumber(splitter);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        splitter->addWidget(lcdNumber);
        lcdNumber_5 = new QLCDNumber(splitter);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        splitter->addWidget(lcdNumber_5);
        lcdNumber_6 = new QLCDNumber(splitter);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        splitter->addWidget(lcdNumber_6);
        lcdNumber_7 = new QLCDNumber(splitter);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        splitter->addWidget(lcdNumber_7);
        lcdNumber_8 = new QLCDNumber(splitter);
        lcdNumber_8->setObjectName(QStringLiteral("lcdNumber_8"));
        splitter->addWidget(lcdNumber_8);
        splitter_2 = new QSplitter(groupBox_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(230, 40, 41, 111));
        splitter_2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_2->addWidget(label_2);
        label_10 = new QLabel(splitter_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        splitter_2->addWidget(label_10);
        label_12 = new QLabel(splitter_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        splitter_2->addWidget(label_12);
        label_14 = new QLabel(splitter_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        splitter_2->addWidget(label_14);
        label_16 = new QLabel(splitter_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        splitter_2->addWidget(label_16);
        groupBox_6 = new QGroupBox(devicePanel);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(550, 10, 331, 191));
        layoutWidget = new QWidget(groupBox_6);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 120, 272, 69));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_16->addWidget(pushButton_6);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_16->addWidget(checkBox);


        verticalLayout_2->addLayout(horizontalLayout_16);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        layoutWidget_2 = new QWidget(groupBox_6);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(70, 30, 251, 76));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        deviceDN_label = new QLabel(layoutWidget_2);
        deviceDN_label->setObjectName(QStringLiteral("deviceDN_label"));

        verticalLayout_4->addWidget(deviceDN_label);

        deviceIP_label = new QLabel(layoutWidget_2);
        deviceIP_label->setObjectName(QStringLiteral("deviceIP_label"));

        verticalLayout_4->addWidget(deviceIP_label);

        devicePort_label = new QLabel(layoutWidget_2);
        devicePort_label->setObjectName(QStringLiteral("devicePort_label"));

        verticalLayout_4->addWidget(devicePort_label);

        layoutWidget_3 = new QWidget(groupBox_6);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(11, 30, 55, 76));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_30 = new QLabel(layoutWidget_3);
        label_30->setObjectName(QStringLiteral("label_30"));

        verticalLayout_5->addWidget(label_30);

        label_33 = new QLabel(layoutWidget_3);
        label_33->setObjectName(QStringLiteral("label_33"));

        verticalLayout_5->addWidget(label_33);

        label_35 = new QLabel(layoutWidget_3);
        label_35->setObjectName(QStringLiteral("label_35"));

        verticalLayout_5->addWidget(label_35);

        layoutWidget_4 = new QWidget(devicePanel);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(750, 460, 102, 67));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_9 = new QPushButton(layoutWidget_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_3->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(layoutWidget_4);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_3->addWidget(pushButton_8);

        groupBox_5 = new QGroupBox(devicePanel);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 180, 531, 361));
        layoutWidget_5 = new QWidget(groupBox_5);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 30, 514, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(layoutWidget_5);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout->addWidget(label_23);

        radioButton_4 = new QRadioButton(layoutWidget_5);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        horizontalLayout->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(layoutWidget_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));

        horizontalLayout->addWidget(radioButton_5);

        radioButton_6 = new QRadioButton(layoutWidget_5);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));

        horizontalLayout->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(layoutWidget_5);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));

        horizontalLayout->addWidget(radioButton_7);

        radioButton_8 = new QRadioButton(layoutWidget_5);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));

        horizontalLayout->addWidget(radioButton_8);

        radioButton_9 = new QRadioButton(layoutWidget_5);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));

        horizontalLayout->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(layoutWidget_5);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));

        horizontalLayout->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(layoutWidget_5);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));

        horizontalLayout->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(layoutWidget_5);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));

        horizontalLayout->addWidget(radioButton_12);

        radioButton_13 = new QRadioButton(layoutWidget_5);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));

        horizontalLayout->addWidget(radioButton_13);

        layoutWidget_6 = new QWidget(groupBox_5);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(11, 71, 187, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(layoutWidget_6);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_3->addWidget(label_26);

        timeEdit_2 = new QTimeEdit(layoutWidget_6);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        horizontalLayout_3->addWidget(timeEdit_2);

        layoutWidget_7 = new QWidget(groupBox_5);
        layoutWidget_7->setObjectName(QStringLiteral("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 120, 511, 181));
        verticalLayout = new QVBoxLayout(layoutWidget_7);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_24 = new QLabel(layoutWidget_7);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_7->addWidget(label_24);

        horizontalSlider = new QSlider(layoutWidget_7);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider);

        progressBar = new QProgressBar(layoutWidget_7);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_7->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_25 = new QLabel(layoutWidget_7);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_8->addWidget(label_25);

        horizontalSlider_2 = new QSlider(layoutWidget_7);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_2);

        progressBar_2 = new QProgressBar(layoutWidget_7);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setValue(24);

        horizontalLayout_8->addWidget(progressBar_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_27 = new QLabel(layoutWidget_7);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_9->addWidget(label_27);

        horizontalSlider_3 = new QSlider(layoutWidget_7);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_3);

        progressBar_3 = new QProgressBar(layoutWidget_7);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setValue(24);

        horizontalLayout_9->addWidget(progressBar_3);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_28 = new QLabel(layoutWidget_7);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_10->addWidget(label_28);

        horizontalSlider_4 = new QSlider(layoutWidget_7);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_4);

        progressBar_4 = new QProgressBar(layoutWidget_7);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setValue(24);

        horizontalLayout_10->addWidget(progressBar_4);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_29 = new QLabel(layoutWidget_7);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_11->addWidget(label_29);

        horizontalSlider_5 = new QSlider(layoutWidget_7);
        horizontalSlider_5->setObjectName(QStringLiteral("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSlider_5);

        progressBar_5 = new QProgressBar(layoutWidget_7);
        progressBar_5->setObjectName(QStringLiteral("progressBar_5"));
        progressBar_5->setValue(24);

        horizontalLayout_11->addWidget(progressBar_5);


        verticalLayout->addLayout(horizontalLayout_11);

        layoutWidget_8 = new QWidget(groupBox_5);
        layoutWidget_8->setObjectName(QStringLiteral("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 310, 169, 31));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(layoutWidget_8);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_12->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget_8);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_12->addWidget(pushButton_5);

        groupBox_4 = new QGroupBox(devicePanel);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(550, 390, 181, 141));
        splitter_5 = new QSplitter(groupBox_4);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(80, 40, 61, 81));
        splitter_5->setOrientation(Qt::Vertical);
        lcdNumber_11 = new QLCDNumber(splitter_5);
        lcdNumber_11->setObjectName(QStringLiteral("lcdNumber_11"));
        lcdNumber_11->setProperty("value", QVariant(30));
        splitter_5->addWidget(lcdNumber_11);
        lcdNumber_10 = new QLCDNumber(splitter_5);
        lcdNumber_10->setObjectName(QStringLiteral("lcdNumber_10"));
        splitter_5->addWidget(lcdNumber_10);
        lcdNumber_9 = new QLCDNumber(splitter_5);
        lcdNumber_9->setObjectName(QStringLiteral("lcdNumber_9"));
        splitter_5->addWidget(lcdNumber_9);
        splitter_6 = new QSplitter(groupBox_4);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(15, 38, 41, 81));
        splitter_6->setOrientation(Qt::Vertical);
        label_22 = new QLabel(splitter_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        splitter_6->addWidget(label_22);
        label_20 = new QLabel(splitter_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        splitter_6->addWidget(label_20);
        label_17 = new QLabel(splitter_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        splitter_6->addWidget(label_17);
        layoutWidget_9 = new QWidget(groupBox_4);
        layoutWidget_9->setObjectName(QStringLiteral("layoutWidget_9"));
        layoutWidget_9->setGeometry(QRect(150, 40, 21, 81));
        formLayout = new QFormLayout(layoutWidget_9);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget_9);
        label_21->setObjectName(QStringLiteral("label_21"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_21);

        label_19 = new QLabel(layoutWidget_9);
        label_19->setObjectName(QStringLiteral("label_19"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_19);

        label_18 = new QLabel(layoutWidget_9);
        label_18->setObjectName(QStringLiteral("label_18"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_18);

        groupBox = new QGroupBox(devicePanel);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 531, 81));
        layoutWidget_10 = new QWidget(groupBox);
        layoutWidget_10->setObjectName(QStringLiteral("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 40, 483, 31));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        radioButton = new QRadioButton(layoutWidget_10);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_13->addWidget(radioButton);

        radioButton_2 = new QRadioButton(layoutWidget_10);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_13->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(layoutWidget_10);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        horizontalLayout_13->addWidget(radioButton_3);

        pushButton_10 = new QPushButton(layoutWidget_10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_13->addWidget(pushButton_10);

        pushButton_3 = new QPushButton(layoutWidget_10);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_13->addWidget(pushButton_3);

        groupBox_2 = new QGroupBox(devicePanel);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 90, 361, 81));
        layoutWidget_11 = new QWidget(groupBox_2);
        layoutWidget_11->setObjectName(QStringLiteral("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(10, 40, 331, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        timeEdit = new QTimeEdit(layoutWidget_11);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        horizontalLayout_2->addWidget(timeEdit);

        pushButton = new QPushButton(layoutWidget_11);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_11);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        retranslateUi(devicePanel);

        QMetaObject::connectSlotsByName(devicePanel);
    } // setupUi

    void retranslateUi(QDialog *devicePanel)
    {
        devicePanel->setWindowTitle(QApplication::translate("devicePanel", "ZeroConfLed Controller Panel", nullptr));
        groupBox_3->setTitle(QApplication::translate("devicePanel", "Electrical data", nullptr));
        label->setText(QApplication::translate("devicePanel", "Voltage:", nullptr));
        label_9->setText(QApplication::translate("devicePanel", "Current:", nullptr));
        label_11->setText(QApplication::translate("devicePanel", "Power:", nullptr));
        label_13->setText(QApplication::translate("devicePanel", "Max Power", nullptr));
        label_15->setText(QApplication::translate("devicePanel", "Consumption:", nullptr));
        label_2->setText(QApplication::translate("devicePanel", "V", nullptr));
        label_10->setText(QApplication::translate("devicePanel", "A", nullptr));
        label_12->setText(QApplication::translate("devicePanel", "W", nullptr));
        label_14->setText(QApplication::translate("devicePanel", "W", nullptr));
        label_16->setText(QApplication::translate("devicePanel", "Whr", nullptr));
        groupBox_6->setTitle(QApplication::translate("devicePanel", "Device Information", nullptr));
        pushButton_6->setText(QApplication::translate("devicePanel", "Ota File", nullptr));
        checkBox->setText(QApplication::translate("devicePanel", "Firmware Upgrade", nullptr));
        pushButton_7->setText(QApplication::translate("devicePanel", "Upgrade", nullptr));
        deviceDN_label->setText(QApplication::translate("devicePanel", "Arduino-AA-BB-CC-DD-EE-FF", nullptr));
        deviceIP_label->setText(QApplication::translate("devicePanel", "192.11.67.103", nullptr));
        devicePort_label->setText(QApplication::translate("devicePanel", "3078", nullptr));
        label_30->setText(QApplication::translate("devicePanel", "Name:", nullptr));
        label_33->setText(QApplication::translate("devicePanel", "IP:", nullptr));
        label_35->setText(QApplication::translate("devicePanel", "Port:", nullptr));
        pushButton_9->setText(QApplication::translate("devicePanel", "Save Data", nullptr));
        pushButton_8->setText(QApplication::translate("devicePanel", "Disconnect", nullptr));
        groupBox_5->setTitle(QApplication::translate("devicePanel", "Led Control Panel", nullptr));
        label_23->setText(QApplication::translate("devicePanel", "Step:", nullptr));
        radioButton_4->setText(QApplication::translate("devicePanel", "0", nullptr));
        radioButton_5->setText(QApplication::translate("devicePanel", "1", nullptr));
        radioButton_6->setText(QApplication::translate("devicePanel", "2", nullptr));
        radioButton_7->setText(QApplication::translate("devicePanel", "3", nullptr));
        radioButton_8->setText(QApplication::translate("devicePanel", "4", nullptr));
        radioButton_9->setText(QApplication::translate("devicePanel", "5", nullptr));
        radioButton_10->setText(QApplication::translate("devicePanel", "6", nullptr));
        radioButton_11->setText(QApplication::translate("devicePanel", "7", nullptr));
        radioButton_12->setText(QApplication::translate("devicePanel", "8", nullptr));
        radioButton_13->setText(QApplication::translate("devicePanel", "9", nullptr));
        label_26->setText(QApplication::translate("devicePanel", "On Time", nullptr));
        label_24->setText(QApplication::translate("devicePanel", "White", nullptr));
        label_25->setText(QApplication::translate("devicePanel", "Red    ", nullptr));
        label_27->setText(QApplication::translate("devicePanel", "Blue   ", nullptr));
        label_28->setText(QApplication::translate("devicePanel", "IR        ", nullptr));
        label_29->setText(QApplication::translate("devicePanel", "UV      ", nullptr));
        pushButton_4->setText(QApplication::translate("devicePanel", "Read", nullptr));
        pushButton_5->setText(QApplication::translate("devicePanel", "Write", nullptr));
        groupBox_4->setTitle(QApplication::translate("devicePanel", "Temperature", nullptr));
        label_22->setText(QApplication::translate("devicePanel", "Max", nullptr));
        label_20->setText(QApplication::translate("devicePanel", "Min", nullptr));
        label_17->setText(QApplication::translate("devicePanel", "Now:", nullptr));
        label_21->setText(QApplication::translate("devicePanel", "C", nullptr));
        label_19->setText(QApplication::translate("devicePanel", "C", nullptr));
        label_18->setText(QApplication::translate("devicePanel", "C", nullptr));
        groupBox->setTitle(QApplication::translate("devicePanel", "Mode", nullptr));
        radioButton->setText(QApplication::translate("devicePanel", "Master", nullptr));
        radioButton_2->setText(QApplication::translate("devicePanel", "Slave", nullptr));
        radioButton_3->setText(QApplication::translate("devicePanel", "Independent", nullptr));
        pushButton_10->setText(QApplication::translate("devicePanel", "Read", nullptr));
        pushButton_3->setText(QApplication::translate("devicePanel", "Write", nullptr));
        groupBox_2->setTitle(QApplication::translate("devicePanel", "Time", nullptr));
        pushButton->setText(QApplication::translate("devicePanel", "Read", nullptr));
        pushButton_2->setText(QApplication::translate("devicePanel", "Write", nullptr));
    } // retranslateUi

};

namespace Ui {
    class devicePanel: public Ui_devicePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICEPANEL_H
