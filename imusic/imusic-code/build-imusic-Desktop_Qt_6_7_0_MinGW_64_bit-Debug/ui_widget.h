/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QListWidget *listWidget;
    QSlider *playSlider;
    QSlider *voiceSlider;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *curlabel;
    QSpacerItem *horizontalSpacer;
    QLabel *totallabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(360, 509);
        Widget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 440, 361, 64));
        widget->setMinimumSize(QSize(0, 64));
        widget->setMaximumSize(QSize(16777215, 64));
        widget->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(237, 248, 255);\n"
"}"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(32, 32));
        pushButton->setMaximumSize(QSize(32, 32));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/ui/folder-close.svg);"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(32, 32));
        pushButton_2->setMaximumSize(QSize(32, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("icon: url(:/ui/list-bottom.svg);"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(32, 32));
        pushButton_3->setMaximumSize(QSize(32, 32));
        pushButton_3->setStyleSheet(QString::fromUtf8("icon: url(:/ui/go-start.svg);"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(32, 32));
        pushButton_4->setMaximumSize(QSize(32, 32));
        pushButton_4->setStyleSheet(QString::fromUtf8("icon: url(:/ui/DM_20241005141615_002.svg);"));

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(32, 32));
        pushButton_5->setMaximumSize(QSize(32, 32));
        pushButton_5->setStyleSheet(QString::fromUtf8("icon: url(:/ui/go-end.svg);"));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(32, 32));
        pushButton_6->setMaximumSize(QSize(32, 32));
        pushButton_6->setStyleSheet(QString::fromUtf8("icon: url(:/ui/DM_20241005141415_003.svg);"));

        horizontalLayout->addWidget(pushButton_6);

        listWidget = new QListWidget(Widget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 10, 321, 371));
        playSlider = new QSlider(Widget);
        playSlider->setObjectName("playSlider");
        playSlider->setGeometry(QRect(20, 430, 321, 20));
        playSlider->setStyleSheet(QString::fromUtf8(""));
        playSlider->setOrientation(Qt::Horizontal);
        voiceSlider = new QSlider(Widget);
        voiceSlider->setObjectName("voiceSlider");
        voiceSlider->setEnabled(true);
        voiceSlider->setGeometry(QRect(299, 391, 31, 71));
        voiceSlider->setOrientation(Qt::Vertical);
        widget1 = new QWidget(Widget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(20, 400, 331, 22));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        curlabel = new QLabel(widget1);
        curlabel->setObjectName("curlabel");

        horizontalLayout_2->addWidget(curlabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        totallabel = new QLabel(widget1);
        totallabel->setObjectName("totallabel");

        horizontalLayout_2->addWidget(totallabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        curlabel->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
        totallabel->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
