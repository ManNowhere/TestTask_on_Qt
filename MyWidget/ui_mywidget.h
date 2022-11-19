/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "qimagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_MyWidget
{
public:
    QComboBox *comboBox;
    QImageWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *MyWidget)
    {
        if (MyWidget->objectName().isEmpty())
            MyWidget->setObjectName(QStringLiteral("MyWidget"));
        MyWidget->resize(500, 350);
        MyWidget->setMinimumSize(QSize(500, 350));
        MyWidget->setMaximumSize(QSize(500, 350));
        comboBox = new QComboBox(MyWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(369, 10, 121, 22));
        widget = new QImageWidget(MyWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 320, 320));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-10, -10, 341, 341));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        retranslateUi(MyWidget);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), widget, SLOT(setSize(int)));

        QMetaObject::connectSlotsByName(MyWidget);
    } // setupUi

    void retranslateUi(QWidget *MyWidget)
    {
        MyWidget->setWindowTitle(QApplication::translate("MyWidget", "MyWidget", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MyWidget", "1: 1", 0)
         << QApplication::translate("MyWidget", "1: 2", 0)
         << QApplication::translate("MyWidget", "1: 4", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MyWidget: public Ui_MyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
