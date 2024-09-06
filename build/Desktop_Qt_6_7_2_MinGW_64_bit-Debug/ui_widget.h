/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btnQFileDialog;
    QPushButton *btnSe;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        btnQFileDialog = new QPushButton(Widget);
        btnQFileDialog->setObjectName("btnQFileDialog");
        btnQFileDialog->setGeometry(QRect(290, 120, 141, 21));
        btnSe = new QPushButton(Widget);
        btnSe->setObjectName("btnSe");
        btnSe->setGeometry(QRect(150, 180, 68, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btnQFileDialog->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266\351\200\211\346\213\251\346\241\206", nullptr));
        btnSe->setText(QCoreApplication::translate("Widget", "\345\210\206\346\255\245\351\252\244\346\211\223\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
