/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblNombre;
    QLineEdit *txtNombre;
    QPushButton *btnGuardar;
    QLineEdit *txtRaza;
    QLabel *lblRaza;
    QSpinBox *sbEdad;
    QLabel *lblEdad;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(444, 358);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblNombre = new QLabel(centralWidget);
        lblNombre->setObjectName(QStringLiteral("lblNombre"));
        lblNombre->setGeometry(QRect(30, 20, 67, 17));
        txtNombre = new QLineEdit(centralWidget);
        txtNombre->setObjectName(QStringLiteral("txtNombre"));
        txtNombre->setGeometry(QRect(100, 20, 113, 27));
        btnGuardar = new QPushButton(centralWidget);
        btnGuardar->setObjectName(QStringLiteral("btnGuardar"));
        btnGuardar->setGeometry(QRect(280, 170, 99, 27));
        btnGuardar->setFocusPolicy(Qt::TabFocus);
        txtRaza = new QLineEdit(centralWidget);
        txtRaza->setObjectName(QStringLiteral("txtRaza"));
        txtRaza->setGeometry(QRect(100, 60, 113, 27));
        lblRaza = new QLabel(centralWidget);
        lblRaza->setObjectName(QStringLiteral("lblRaza"));
        lblRaza->setGeometry(QRect(30, 60, 41, 21));
        sbEdad = new QSpinBox(centralWidget);
        sbEdad->setObjectName(QStringLiteral("sbEdad"));
        sbEdad->setGeometry(QRect(100, 90, 111, 31));
        sbEdad->setMinimum(1);
        sbEdad->setMaximum(20);
        lblEdad = new QLabel(centralWidget);
        lblEdad->setObjectName(QStringLiteral("lblEdad"));
        lblEdad->setGeometry(QRect(30, 100, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 444, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(txtNombre, txtRaza);
        QWidget::setTabOrder(txtRaza, sbEdad);
        QWidget::setTabOrder(sbEdad, btnGuardar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ventana Principal", 0));
        lblNombre->setText(QApplication::translate("MainWindow", "Nombre", 0));
        btnGuardar->setText(QApplication::translate("MainWindow", "Guardar", 0));
        lblRaza->setText(QApplication::translate("MainWindow", "Raza", 0));
        lblEdad->setText(QApplication::translate("MainWindow", "Edad", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
