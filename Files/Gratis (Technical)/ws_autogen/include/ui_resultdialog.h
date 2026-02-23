/********************************************************************************
** Form generated from reading UI file 'resultdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTDIALOG_H
#define UI_RESULTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ResultDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *resultLabel;
    QPushButton *copyButton;

    void setupUi(QDialog *ResultDialog)
    {
        if (ResultDialog->objectName().isEmpty())
            ResultDialog->setObjectName("ResultDialog");
        ResultDialog->resize(240, 320);
        verticalLayout = new QVBoxLayout(ResultDialog);
        verticalLayout->setObjectName("verticalLayout");
        resultLabel = new QLabel(ResultDialog);
        resultLabel->setObjectName("resultLabel");

        verticalLayout->addWidget(resultLabel);

        copyButton = new QPushButton(ResultDialog);
        copyButton->setObjectName("copyButton");

        verticalLayout->addWidget(copyButton);


        retranslateUi(ResultDialog);

        QMetaObject::connectSlotsByName(ResultDialog);
    } // setupUi

    void retranslateUi(QDialog *ResultDialog)
    {
        ResultDialog->setWindowTitle(QCoreApplication::translate("ResultDialog", "Password", nullptr));
        resultLabel->setText(QString());
        copyButton->setText(QCoreApplication::translate("ResultDialog", "Copy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResultDialog: public Ui_ResultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTDIALOG_H
