/********************************************************************************
** Form generated from reading UI file 'Wizard.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZARD_H
#define UI_WIZARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Wizard
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_terms;
    QSpinBox *sbx_copies;
    QLabel *label;
    QDoubleSpinBox *sbx_separation;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl_term_labels;
    QPlainTextEdit *ptx_terms;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chx_auto_generate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Wizard)
    {
        if (Wizard->objectName().isEmpty())
            Wizard->setObjectName(QString::fromUtf8("Wizard"));
        Wizard->setWindowModality(Qt::WindowModal);
        Wizard->resize(271, 179);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Wizard->sizePolicy().hasHeightForWidth());
        Wizard->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(Wizard);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_terms = new QLabel(Wizard);
        lbl_terms->setObjectName(QString::fromUtf8("lbl_terms"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_terms->sizePolicy().hasHeightForWidth());
        lbl_terms->setSizePolicy(sizePolicy1);
        lbl_terms->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_terms);

        sbx_copies = new QSpinBox(Wizard);
        sbx_copies->setObjectName(QString::fromUtf8("sbx_copies"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sbx_copies->sizePolicy().hasHeightForWidth());
        sbx_copies->setSizePolicy(sizePolicy2);
        sbx_copies->setAlignment(Qt::AlignCenter);
        sbx_copies->setMinimum(1);
        sbx_copies->setMaximum(99);
        sbx_copies->setValue(5);

        verticalLayout->addWidget(sbx_copies);

        label = new QLabel(Wizard);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(label);

        sbx_separation = new QDoubleSpinBox(Wizard);
        sbx_separation->setObjectName(QString::fromUtf8("sbx_separation"));
        sbx_separation->setAlignment(Qt::AlignCenter);
        sbx_separation->setKeyboardTracking(false);
        sbx_separation->setMinimum(-1e+06);
        sbx_separation->setMaximum(1e+06);
        sbx_separation->setSingleStep(0.1);
        sbx_separation->setValue(0.5);

        verticalLayout->addWidget(sbx_separation);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lbl_term_labels = new QLabel(Wizard);
        lbl_term_labels->setObjectName(QString::fromUtf8("lbl_term_labels"));
        lbl_term_labels->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(lbl_term_labels);


        verticalLayout_3->addLayout(horizontalLayout_5);

        ptx_terms = new QPlainTextEdit(Wizard);
        ptx_terms->setObjectName(QString::fromUtf8("ptx_terms"));
        ptx_terms->setTabChangesFocus(true);
        ptx_terms->setLineWrapMode(QPlainTextEdit::NoWrap);
        ptx_terms->setReadOnly(false);

        verticalLayout_3->addWidget(ptx_terms);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        chx_auto_generate = new QCheckBox(Wizard);
        chx_auto_generate->setObjectName(QString::fromUtf8("chx_auto_generate"));
        chx_auto_generate->setChecked(true);

        horizontalLayout_3->addWidget(chx_auto_generate);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(Wizard);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(Wizard);
        QObject::connect(buttonBox, SIGNAL(accepted()), Wizard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Wizard, SLOT(reject()));

        QMetaObject::connectSlotsByName(Wizard);
    } // setupUi

    void retranslateUi(QDialog *Wizard)
    {
        Wizard->setWindowTitle(QApplication::translate("Wizard", "Multiple copies", 0, QApplication::UnicodeUTF8));
        lbl_terms->setText(QApplication::translate("Wizard", "Copies", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Wizard", "Separation", 0, QApplication::UnicodeUTF8));
        lbl_term_labels->setText(QApplication::translate("Wizard", "Names", 0, QApplication::UnicodeUTF8));
        chx_auto_generate->setText(QApplication::translate("Wizard", "automatic", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wizard: public Ui_Wizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZARD_H
