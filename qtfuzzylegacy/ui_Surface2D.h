/********************************************************************************
** Form generated from reading UI file 'Surface2D.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURFACE2D_H
#define UI_SURFACE2D_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Surface2D
{
public:
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QFrame *verticalFrame;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QComboBox *cbx_inputA;
    QLabel *lbl_lvar_min;
    QDoubleSpinBox *sbx_min_inputA;
    QDoubleSpinBox *sbx_min_inputB;
    QComboBox *cbx_inputB;
    QDoubleSpinBox *sbx_max_inputB;
    QDoubleSpinBox *sbx_max_inputA;
    QLabel *lbl_lvar_max;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btn_inputs;
    QLabel *label_3;
    QFrame *horizontalFrame;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *cbx_output;
    QLabel *label_4;
    QDoubleSpinBox *sbx_min_output;
    QDoubleSpinBox *sbx_max_output;
    QHBoxLayout *horizontalLayout_6;
    QToolButton *btn_max_color;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *btn_min_color;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QToolButton *btn_options;
    QFrame *frm_horizontal_axis;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbl_min_a;
    QFrame *line;
    QLabel *lbl_max_a;
    QFrame *frm_vertical_axis;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_min_b;
    QFrame *line_2;
    QLabel *lbl_max_b;
    QLabel *canvas;
    QHBoxLayout *horizontalLayout_4;
    QFrame *horizontalFrame1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpinBox *sbx_width;
    QLabel *label_2;
    QSpinBox *sbx_height;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_generate;

    void setupUi(QWidget *Surface2D)
    {
        if (Surface2D->objectName().isEmpty())
            Surface2D->setObjectName(QString::fromUtf8("Surface2D"));
        Surface2D->resize(528, 513);
        verticalLayout_4 = new QVBoxLayout(Surface2D);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter = new QSplitter(Surface2D);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        verticalFrame = new QFrame(splitter);
        verticalFrame->setObjectName(QString::fromUtf8("verticalFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalFrame->sizePolicy().hasHeightForWidth());
        verticalFrame->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(verticalFrame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(verticalFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, 0, -1, -1);
        cbx_inputA = new QComboBox(frame);
        cbx_inputA->setObjectName(QString::fromUtf8("cbx_inputA"));

        gridLayout_2->addWidget(cbx_inputA, 2, 0, 1, 1);

        lbl_lvar_min = new QLabel(frame);
        lbl_lvar_min->setObjectName(QString::fromUtf8("lbl_lvar_min"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbl_lvar_min->sizePolicy().hasHeightForWidth());
        lbl_lvar_min->setSizePolicy(sizePolicy2);
        lbl_lvar_min->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbl_lvar_min, 0, 1, 1, 1);

        sbx_min_inputA = new QDoubleSpinBox(frame);
        sbx_min_inputA->setObjectName(QString::fromUtf8("sbx_min_inputA"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sbx_min_inputA->sizePolicy().hasHeightForWidth());
        sbx_min_inputA->setSizePolicy(sizePolicy3);
        sbx_min_inputA->setAlignment(Qt::AlignCenter);
        sbx_min_inputA->setAccelerated(true);
        sbx_min_inputA->setKeyboardTracking(false);
        sbx_min_inputA->setMinimum(-1e+07);
        sbx_min_inputA->setMaximum(1e+07);
        sbx_min_inputA->setSingleStep(0.1);

        gridLayout_2->addWidget(sbx_min_inputA, 2, 1, 1, 1);

        sbx_min_inputB = new QDoubleSpinBox(frame);
        sbx_min_inputB->setObjectName(QString::fromUtf8("sbx_min_inputB"));
        sizePolicy3.setHeightForWidth(sbx_min_inputB->sizePolicy().hasHeightForWidth());
        sbx_min_inputB->setSizePolicy(sizePolicy3);
        sbx_min_inputB->setAlignment(Qt::AlignCenter);
        sbx_min_inputB->setAccelerated(true);
        sbx_min_inputB->setKeyboardTracking(false);
        sbx_min_inputB->setMinimum(-1e+07);
        sbx_min_inputB->setMaximum(1e+07);
        sbx_min_inputB->setSingleStep(0.1);

        gridLayout_2->addWidget(sbx_min_inputB, 3, 1, 1, 1);

        cbx_inputB = new QComboBox(frame);
        cbx_inputB->setObjectName(QString::fromUtf8("cbx_inputB"));

        gridLayout_2->addWidget(cbx_inputB, 3, 0, 1, 1);

        sbx_max_inputB = new QDoubleSpinBox(frame);
        sbx_max_inputB->setObjectName(QString::fromUtf8("sbx_max_inputB"));
        sizePolicy3.setHeightForWidth(sbx_max_inputB->sizePolicy().hasHeightForWidth());
        sbx_max_inputB->setSizePolicy(sizePolicy3);
        sbx_max_inputB->setAlignment(Qt::AlignCenter);
        sbx_max_inputB->setAccelerated(true);
        sbx_max_inputB->setKeyboardTracking(false);
        sbx_max_inputB->setMinimum(-1e+07);
        sbx_max_inputB->setMaximum(1e+07);
        sbx_max_inputB->setSingleStep(0.1);
        sbx_max_inputB->setValue(1);

        gridLayout_2->addWidget(sbx_max_inputB, 3, 2, 1, 1);

        sbx_max_inputA = new QDoubleSpinBox(frame);
        sbx_max_inputA->setObjectName(QString::fromUtf8("sbx_max_inputA"));
        sizePolicy3.setHeightForWidth(sbx_max_inputA->sizePolicy().hasHeightForWidth());
        sbx_max_inputA->setSizePolicy(sizePolicy3);
        sbx_max_inputA->setAlignment(Qt::AlignCenter);
        sbx_max_inputA->setAccelerated(true);
        sbx_max_inputA->setKeyboardTracking(false);
        sbx_max_inputA->setMinimum(-1e+07);
        sbx_max_inputA->setMaximum(1e+07);
        sbx_max_inputA->setSingleStep(0.1);
        sbx_max_inputA->setValue(1);

        gridLayout_2->addWidget(sbx_max_inputA, 2, 2, 1, 1);

        lbl_lvar_max = new QLabel(frame);
        lbl_lvar_max->setObjectName(QString::fromUtf8("lbl_lvar_max"));
        sizePolicy2.setHeightForWidth(lbl_lvar_max->sizePolicy().hasHeightForWidth());
        lbl_lvar_max->setSizePolicy(sizePolicy2);
        lbl_lvar_max->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbl_lvar_max, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_inputs = new QToolButton(frame);
        btn_inputs->setObjectName(QString::fromUtf8("btn_inputs"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btn_inputs->sizePolicy().hasHeightForWidth());
        btn_inputs->setSizePolicy(sizePolicy4);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/input.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_inputs->setIcon(icon);
        btn_inputs->setCheckable(true);

        horizontalLayout_2->addWidget(btn_inputs);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        verticalLayout->addWidget(frame);

        horizontalFrame = new QFrame(verticalFrame);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        sizePolicy1.setHeightForWidth(horizontalFrame->sizePolicy().hasHeightForWidth());
        horizontalFrame->setSizePolicy(sizePolicy1);
        horizontalFrame->setFrameShape(QFrame::Box);
        horizontalFrame->setFrameShadow(QFrame::Sunken);
        gridLayout_3 = new QGridLayout(horizontalFrame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        cbx_output = new QComboBox(horizontalFrame);
        cbx_output->setObjectName(QString::fromUtf8("cbx_output"));
        sizePolicy1.setHeightForWidth(cbx_output->sizePolicy().hasHeightForWidth());
        cbx_output->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(cbx_output);


        gridLayout_3->addLayout(verticalLayout_2, 1, 0, 1, 1);

        label_4 = new QLabel(horizontalFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        sbx_min_output = new QDoubleSpinBox(horizontalFrame);
        sbx_min_output->setObjectName(QString::fromUtf8("sbx_min_output"));
        QSizePolicy sizePolicy6(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(sbx_min_output->sizePolicy().hasHeightForWidth());
        sbx_min_output->setSizePolicy(sizePolicy6);
        sbx_min_output->setAlignment(Qt::AlignCenter);
        sbx_min_output->setReadOnly(true);
        sbx_min_output->setKeyboardTracking(false);

        gridLayout_3->addWidget(sbx_min_output, 1, 1, 1, 1);

        sbx_max_output = new QDoubleSpinBox(horizontalFrame);
        sbx_max_output->setObjectName(QString::fromUtf8("sbx_max_output"));
        sizePolicy6.setHeightForWidth(sbx_max_output->sizePolicy().hasHeightForWidth());
        sbx_max_output->setSizePolicy(sizePolicy6);
        sbx_max_output->setAlignment(Qt::AlignCenter);
        sbx_max_output->setReadOnly(true);
        sbx_max_output->setKeyboardTracking(false);

        gridLayout_3->addWidget(sbx_max_output, 1, 2, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btn_max_color = new QToolButton(horizontalFrame);
        btn_max_color->setObjectName(QString::fromUtf8("btn_max_color"));
        QSizePolicy sizePolicy7(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(btn_max_color->sizePolicy().hasHeightForWidth());
        btn_max_color->setSizePolicy(sizePolicy7);
        btn_max_color->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_6->addWidget(btn_max_color);


        gridLayout_3->addLayout(horizontalLayout_6, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_min_color = new QToolButton(horizontalFrame);
        btn_min_color->setObjectName(QString::fromUtf8("btn_min_color"));
        sizePolicy7.setHeightForWidth(btn_min_color->sizePolicy().hasHeightForWidth());
        btn_min_color->setSizePolicy(sizePolicy7);
        btn_min_color->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(btn_min_color);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 1, 1, 1);


        verticalLayout->addWidget(horizontalFrame);

        splitter->addWidget(verticalFrame);
        gridFrame = new QFrame(splitter);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(gridFrame->sizePolicy().hasHeightForWidth());
        gridFrame->setSizePolicy(sizePolicy8);
        gridFrame->setFrameShape(QFrame::Box);
        gridFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, 6, 6, 6);
        btn_options = new QToolButton(gridFrame);
        btn_options->setObjectName(QString::fromUtf8("btn_options"));
        QSizePolicy sizePolicy9(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(btn_options->sizePolicy().hasHeightForWidth());
        btn_options->setSizePolicy(sizePolicy9);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/visualization.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_options->setIcon(icon1);
        btn_options->setCheckable(true);

        gridLayout->addWidget(btn_options, 0, 0, 1, 1);

        frm_horizontal_axis = new QFrame(gridFrame);
        frm_horizontal_axis->setObjectName(QString::fromUtf8("frm_horizontal_axis"));
        horizontalLayout_8 = new QHBoxLayout(frm_horizontal_axis);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        lbl_min_a = new QLabel(frm_horizontal_axis);
        lbl_min_a->setObjectName(QString::fromUtf8("lbl_min_a"));
        sizePolicy9.setHeightForWidth(lbl_min_a->sizePolicy().hasHeightForWidth());
        lbl_min_a->setSizePolicy(sizePolicy9);

        horizontalLayout_8->addWidget(lbl_min_a);

        line = new QFrame(frm_horizontal_axis);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy10(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy10);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line);

        lbl_max_a = new QLabel(frm_horizontal_axis);
        lbl_max_a->setObjectName(QString::fromUtf8("lbl_max_a"));
        sizePolicy9.setHeightForWidth(lbl_max_a->sizePolicy().hasHeightForWidth());
        lbl_max_a->setSizePolicy(sizePolicy9);

        horizontalLayout_8->addWidget(lbl_max_a);


        gridLayout->addWidget(frm_horizontal_axis, 0, 1, 1, 1);

        frm_vertical_axis = new QFrame(gridFrame);
        frm_vertical_axis->setObjectName(QString::fromUtf8("frm_vertical_axis"));
        verticalLayout_3 = new QVBoxLayout(frm_vertical_axis);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbl_min_b = new QLabel(frm_vertical_axis);
        lbl_min_b->setObjectName(QString::fromUtf8("lbl_min_b"));
        sizePolicy9.setHeightForWidth(lbl_min_b->sizePolicy().hasHeightForWidth());
        lbl_min_b->setSizePolicy(sizePolicy9);
        lbl_min_b->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbl_min_b);

        line_2 = new QFrame(frm_vertical_axis);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        QSizePolicy sizePolicy11(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy11);
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        lbl_max_b = new QLabel(frm_vertical_axis);
        lbl_max_b->setObjectName(QString::fromUtf8("lbl_max_b"));
        sizePolicy9.setHeightForWidth(lbl_max_b->sizePolicy().hasHeightForWidth());
        lbl_max_b->setSizePolicy(sizePolicy9);
        lbl_max_b->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lbl_max_b);


        gridLayout->addWidget(frm_vertical_axis, 1, 0, 1, 1);

        canvas = new QLabel(gridFrame);
        canvas->setObjectName(QString::fromUtf8("canvas"));
        QSizePolicy sizePolicy12(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(canvas->sizePolicy().hasHeightForWidth());
        canvas->setSizePolicy(sizePolicy12);
        canvas->setMouseTracking(true);
        canvas->setStyleSheet(QString::fromUtf8(""));
        canvas->setFrameShape(QFrame::Box);
        canvas->setFrameShadow(QFrame::Sunken);
        canvas->setScaledContents(true);
        canvas->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(canvas, 1, 1, 1, 1);

        splitter->addWidget(gridFrame);

        verticalLayout_4->addWidget(splitter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalFrame1 = new QFrame(Surface2D);
        horizontalFrame1->setObjectName(QString::fromUtf8("horizontalFrame1"));
        QSizePolicy sizePolicy13(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy13.setHorizontalStretch(0);
        sizePolicy13.setVerticalStretch(0);
        sizePolicy13.setHeightForWidth(horizontalFrame1->sizePolicy().hasHeightForWidth());
        horizontalFrame1->setSizePolicy(sizePolicy13);
        horizontalFrame1->setFrameShape(QFrame::Box);
        horizontalFrame1->setFrameShadow(QFrame::Sunken);
        horizontalLayout_5 = new QHBoxLayout(horizontalFrame1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(horizontalFrame1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label);

        sbx_width = new QSpinBox(horizontalFrame1);
        sbx_width->setObjectName(QString::fromUtf8("sbx_width"));
        sizePolicy.setHeightForWidth(sbx_width->sizePolicy().hasHeightForWidth());
        sbx_width->setSizePolicy(sizePolicy);
        sbx_width->setMinimumSize(QSize(100, 0));
        sbx_width->setAlignment(Qt::AlignCenter);
        sbx_width->setKeyboardTracking(false);
        sbx_width->setMinimum(8);
        sbx_width->setMaximum(2048);
        sbx_width->setSingleStep(8);
        sbx_width->setValue(128);

        horizontalLayout_5->addWidget(sbx_width);

        label_2 = new QLabel(horizontalFrame1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_2);

        sbx_height = new QSpinBox(horizontalFrame1);
        sbx_height->setObjectName(QString::fromUtf8("sbx_height"));
        sizePolicy.setHeightForWidth(sbx_height->sizePolicy().hasHeightForWidth());
        sbx_height->setSizePolicy(sizePolicy);
        sbx_height->setMinimumSize(QSize(100, 0));
        sbx_height->setAlignment(Qt::AlignCenter);
        sbx_height->setKeyboardTracking(false);
        sbx_height->setMinimum(8);
        sbx_height->setMaximum(2048);
        sbx_height->setSingleStep(8);
        sbx_height->setValue(128);

        horizontalLayout_5->addWidget(sbx_height);


        horizontalLayout_4->addWidget(horizontalFrame1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_generate = new QPushButton(Surface2D);
        btn_generate->setObjectName(QString::fromUtf8("btn_generate"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/surface2d-generate.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_generate->setIcon(icon2);
        btn_generate->setIconSize(QSize(16, 16));
        btn_generate->setAutoDefault(true);
        btn_generate->setDefault(true);

        horizontalLayout_4->addWidget(btn_generate);


        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(Surface2D);

        QMetaObject::connectSlotsByName(Surface2D);
    } // setupUi

    void retranslateUi(QWidget *Surface2D)
    {
        Surface2D->setWindowTitle(QApplication::translate("Surface2D", "Surface 2D", 0, QApplication::UnicodeUTF8));
        lbl_lvar_min->setText(QApplication::translate("Surface2D", "Minimum", 0, QApplication::UnicodeUTF8));
        lbl_lvar_max->setText(QApplication::translate("Surface2D", "Maximum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_inputs->setToolTip(QApplication::translate("Surface2D", "Input variables", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_inputs->setText(QString());
        label_3->setText(QApplication::translate("Surface2D", "Inputs", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Surface2D", "Output", 0, QApplication::UnicodeUTF8));
        btn_max_color->setText(QApplication::translate("Surface2D", "Maximum", 0, QApplication::UnicodeUTF8));
        btn_min_color->setText(QApplication::translate("Surface2D", "Minimum", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_options->setToolTip(QApplication::translate("Surface2D", "Options...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_options->setText(QApplication::translate("Surface2D", "...", 0, QApplication::UnicodeUTF8));
        lbl_min_a->setText(QApplication::translate("Surface2D", "min", 0, QApplication::UnicodeUTF8));
        lbl_max_a->setText(QApplication::translate("Surface2D", "max", 0, QApplication::UnicodeUTF8));
        lbl_min_b->setText(QApplication::translate("Surface2D", "min", 0, QApplication::UnicodeUTF8));
        lbl_max_b->setText(QApplication::translate("Surface2D", "max", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Surface2D", "Width", 0, QApplication::UnicodeUTF8));
        sbx_width->setSuffix(QApplication::translate("Surface2D", "px", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Surface2D", "Height", 0, QApplication::UnicodeUTF8));
        sbx_height->setSuffix(QApplication::translate("Surface2D", "px", 0, QApplication::UnicodeUTF8));
        btn_generate->setText(QApplication::translate("Surface2D", "Generate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Surface2D: public Ui_Surface2D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURFACE2D_H
