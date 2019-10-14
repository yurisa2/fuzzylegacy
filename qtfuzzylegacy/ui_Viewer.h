/********************************************************************************
** Form generated from reading UI file 'Viewer.ui'
**
** Created: Mon Oct 14 09:14:43 2019
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWER_H
#define UI_VIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSlider>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Viewer
{
public:
    QVBoxLayout *mainLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_name;
    QWidget *wdg_minmax;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_min;
    QFrame *line_2;
    QDoubleSpinBox *sbx_x;
    QLineEdit *led_x;
    QFrame *line;
    QLabel *lbl_max;
    QWidget *wdg_canvas;
    QHBoxLayout *lyt_canvas;
    QGraphicsView *canvas;
    QSlider *sld_x;
    QWidget *wdg_out;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_fuzzy_out;
    QLabel *lbl_fuzzy;
    QFrame *bottom_line;

    void setupUi(QWidget *Viewer)
    {
        if (Viewer->objectName().isEmpty())
            Viewer->setObjectName(QString::fromUtf8("Viewer"));
        Viewer->resize(328, 306);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Viewer->sizePolicy().hasHeightForWidth());
        Viewer->setSizePolicy(sizePolicy);
        Viewer->setFocusPolicy(Qt::NoFocus);
        mainLayout = new QVBoxLayout(Viewer);
        mainLayout->setSpacing(0);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(3, 0, 3, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        btn_name = new QToolButton(Viewer);
        btn_name->setObjectName(QString::fromUtf8("btn_name"));
        btn_name->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_name->sizePolicy().hasHeightForWidth());
        btn_name->setSizePolicy(sizePolicy1);
        btn_name->setCheckable(true);
        btn_name->setChecked(false);
        btn_name->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_name->setAutoRaise(true);

        horizontalLayout->addWidget(btn_name);


        mainLayout->addLayout(horizontalLayout);

        wdg_minmax = new QWidget(Viewer);
        wdg_minmax->setObjectName(QString::fromUtf8("wdg_minmax"));
        horizontalLayout_2 = new QHBoxLayout(wdg_minmax);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_min = new QLabel(wdg_minmax);
        lbl_min->setObjectName(QString::fromUtf8("lbl_min"));

        horizontalLayout_2->addWidget(lbl_min);

        line_2 = new QFrame(wdg_minmax);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        sizePolicy1.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy1);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        sbx_x = new QDoubleSpinBox(wdg_minmax);
        sbx_x->setObjectName(QString::fromUtf8("sbx_x"));
        sbx_x->setFocusPolicy(Qt::ClickFocus);
        sbx_x->setAlignment(Qt::AlignCenter);
        sbx_x->setAccelerated(true);
        sbx_x->setKeyboardTracking(false);
        sbx_x->setDecimals(3);
        sbx_x->setMinimum(-1e+07);
        sbx_x->setMaximum(1e+07);
        sbx_x->setSingleStep(0.1);
        sbx_x->setValue(0);

        horizontalLayout_2->addWidget(sbx_x);

        led_x = new QLineEdit(wdg_minmax);
        led_x->setObjectName(QString::fromUtf8("led_x"));
        led_x->setMaximumSize(QSize(70, 16777215));
        led_x->setAlignment(Qt::AlignCenter);
        led_x->setReadOnly(true);

        horizontalLayout_2->addWidget(led_x);

        line = new QFrame(wdg_minmax);
        line->setObjectName(QString::fromUtf8("line"));
        sizePolicy1.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy1);
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        lbl_max = new QLabel(wdg_minmax);
        lbl_max->setObjectName(QString::fromUtf8("lbl_max"));
        lbl_max->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lbl_max);


        mainLayout->addWidget(wdg_minmax);

        wdg_canvas = new QWidget(Viewer);
        wdg_canvas->setObjectName(QString::fromUtf8("wdg_canvas"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(wdg_canvas->sizePolicy().hasHeightForWidth());
        wdg_canvas->setSizePolicy(sizePolicy2);
        lyt_canvas = new QHBoxLayout(wdg_canvas);
        lyt_canvas->setObjectName(QString::fromUtf8("lyt_canvas"));
        lyt_canvas->setContentsMargins(6, 3, 6, 0);
        canvas = new QGraphicsView(wdg_canvas);
        canvas->setObjectName(QString::fromUtf8("canvas"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(canvas->sizePolicy().hasHeightForWidth());
        canvas->setSizePolicy(sizePolicy3);
        canvas->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        canvas->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        canvas->setInteractive(false);
        canvas->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing|QPainter::SmoothPixmapTransform);
        canvas->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);

        lyt_canvas->addWidget(canvas);


        mainLayout->addWidget(wdg_canvas);

        sld_x = new QSlider(Viewer);
        sld_x->setObjectName(QString::fromUtf8("sld_x"));
        sld_x->setCursor(QCursor(Qt::OpenHandCursor));
        sld_x->setFocusPolicy(Qt::NoFocus);
        sld_x->setMaximum(1000);
        sld_x->setSingleStep(10);
        sld_x->setPageStep(20);
        sld_x->setValue(0);
        sld_x->setSliderPosition(0);
        sld_x->setTracking(true);
        sld_x->setOrientation(Qt::Horizontal);
        sld_x->setInvertedAppearance(false);
        sld_x->setInvertedControls(false);
        sld_x->setTickPosition(QSlider::TicksAbove);
        sld_x->setTickInterval(50);

        mainLayout->addWidget(sld_x);

        wdg_out = new QWidget(Viewer);
        wdg_out->setObjectName(QString::fromUtf8("wdg_out"));
        horizontalLayout_4 = new QHBoxLayout(wdg_out);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 3);
        lbl_fuzzy_out = new QLabel(wdg_out);
        lbl_fuzzy_out->setObjectName(QString::fromUtf8("lbl_fuzzy_out"));
        QSizePolicy sizePolicy4(QSizePolicy::Ignored, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lbl_fuzzy_out->sizePolicy().hasHeightForWidth());
        lbl_fuzzy_out->setSizePolicy(sizePolicy4);
        lbl_fuzzy_out->setTextFormat(Qt::RichText);
        lbl_fuzzy_out->setScaledContents(true);
        lbl_fuzzy_out->setAlignment(Qt::AlignCenter);
        lbl_fuzzy_out->setWordWrap(true);
        lbl_fuzzy_out->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(lbl_fuzzy_out);

        lbl_fuzzy = new QLabel(wdg_out);
        lbl_fuzzy->setObjectName(QString::fromUtf8("lbl_fuzzy"));
        sizePolicy4.setHeightForWidth(lbl_fuzzy->sizePolicy().hasHeightForWidth());
        lbl_fuzzy->setSizePolicy(sizePolicy4);
        lbl_fuzzy->setTextFormat(Qt::RichText);
        lbl_fuzzy->setScaledContents(true);
        lbl_fuzzy->setAlignment(Qt::AlignCenter);
        lbl_fuzzy->setWordWrap(true);
        lbl_fuzzy->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(lbl_fuzzy);


        mainLayout->addWidget(wdg_out);

        bottom_line = new QFrame(Viewer);
        bottom_line->setObjectName(QString::fromUtf8("bottom_line"));
        bottom_line->setFrameShape(QFrame::HLine);
        bottom_line->setFrameShadow(QFrame::Sunken);

        mainLayout->addWidget(bottom_line);


        retranslateUi(Viewer);

        QMetaObject::connectSlotsByName(Viewer);
    } // setupUi

    void retranslateUi(QWidget *Viewer)
    {
        Viewer->setWindowTitle(QApplication::translate("Viewer", "Form", 0, QApplication::UnicodeUTF8));
        btn_name->setText(QApplication::translate("Viewer", "name", 0, QApplication::UnicodeUTF8));
        lbl_min->setText(QApplication::translate("Viewer", "min", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sbx_x->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        led_x->setToolTip(QApplication::translate("Viewer", "Defuzzified output", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        lbl_max->setText(QApplication::translate("Viewer", "max", 0, QApplication::UnicodeUTF8));
        lbl_fuzzy_out->setText(QString());
        lbl_fuzzy->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Viewer: public Ui_Viewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWER_H
