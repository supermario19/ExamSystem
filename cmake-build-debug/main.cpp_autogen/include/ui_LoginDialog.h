/********************************************************************************
** Form generated from reading UI file 'LoginDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QPushButton *login_btn;
    QPushButton *close_btn;
    QLabel *username_label;
    QLabel *password_label;
    QLineEdit *user_edit;
    QLineEdit *password_edit;

    void setupUi(QWidget *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 300);
        login_btn = new QPushButton(LoginDialog);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(150, 230, 113, 32));
        close_btn = new QPushButton(LoginDialog);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setGeometry(QRect(270, 230, 113, 32));
        username_label = new QLabel(LoginDialog);
        username_label->setObjectName(QString::fromUtf8("username_label"));
        username_label->setGeometry(QRect(60, 100, 60, 16));
        password_label = new QLabel(LoginDialog);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(60, 160, 60, 16));
        user_edit = new QLineEdit(LoginDialog);
        user_edit->setObjectName(QString::fromUtf8("user_edit"));
        user_edit->setGeometry(QRect(120, 90, 211, 31));
        password_edit = new QLineEdit(LoginDialog);
        password_edit->setObjectName(QString::fromUtf8("password_edit"));
        password_edit->setGeometry(QRect(120, 150, 211, 31));
        password_edit->setEchoMode(QLineEdit::Password);

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QWidget *LoginDialog)
    {
        LoginDialog->setWindowTitle(QCoreApplication::translate("LoginDialog", "LoginDialog", nullptr));
        login_btn->setText(QCoreApplication::translate("LoginDialog", "\347\231\273\351\231\206", nullptr));
        close_btn->setText(QCoreApplication::translate("LoginDialog", "\345\217\226\346\266\210", nullptr));
        username_label->setText(QCoreApplication::translate("LoginDialog", "\350\264\246\345\217\267:", nullptr));
        password_label->setText(QCoreApplication::translate("LoginDialog", "\345\257\206\347\240\201:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
