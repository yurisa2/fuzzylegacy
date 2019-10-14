/********************************************************************************
** Form generated from reading UI file 'ImEx.ui'
**
** Created: Mon Oct 14 09:14:43 2019
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMEX_H
#define UI_IMEX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ImEx
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_format;
    QPlainTextEdit *pte_code;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ImEx)
    {
        if (ImEx->objectName().isEmpty())
            ImEx->setObjectName(QString::fromUtf8("ImEx"));
        ImEx->setWindowModality(Qt::ApplicationModal);
        ImEx->resize(400, 500);
        ImEx->setAcceptDrops(true);
        ImEx->setModal(true);
        verticalLayout = new QVBoxLayout(ImEx);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_format = new QLabel(ImEx);
        lbl_format->setObjectName(QString::fromUtf8("lbl_format"));

        verticalLayout->addWidget(lbl_format);

        pte_code = new QPlainTextEdit(ImEx);
        pte_code->setObjectName(QString::fromUtf8("pte_code"));
        pte_code->setLineWrapMode(QPlainTextEdit::NoWrap);

        verticalLayout->addWidget(pte_code);

        buttonBox = new QDialogButtonBox(ImEx);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ImEx);
        QObject::connect(buttonBox, SIGNAL(accepted()), ImEx, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ImEx, SLOT(reject()));

        QMetaObject::connectSlotsByName(ImEx);
    } // setupUi

    void retranslateUi(QDialog *ImEx)
    {
        ImEx->setWindowTitle(QApplication::translate("ImEx", "ImEx - format", 0, QApplication::UnicodeUTF8));
        lbl_format->setText(QApplication::translate("ImEx", "[format]", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ImEx: public Ui_ImEx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMEX_H
