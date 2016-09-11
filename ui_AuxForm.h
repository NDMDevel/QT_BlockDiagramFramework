/********************************************************************************
** Form generated from reading UI file 'AuxForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUXFORM_H
#define UI_AUXFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_AuxForm
{
public:

    void setupUi(QDialog *AuxForm)
    {
        if (AuxForm->objectName().isEmpty())
            AuxForm->setObjectName(QStringLiteral("AuxForm"));
        AuxForm->resize(293, 311);
        AuxForm->setAcceptDrops(true);

        retranslateUi(AuxForm);

        QMetaObject::connectSlotsByName(AuxForm);
    } // setupUi

    void retranslateUi(QDialog *AuxForm)
    {
        AuxForm->setWindowTitle(QApplication::translate("AuxForm", "AuxForm", 0));
    } // retranslateUi

};

namespace Ui {
    class AuxForm: public Ui_AuxForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUXFORM_H
