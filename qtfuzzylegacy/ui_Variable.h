/********************************************************************************
** Form generated from reading UI file 'Variable.ui'
**
** Created: Mon Oct 14 09:14:43 2019
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLE_H
#define UI_VARIABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Variable
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_name;
    QLineEdit *led_name;
    QCheckBox *cbx_enabled;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *lbl_lvar_min;
    QDoubleSpinBox *sbx_min;
    QVBoxLayout *verticalLayout_6;
    QLabel *lbl_lvar_max;
    QDoubleSpinBox *sbx_max;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_terms;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btn_add_term;
    QToolButton *btn_remove_term;
    QToolButton *btn_edit_term;
    QSpacerItem *horizontalSpacer;
    QToolButton *btn_sort_centroid;
    QToolButton *btn_term_up;
    QToolButton *btn_term_down;
    QSplitter *splitter2;
    QListWidget *lvw_terms;
    QGroupBox *gbx_output;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *led_default;
    QLabel *label;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chx_lock_range;
    QCheckBox *chx_lock_valid;
    QLabel *label_3;
    QComboBox *cbx_defuzzifier;
    QLabel *label_4;
    QComboBox *cbx_accumulation;
    QLabel *label_5;
    QSpinBox *sbx_accuracy;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Variable)
    {
        if (Variable->objectName().isEmpty())
            Variable->setObjectName(QString::fromUtf8("Variable"));
        Variable->setWindowModality(Qt::ApplicationModal);
        Variable->resize(300, 473);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Variable->sizePolicy().hasHeightForWidth());
        Variable->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(Variable);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbl_name = new QLabel(Variable);
        lbl_name->setObjectName(QString::fromUtf8("lbl_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_name->sizePolicy().hasHeightForWidth());
        lbl_name->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(lbl_name);

        led_name = new QLineEdit(Variable);
        led_name->setObjectName(QString::fromUtf8("led_name"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(led_name->sizePolicy().hasHeightForWidth());
        led_name->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(led_name);

        cbx_enabled = new QCheckBox(Variable);
        cbx_enabled->setObjectName(QString::fromUtf8("cbx_enabled"));

        horizontalLayout_3->addWidget(cbx_enabled);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, -1, -1, -1);
        lbl_lvar_min = new QLabel(Variable);
        lbl_lvar_min->setObjectName(QString::fromUtf8("lbl_lvar_min"));
        sizePolicy1.setHeightForWidth(lbl_lvar_min->sizePolicy().hasHeightForWidth());
        lbl_lvar_min->setSizePolicy(sizePolicy1);
        lbl_lvar_min->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lbl_lvar_min);

        sbx_min = new QDoubleSpinBox(Variable);
        sbx_min->setObjectName(QString::fromUtf8("sbx_min"));
        sbx_min->setAlignment(Qt::AlignCenter);
        sbx_min->setAccelerated(true);
        sbx_min->setKeyboardTracking(false);
        sbx_min->setMinimum(-1e+07);
        sbx_min->setMaximum(1e+07);
        sbx_min->setSingleStep(0.1);

        verticalLayout_5->addWidget(sbx_min);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        lbl_lvar_max = new QLabel(Variable);
        lbl_lvar_max->setObjectName(QString::fromUtf8("lbl_lvar_max"));
        sizePolicy1.setHeightForWidth(lbl_lvar_max->sizePolicy().hasHeightForWidth());
        lbl_lvar_max->setSizePolicy(sizePolicy1);
        lbl_lvar_max->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lbl_lvar_max);

        sbx_max = new QDoubleSpinBox(Variable);
        sbx_max->setObjectName(QString::fromUtf8("sbx_max"));
        sbx_max->setAlignment(Qt::AlignCenter);
        sbx_max->setAccelerated(true);
        sbx_max->setKeyboardTracking(false);
        sbx_max->setMinimum(-1e+07);
        sbx_max->setMaximum(1e+07);
        sbx_max->setSingleStep(0.1);
        sbx_max->setValue(1);

        verticalLayout_6->addWidget(sbx_max);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout);

        splitter = new QSplitter(Variable);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_terms = new QLabel(verticalLayoutWidget);
        lbl_terms->setObjectName(QString::fromUtf8("lbl_terms"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lbl_terms->sizePolicy().hasHeightForWidth());
        lbl_terms->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(lbl_terms);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_add_term = new QToolButton(verticalLayoutWidget);
        btn_add_term->setObjectName(QString::fromUtf8("btn_add_term"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add_term->setIcon(icon);

        horizontalLayout_2->addWidget(btn_add_term);

        btn_remove_term = new QToolButton(verticalLayoutWidget);
        btn_remove_term->setObjectName(QString::fromUtf8("btn_remove_term"));
        btn_remove_term->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_remove_term->setIcon(icon1);

        horizontalLayout_2->addWidget(btn_remove_term);

        btn_edit_term = new QToolButton(verticalLayoutWidget);
        btn_edit_term->setObjectName(QString::fromUtf8("btn_edit_term"));
        btn_edit_term->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit_term->setIcon(icon2);

        horizontalLayout_2->addWidget(btn_edit_term);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_sort_centroid = new QToolButton(verticalLayoutWidget);
        btn_sort_centroid->setObjectName(QString::fromUtf8("btn_sort_centroid"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/sort-terms.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_sort_centroid->setIcon(icon3);
        btn_sort_centroid->setCheckable(true);
        btn_sort_centroid->setChecked(false);

        horizontalLayout_2->addWidget(btn_sort_centroid);

        btn_term_up = new QToolButton(verticalLayoutWidget);
        btn_term_up->setObjectName(QString::fromUtf8("btn_term_up"));
        btn_term_up->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_term_up->setIcon(icon4);
        btn_term_up->setAutoRepeat(false);

        horizontalLayout_2->addWidget(btn_term_up);

        btn_term_down = new QToolButton(verticalLayoutWidget);
        btn_term_down->setObjectName(QString::fromUtf8("btn_term_down"));
        btn_term_down->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_term_down->setIcon(icon5);
        btn_term_down->setAutoRepeat(false);

        horizontalLayout_2->addWidget(btn_term_down);


        verticalLayout_3->addLayout(horizontalLayout_2);

        splitter2 = new QSplitter(verticalLayoutWidget);
        splitter2->setObjectName(QString::fromUtf8("splitter2"));
        splitter2->setFrameShape(QFrame::NoFrame);
        splitter2->setFrameShadow(QFrame::Plain);
        splitter2->setMidLineWidth(0);
        splitter2->setOrientation(Qt::Horizontal);
        lvw_terms = new QListWidget(splitter2);
        lvw_terms->setObjectName(QString::fromUtf8("lvw_terms"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lvw_terms->sizePolicy().hasHeightForWidth());
        lvw_terms->setSizePolicy(sizePolicy4);
        lvw_terms->setAutoScrollMargin(0);
        lvw_terms->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lvw_terms->setSelectionBehavior(QAbstractItemView::SelectRows);
        splitter2->addWidget(lvw_terms);

        verticalLayout_3->addWidget(splitter2);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_4->addWidget(splitter);

        gbx_output = new QGroupBox(Variable);
        gbx_output->setObjectName(QString::fromUtf8("gbx_output"));
        gbx_output->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(gbx_output);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(-1, -1, -1, 0);
        label_2 = new QLabel(gbx_output);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        led_default = new QLineEdit(gbx_output);
        led_default->setObjectName(QString::fromUtf8("led_default"));
        led_default->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(led_default->sizePolicy().hasHeightForWidth());
        led_default->setSizePolicy(sizePolicy5);
        led_default->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, led_default);

        label = new QLabel(gbx_output);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        chx_lock_range = new QCheckBox(gbx_output);
        chx_lock_range->setObjectName(QString::fromUtf8("chx_lock_range"));

        horizontalLayout_6->addWidget(chx_lock_range);

        chx_lock_valid = new QCheckBox(gbx_output);
        chx_lock_valid->setObjectName(QString::fromUtf8("chx_lock_valid"));

        horizontalLayout_6->addWidget(chx_lock_valid);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_6);

        label_3 = new QLabel(gbx_output);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        cbx_defuzzifier = new QComboBox(gbx_output);
        cbx_defuzzifier->setObjectName(QString::fromUtf8("cbx_defuzzifier"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cbx_defuzzifier);

        label_4 = new QLabel(gbx_output);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        cbx_accumulation = new QComboBox(gbx_output);
        cbx_accumulation->setObjectName(QString::fromUtf8("cbx_accumulation"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cbx_accumulation);

        label_5 = new QLabel(gbx_output);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        sbx_accuracy = new QSpinBox(gbx_output);
        sbx_accuracy->setObjectName(QString::fromUtf8("sbx_accuracy"));
        sbx_accuracy->setAlignment(Qt::AlignCenter);
        sbx_accuracy->setAccelerated(true);
        sbx_accuracy->setKeyboardTracking(false);
        sbx_accuracy->setMinimum(20);
        sbx_accuracy->setMaximum(999999999);
        sbx_accuracy->setSingleStep(20);
        sbx_accuracy->setValue(500);

        formLayout->setWidget(4, QFormLayout::FieldRole, sbx_accuracy);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout_4->addWidget(gbx_output);

        buttonBox = new QDialogButtonBox(Variable);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_4->addWidget(buttonBox);


        retranslateUi(Variable);
        QObject::connect(buttonBox, SIGNAL(accepted()), Variable, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Variable, SLOT(reject()));

        QMetaObject::connectSlotsByName(Variable);
    } // setupUi

    void retranslateUi(QDialog *Variable)
    {
        Variable->setWindowTitle(QApplication::translate("Variable", "Variable", 0, QApplication::UnicodeUTF8));
        lbl_name->setText(QApplication::translate("Variable", "Name", 0, QApplication::UnicodeUTF8));
        cbx_enabled->setText(QApplication::translate("Variable", "enabled", 0, QApplication::UnicodeUTF8));
        lbl_lvar_min->setText(QApplication::translate("Variable", "Minimum", 0, QApplication::UnicodeUTF8));
        lbl_lvar_max->setText(QApplication::translate("Variable", "Maximum", 0, QApplication::UnicodeUTF8));
        lbl_terms->setText(QApplication::translate("Variable", "Terms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_add_term->setToolTip(QApplication::translate("Variable", "Add a new term", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_add_term->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_remove_term->setToolTip(QApplication::translate("Variable", "Remove selected terms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_remove_term->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_edit_term->setToolTip(QApplication::translate("Variable", "Edit selected terms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_edit_term->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_sort_centroid->setToolTip(QApplication::translate("Variable", "Sort terms by centroid", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_sort_centroid->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_term_up->setToolTip(QApplication::translate("Variable", "Move selected terms up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_term_up->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_term_down->setToolTip(QApplication::translate("Variable", "Move selected terms down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_term_down->setText(QString());
        gbx_output->setTitle(QApplication::translate("Variable", "Output", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Variable", "Default", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        led_default->setToolTip(QApplication::translate("Variable", "Default output value of this variable (e.g. nan, 0.0, inf)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        led_default->setText(QString());
        label->setText(QApplication::translate("Variable", "Lock", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        chx_lock_range->setToolTip(QApplication::translate("Variable", "Locks the output values to the range of this variable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        chx_lock_range->setText(QApplication::translate("Variable", "Range", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        chx_lock_valid->setToolTip(QApplication::translate("Variable", "Locks the last known valid value if no rules are activated", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        chx_lock_valid->setText(QApplication::translate("Variable", "Valid", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Variable", "Defuzzifier", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbx_defuzzifier->setToolTip(QApplication::translate("Variable", "Method to defuzzify the output value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("Variable", "Accumulation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbx_accumulation->setToolTip(QApplication::translate("Variable", "Operator to accumulate the activated terms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("Variable", "Greater resolution improves accuracy, but increases computational cost", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("Variable", "Accuracy", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Variable: public Ui_Variable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLE_H
