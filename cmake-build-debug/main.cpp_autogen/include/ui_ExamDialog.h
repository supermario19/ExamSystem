/********************************************************************************
** Form generated from reading UI file 'ExamDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXAMDIALOG_H
#define UI_EXAMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ExamDialog
{
public:

    void setupUi(QDialog *ExamDialog)
    {
        if (ExamDialog->objectName().isEmpty())
            ExamDialog->setObjectName(QString::fromUtf8("ExamDialog"));
        ExamDialog->resize(400, 300);

        retranslateUi(ExamDialog);

        QMetaObject::connectSlotsByName(ExamDialog);
    } // setupUi

    void retranslateUi(QDialog *ExamDialog)
    {
        ExamDialog->setWindowTitle(QCoreApplication::translate("ExamDialog", "ExamDialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExamDialog: public Ui_ExamDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXAMDIALOG_H
