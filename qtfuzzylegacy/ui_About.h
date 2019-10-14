/********************************************************************************
** Form generated from reading UI file 'About.ui'
**
** Created: Mon Oct 14 09:14:43 2019
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSlider>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_header;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *donation;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *sld_donation;
    QVBoxLayout *verticalLayout_4;
    QComboBox *cbx_donation;
    QLabel *lbl_donate;
    QLabel *label_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QString::fromUtf8("About"));
        About->resize(317, 391);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qtfuzzylite.png"), QSize(), QIcon::Normal, QIcon::Off);
        About->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(About);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_header = new QLabel(About);
        lbl_header->setObjectName(QString::fromUtf8("lbl_header"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_header->sizePolicy().hasHeightForWidth());
        lbl_header->setSizePolicy(sizePolicy);
        lbl_header->setFrameShape(QFrame::Box);
        lbl_header->setFrameShadow(QFrame::Raised);
        lbl_header->setScaledContents(true);
        lbl_header->setAlignment(Qt::AlignCenter);
        lbl_header->setOpenExternalLinks(true);
        lbl_header->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout->addWidget(lbl_header);

        frame = new QFrame(About);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(frame_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, -1);
        donation = new QLabel(frame_2);
        donation->setObjectName(QString::fromUtf8("donation"));
        sizePolicy.setHeightForWidth(donation->sizePolicy().hasHeightForWidth());
        donation->setSizePolicy(sizePolicy);
        donation->setMinimumSize(QSize(128, 64));
        donation->setMaximumSize(QSize(128, 64));
        donation->setPixmap(QPixmap(QString::fromUtf8(":/generosity.png")));
        donation->setScaledContents(true);
        donation->setAlignment(Qt::AlignCenter);
        donation->setMargin(0);

        verticalLayout_5->addWidget(donation);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_5);


        verticalLayout_5->addLayout(horizontalLayout);

        sld_donation = new QSlider(frame_2);
        sld_donation->setObjectName(QString::fromUtf8("sld_donation"));
        sld_donation->setFocusPolicy(Qt::NoFocus);
        sld_donation->setMinimum(0);
        sld_donation->setMaximum(8);
        sld_donation->setPageStep(2);
        sld_donation->setValue(4);
        sld_donation->setOrientation(Qt::Horizontal);
        sld_donation->setInvertedAppearance(false);
        sld_donation->setInvertedControls(false);
        sld_donation->setTickPosition(QSlider::TicksAbove);
        sld_donation->setTickInterval(2);

        verticalLayout_5->addWidget(sld_donation);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, -1);
        cbx_donation = new QComboBox(frame_2);
        cbx_donation->setObjectName(QString::fromUtf8("cbx_donation"));
        cbx_donation->setMaxCount(9);

        verticalLayout_4->addWidget(cbx_donation);

        lbl_donate = new QLabel(frame_2);
        lbl_donate->setObjectName(QString::fromUtf8("lbl_donate"));
        lbl_donate->setFrameShape(QFrame::NoFrame);
        lbl_donate->setFrameShadow(QFrame::Raised);
        lbl_donate->setAlignment(Qt::AlignCenter);
        lbl_donate->setOpenExternalLinks(true);

        verticalLayout_4->addWidget(lbl_donate);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(frame_2);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setTextFormat(Qt::RichText);
        label_6->setWordWrap(true);

        verticalLayout_2->addWidget(label_6);


        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(About);
        QObject::connect(buttonBox, SIGNAL(accepted()), About, SLOT(accept()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About qtfuzzylite", 0, QApplication::UnicodeUTF8));
        lbl_header->setText(QString());
        label_2->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\">\n"
"Please consider making a <b>donation</b> to support these projects.<br>\n"
"There are still many things to do!</p>\n"
"</body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("About", "Donation", 0, QApplication::UnicodeUTF8));
        donation->setText(QString());
        label_3->setText(QApplication::translate("About", "LOW", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("About", "MED", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("About", "HIGH", 0, QApplication::UnicodeUTF8));
        lbl_donate->setText(QString());
        label_6->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\">... and do not hesitate to provide feedback, submit feature requests, or anything else!</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
