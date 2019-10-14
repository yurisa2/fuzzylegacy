/********************************************************************************
** Form generated from reading UI file 'Window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolBar>
#include <QtGui/QToolBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QAction *actionTerms;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionNew;
    QAction *actionAbout;
    QAction *actionQuit;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionProperties;
    QAction *actionOpenRecent;
    QAction *actionReload;
    QAction *actionAboutQt;
    QAction *actionAskForHelp;
    QAction *actionJoinTheCommunity;
    QAction *actionSurface2D;
    QAction *actionFollowOnTwitter;
    QAction *actionCheckForUpdates;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QToolBox *tab_container;
    QWidget *tab_containerPage1;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *led_name;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QSplitter *spl_VarsRules;
    QSplitter *splVariables;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_inputs;
    QToolButton *btn_add_input;
    QToolButton *btn_remove_input;
    QToolButton *btn_edit_input;
    QSplitter *splInput;
    QListWidget *lvw_inputs;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_outputs;
    QToolButton *btn_add_output;
    QToolButton *btn_remove_output;
    QToolButton *btn_edit_output;
    QSplitter *splOutput;
    QListWidget *lvw_outputs;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *hly_rules_setup;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *qwd_cbx_norms;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *cbxTnorm;
    QComboBox *cbxSnorm;
    QComboBox *cbxActivation;
    QSpacerItem *horizontalSpacer_4;
    QToolButton *btn_hedges;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_generate_rules;
    QToolButton *btn_parse_rules;
    QPlainTextEdit *ptx_rules;
    QWidget *tab_containerPage2;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame;
    QVBoxLayout *verticalLayout_6;
    QSplitter *spl_control_inout_rules;
    QSplitter *spl_control_inout;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_16;
    QToolButton *btn_inputs;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *scrollAreaInput;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_11;
    QFrame *inputVariables;
    QVBoxLayout *verticalLayout_8;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_18;
    QToolButton *btn_outputs;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_17;
    QScrollArea *scrollAreaOutput;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_12;
    QFrame *outputVariables;
    QVBoxLayout *verticalLayout_9;
    QSplitter *spl_control_rule_strength;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *hly_rules_control;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *lsw_test_rules;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_7;
    QListWidget *lsw_test_rules_activation;
    QToolBar *toolBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(588, 547);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Window->sizePolicy().hasHeightForWidth());
        Window->setSizePolicy(sizePolicy);
        Window->setBaseSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/qtfuzzylegacy.png"), QSize(), QIcon::Normal, QIcon::Off);
        Window->setWindowIcon(icon);
        Window->setUnifiedTitleAndToolBarOnMac(true);
        actionTerms = new QAction(Window);
        actionTerms->setObjectName(QString::fromUtf8("actionTerms"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/terms.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerms->setIcon(icon1);
        actionTerms->setIconVisibleInMenu(true);
        actionImport = new QAction(Window);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionImport->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon2);
        actionImport->setIconVisibleInMenu(true);
        actionExport = new QAction(Window);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionExport->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon3);
        actionExport->setIconVisibleInMenu(true);
        actionNew = new QAction(Window);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon4);
        actionNew->setIconVisibleInMenu(true);
        actionAbout = new QAction(Window);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        actionAbout->setMenuRole(QAction::AboutRole);
        actionAbout->setIconVisibleInMenu(true);
        actionQuit = new QAction(Window);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon6);
        actionQuit->setMenuRole(QAction::QuitRole);
        actionQuit->setIconVisibleInMenu(true);
        actionOpen = new QAction(Window);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon7);
        actionOpen->setIconVisibleInMenu(true);
        actionSave = new QAction(Window);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon8);
        actionSave->setIconVisibleInMenu(true);
        actionSaveAs = new QAction(Window);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/save-as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon9);
        actionSaveAs->setIconVisibleInMenu(true);
        actionProperties = new QAction(Window);
        actionProperties->setObjectName(QString::fromUtf8("actionProperties"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/properties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionProperties->setIcon(icon10);
        actionProperties->setIconVisibleInMenu(true);
        actionOpenRecent = new QAction(Window);
        actionOpenRecent->setObjectName(QString::fromUtf8("actionOpenRecent"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/open-recent.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenRecent->setIcon(icon11);
        actionOpenRecent->setIconVisibleInMenu(true);
        actionReload = new QAction(Window);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReload->setIcon(icon12);
        actionReload->setIconVisibleInMenu(true);
        actionAboutQt = new QAction(Window);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/qt-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAboutQt->setIcon(icon13);
        actionAboutQt->setMenuRole(QAction::AboutQtRole);
        actionAboutQt->setIconVisibleInMenu(true);
        actionAskForHelp = new QAction(Window);
        actionAskForHelp->setObjectName(QString::fromUtf8("actionAskForHelp"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAskForHelp->setIcon(icon14);
        actionAskForHelp->setIconVisibleInMenu(true);
        actionJoinTheCommunity = new QAction(Window);
        actionJoinTheCommunity->setObjectName(QString::fromUtf8("actionJoinTheCommunity"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/community.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJoinTheCommunity->setIcon(icon15);
        actionSurface2D = new QAction(Window);
        actionSurface2D->setObjectName(QString::fromUtf8("actionSurface2D"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/surface2d.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSurface2D->setIcon(icon16);
        actionFollowOnTwitter = new QAction(Window);
        actionFollowOnTwitter->setObjectName(QString::fromUtf8("actionFollowOnTwitter"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFollowOnTwitter->setIcon(icon17);
        actionCheckForUpdates = new QAction(Window);
        actionCheckForUpdates->setObjectName(QString::fromUtf8("actionCheckForUpdates"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/updates.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckForUpdates->setIcon(icon18);
        centralwidget = new QWidget(Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 12);
        tab_container = new QToolBox(centralwidget);
        tab_container->setObjectName(QString::fromUtf8("tab_container"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tab_container->sizePolicy().hasHeightForWidth());
        tab_container->setSizePolicy(sizePolicy1);
        tab_containerPage1 = new QWidget();
        tab_containerPage1->setObjectName(QString::fromUtf8("tab_containerPage1"));
        tab_containerPage1->setGeometry(QRect(0, 0, 588, 408));
        verticalLayout_4 = new QVBoxLayout(tab_containerPage1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(9, 6, 9, 3);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setContentsMargins(-1, 0, -1, -1);
        label_2 = new QLabel(tab_containerPage1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        led_name = new QLineEdit(tab_containerPage1);
        led_name->setObjectName(QString::fromUtf8("led_name"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(led_name->sizePolicy().hasHeightForWidth());
        led_name->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::FieldRole, led_name);


        verticalLayout_4->addLayout(formLayout);

        frame_2 = new QFrame(tab_containerPage1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        spl_VarsRules = new QSplitter(frame_2);
        spl_VarsRules->setObjectName(QString::fromUtf8("spl_VarsRules"));
        spl_VarsRules->setOrientation(Qt::Vertical);
        splVariables = new QSplitter(spl_VarsRules);
        splVariables->setObjectName(QString::fromUtf8("splVariables"));
        splVariables->setOrientation(Qt::Horizontal);
        verticalLayoutWidget_4 = new QWidget(splVariables);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_inputs = new QLabel(verticalLayoutWidget_4);
        lbl_inputs->setObjectName(QString::fromUtf8("lbl_inputs"));
        lbl_inputs->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(lbl_inputs);

        btn_add_input = new QToolButton(verticalLayoutWidget_4);
        btn_add_input->setObjectName(QString::fromUtf8("btn_add_input"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_add_input->setIcon(icon19);

        horizontalLayout_2->addWidget(btn_add_input);

        btn_remove_input = new QToolButton(verticalLayoutWidget_4);
        btn_remove_input->setObjectName(QString::fromUtf8("btn_remove_input"));
        btn_remove_input->setEnabled(false);
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_remove_input->setIcon(icon20);

        horizontalLayout_2->addWidget(btn_remove_input);

        btn_edit_input = new QToolButton(verticalLayoutWidget_4);
        btn_edit_input->setObjectName(QString::fromUtf8("btn_edit_input"));
        btn_edit_input->setEnabled(false);
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit_input->setIcon(icon21);

        horizontalLayout_2->addWidget(btn_edit_input);


        verticalLayout_7->addLayout(horizontalLayout_2);

        splInput = new QSplitter(verticalLayoutWidget_4);
        splInput->setObjectName(QString::fromUtf8("splInput"));
        splInput->setOrientation(Qt::Horizontal);
        lvw_inputs = new QListWidget(splInput);
        lvw_inputs->setObjectName(QString::fromUtf8("lvw_inputs"));
        lvw_inputs->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lvw_inputs->setSelectionBehavior(QAbstractItemView::SelectRows);
        splInput->addWidget(lvw_inputs);

        verticalLayout_7->addWidget(splInput);

        splVariables->addWidget(verticalLayoutWidget_4);
        verticalLayoutWidget_3 = new QWidget(splVariables);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbl_outputs = new QLabel(verticalLayoutWidget_3);
        lbl_outputs->setObjectName(QString::fromUtf8("lbl_outputs"));
        lbl_outputs->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(lbl_outputs);

        btn_add_output = new QToolButton(verticalLayoutWidget_3);
        btn_add_output->setObjectName(QString::fromUtf8("btn_add_output"));
        btn_add_output->setIcon(icon19);

        horizontalLayout_3->addWidget(btn_add_output);

        btn_remove_output = new QToolButton(verticalLayoutWidget_3);
        btn_remove_output->setObjectName(QString::fromUtf8("btn_remove_output"));
        btn_remove_output->setEnabled(false);
        btn_remove_output->setIcon(icon20);

        horizontalLayout_3->addWidget(btn_remove_output);

        btn_edit_output = new QToolButton(verticalLayoutWidget_3);
        btn_edit_output->setObjectName(QString::fromUtf8("btn_edit_output"));
        btn_edit_output->setEnabled(false);
        btn_edit_output->setIcon(icon21);

        horizontalLayout_3->addWidget(btn_edit_output);


        verticalLayout_2->addLayout(horizontalLayout_3);

        splOutput = new QSplitter(verticalLayoutWidget_3);
        splOutput->setObjectName(QString::fromUtf8("splOutput"));
        splOutput->setOrientation(Qt::Horizontal);
        lvw_outputs = new QListWidget(splOutput);
        lvw_outputs->setObjectName(QString::fromUtf8("lvw_outputs"));
        lvw_outputs->setSelectionMode(QAbstractItemView::ExtendedSelection);
        lvw_outputs->setSelectionBehavior(QAbstractItemView::SelectRows);
        splOutput->addWidget(lvw_outputs);

        verticalLayout_2->addWidget(splOutput);

        splVariables->addWidget(verticalLayoutWidget_3);
        spl_VarsRules->addWidget(splVariables);
        layoutWidget2 = new QWidget(spl_VarsRules);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        verticalLayout_10 = new QVBoxLayout(layoutWidget2);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        hly_rules_setup = new QHBoxLayout();
        hly_rules_setup->setSpacing(6);
        hly_rules_setup->setObjectName(QString::fromUtf8("hly_rules_setup"));
        hly_rules_setup->setContentsMargins(-1, 0, -1, -1);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hly_rules_setup->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hly_rules_setup->addItem(horizontalSpacer_2);

        qwd_cbx_norms = new QWidget(layoutWidget2);
        qwd_cbx_norms->setObjectName(QString::fromUtf8("qwd_cbx_norms"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(qwd_cbx_norms->sizePolicy().hasHeightForWidth());
        qwd_cbx_norms->setSizePolicy(sizePolicy4);
        qwd_cbx_norms->setAutoFillBackground(true);
        horizontalLayout_5 = new QHBoxLayout(qwd_cbx_norms);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(1, 0, 1, 0);
        cbxTnorm = new QComboBox(qwd_cbx_norms);
        cbxTnorm->setObjectName(QString::fromUtf8("cbxTnorm"));

        horizontalLayout_5->addWidget(cbxTnorm);

        cbxSnorm = new QComboBox(qwd_cbx_norms);
        cbxSnorm->setObjectName(QString::fromUtf8("cbxSnorm"));

        horizontalLayout_5->addWidget(cbxSnorm);

        cbxActivation = new QComboBox(qwd_cbx_norms);
        cbxActivation->setObjectName(QString::fromUtf8("cbxActivation"));

        horizontalLayout_5->addWidget(cbxActivation);


        hly_rules_setup->addWidget(qwd_cbx_norms);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hly_rules_setup->addItem(horizontalSpacer_4);

        btn_hedges = new QToolButton(layoutWidget2);
        btn_hedges->setObjectName(QString::fromUtf8("btn_hedges"));
        btn_hedges->setCheckable(true);

        hly_rules_setup->addWidget(btn_hedges);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        btn_generate_rules = new QToolButton(layoutWidget2);
        btn_generate_rules->setObjectName(QString::fromUtf8("btn_generate_rules"));
#ifndef QT_NO_TOOLTIP
        btn_generate_rules->setToolTip(QString::fromUtf8("Create combinations of rules"));
#endif // QT_NO_TOOLTIP
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/create-rules.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_generate_rules->setIcon(icon22);

        horizontalLayout->addWidget(btn_generate_rules);

        btn_parse_rules = new QToolButton(layoutWidget2);
        btn_parse_rules->setObjectName(QString::fromUtf8("btn_parse_rules"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/process.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_parse_rules->setIcon(icon23);

        horizontalLayout->addWidget(btn_parse_rules);


        hly_rules_setup->addLayout(horizontalLayout);


        verticalLayout_10->addLayout(hly_rules_setup);

        ptx_rules = new QPlainTextEdit(layoutWidget2);
        ptx_rules->setObjectName(QString::fromUtf8("ptx_rules"));
        ptx_rules->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ptx_rules->setLineWrapMode(QPlainTextEdit::NoWrap);
        ptx_rules->setBackgroundVisible(false);

        verticalLayout_10->addWidget(ptx_rules);

        spl_VarsRules->addWidget(layoutWidget2);

        verticalLayout_3->addWidget(spl_VarsRules);


        verticalLayout_4->addWidget(frame_2);

        tab_container->addItem(tab_containerPage1, QString::fromUtf8("Setup"));
        tab_containerPage2 = new QWidget();
        tab_containerPage2->setObjectName(QString::fromUtf8("tab_containerPage2"));
        tab_containerPage2->setGeometry(QRect(0, 0, 216, 262));
        verticalLayout_13 = new QVBoxLayout(tab_containerPage2);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(9, 6, 9, 3);
        frame = new QFrame(tab_containerPage2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_6 = new QVBoxLayout(frame);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        spl_control_inout_rules = new QSplitter(frame);
        spl_control_inout_rules->setObjectName(QString::fromUtf8("spl_control_inout_rules"));
        spl_control_inout_rules->setOrientation(Qt::Vertical);
        spl_control_inout = new QSplitter(spl_control_inout_rules);
        spl_control_inout->setObjectName(QString::fromUtf8("spl_control_inout"));
        sizePolicy1.setHeightForWidth(spl_control_inout->sizePolicy().hasHeightForWidth());
        spl_control_inout->setSizePolicy(sizePolicy1);
        spl_control_inout->setOrientation(Qt::Horizontal);
        layoutWidget3 = new QWidget(spl_control_inout);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        verticalLayout_16 = new QVBoxLayout(layoutWidget3);
        verticalLayout_16->setSpacing(3);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        btn_inputs = new QToolButton(layoutWidget3);
        btn_inputs->setObjectName(QString::fromUtf8("btn_inputs"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btn_inputs->sizePolicy().hasHeightForWidth());
        btn_inputs->setSizePolicy(sizePolicy5);
        btn_inputs->setCheckable(true);
        btn_inputs->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_inputs->setAutoRaise(true);

        verticalLayout_16->addWidget(btn_inputs);

        frame_3 = new QFrame(layoutWidget3);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_3);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(3, 3, 3, 3);
        scrollAreaInput = new QScrollArea(frame_3);
        scrollAreaInput->setObjectName(QString::fromUtf8("scrollAreaInput"));
        sizePolicy1.setHeightForWidth(scrollAreaInput->sizePolicy().hasHeightForWidth());
        scrollAreaInput->setSizePolicy(sizePolicy1);
        scrollAreaInput->setFrameShape(QFrame::NoFrame);
        scrollAreaInput->setFrameShadow(QFrame::Plain);
        scrollAreaInput->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaInput->setWidgetResizable(true);
        scrollAreaInput->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 100, 30));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        inputVariables = new QFrame(scrollAreaWidgetContents);
        inputVariables->setObjectName(QString::fromUtf8("inputVariables"));
        sizePolicy1.setHeightForWidth(inputVariables->sizePolicy().hasHeightForWidth());
        inputVariables->setSizePolicy(sizePolicy1);
        verticalLayout_8 = new QVBoxLayout(inputVariables);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(3, -1, 3, -1);

        verticalLayout_11->addWidget(inputVariables);

        scrollAreaInput->setWidget(scrollAreaWidgetContents);

        verticalLayout_15->addWidget(scrollAreaInput);


        verticalLayout_16->addWidget(frame_3);

        spl_control_inout->addWidget(layoutWidget3);
        layoutWidget4 = new QWidget(spl_control_inout);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        verticalLayout_18 = new QVBoxLayout(layoutWidget4);
        verticalLayout_18->setSpacing(3);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        btn_outputs = new QToolButton(layoutWidget4);
        btn_outputs->setObjectName(QString::fromUtf8("btn_outputs"));
        sizePolicy5.setHeightForWidth(btn_outputs->sizePolicy().hasHeightForWidth());
        btn_outputs->setSizePolicy(sizePolicy5);
        btn_outputs->setCheckable(true);
        btn_outputs->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        btn_outputs->setAutoRaise(true);

        verticalLayout_18->addWidget(btn_outputs);

        frame_4 = new QFrame(layoutWidget4);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_17 = new QVBoxLayout(frame_4);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(3, 3, 3, 3);
        scrollAreaOutput = new QScrollArea(frame_4);
        scrollAreaOutput->setObjectName(QString::fromUtf8("scrollAreaOutput"));
        sizePolicy1.setHeightForWidth(scrollAreaOutput->sizePolicy().hasHeightForWidth());
        scrollAreaOutput->setSizePolicy(sizePolicy1);
        scrollAreaOutput->setFrameShape(QFrame::NoFrame);
        scrollAreaOutput->setFrameShadow(QFrame::Plain);
        scrollAreaOutput->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollAreaOutput->setWidgetResizable(true);
        scrollAreaOutput->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 100, 30));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy1);
        verticalLayout_12 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        outputVariables = new QFrame(scrollAreaWidgetContents_2);
        outputVariables->setObjectName(QString::fromUtf8("outputVariables"));
        sizePolicy1.setHeightForWidth(outputVariables->sizePolicy().hasHeightForWidth());
        outputVariables->setSizePolicy(sizePolicy1);
        verticalLayout_9 = new QVBoxLayout(outputVariables);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(3, -1, 3, -1);

        verticalLayout_12->addWidget(outputVariables);

        scrollAreaOutput->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_17->addWidget(scrollAreaOutput);


        verticalLayout_18->addWidget(frame_4);

        spl_control_inout->addWidget(layoutWidget4);
        spl_control_inout_rules->addWidget(spl_control_inout);
        spl_control_rule_strength = new QSplitter(spl_control_inout_rules);
        spl_control_rule_strength->setObjectName(QString::fromUtf8("spl_control_rule_strength"));
        spl_control_rule_strength->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(spl_control_rule_strength);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        hly_rules_control = new QHBoxLayout();
        hly_rules_control->setObjectName(QString::fromUtf8("hly_rules_control"));
        hly_rules_control->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy6);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hly_rules_control->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hly_rules_control->addItem(horizontalSpacer_5);

        horizontalSpacer_3 = new QSpacerItem(40, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hly_rules_control->addItem(horizontalSpacer_3);


        verticalLayout_5->addLayout(hly_rules_control);

        lsw_test_rules = new QListWidget(verticalLayoutWidget);
        lsw_test_rules->setObjectName(QString::fromUtf8("lsw_test_rules"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(lsw_test_rules->sizePolicy().hasHeightForWidth());
        lsw_test_rules->setSizePolicy(sizePolicy7);
        lsw_test_rules->setSelectionMode(QAbstractItemView::NoSelection);
        lsw_test_rules->setResizeMode(QListView::Adjust);

        verticalLayout_5->addWidget(lsw_test_rules);

        spl_control_rule_strength->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(spl_control_rule_strength);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_14->setSpacing(3);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_6 = new QSpacerItem(40, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy6.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_7 = new QSpacerItem(40, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_14->addLayout(horizontalLayout_4);

        lsw_test_rules_activation = new QListWidget(verticalLayoutWidget_2);
        lsw_test_rules_activation->setObjectName(QString::fromUtf8("lsw_test_rules_activation"));
        sizePolicy7.setHeightForWidth(lsw_test_rules_activation->sizePolicy().hasHeightForWidth());
        lsw_test_rules_activation->setSizePolicy(sizePolicy7);
        lsw_test_rules_activation->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lsw_test_rules_activation->setSelectionMode(QAbstractItemView::NoSelection);
        lsw_test_rules_activation->setSelectionBehavior(QAbstractItemView::SelectRows);
        lsw_test_rules_activation->setResizeMode(QListView::Adjust);

        verticalLayout_14->addWidget(lsw_test_rules_activation);

        spl_control_rule_strength->addWidget(verticalLayoutWidget_2);
        spl_control_inout_rules->addWidget(spl_control_rule_strength);

        verticalLayout_6->addWidget(spl_control_inout_rules);


        verticalLayout_13->addWidget(frame);

        tab_container->addItem(tab_containerPage2, QString::fromUtf8("Control"));

        verticalLayout->addWidget(tab_container);

        Window->setCentralWidget(centralwidget);
        toolBar = new QToolBar(Window);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setMovable(false);
        toolBar->setAllowedAreas(Qt::AllToolBarAreas);
        toolBar->setFloatable(false);
        Window->addToolBar(Qt::TopToolBarArea, toolBar);
        menuBar = new QMenuBar(Window);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 588, 25));
        menuBar->setDefaultUp(false);
        Window->setMenuBar(menuBar);

        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAs);
        toolBar->addAction(actionReload);
        toolBar->addSeparator();
        toolBar->addAction(actionImport);
        toolBar->addAction(actionExport);
        toolBar->addSeparator();
        toolBar->addAction(actionTerms);
        toolBar->addAction(actionSurface2D);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout);
        toolBar->addAction(actionQuit);

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QMainWindow *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "qtfuzzylegacy", 0, QApplication::UnicodeUTF8));
        actionTerms->setText(QApplication::translate("Window", "&Terms", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTerms->setToolTip(QApplication::translate("Window", "Terms", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTerms->setShortcut(QApplication::translate("Window", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionImport->setText(QApplication::translate("Window", "&Import", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImport->setToolTip(QApplication::translate("Window", "Import", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImport->setShortcut(QApplication::translate("Window", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("Window", "&Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("Window", "Export", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExport->setShortcut(QApplication::translate("Window", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("Window", "&New", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("Window", "New", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("Window", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("Window", "About qt&fuzzylegacy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("Window", "About qtfuzzylegacy", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAbout->setShortcut(QApplication::translate("Window", "Ctrl+?", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("Window", "&Quit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("Window", "Quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuit->setShortcut(QApplication::translate("Window", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Window", "&Open...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("Window", "Open", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("Window", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("Window", "&Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("Window", "Save", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("Window", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSaveAs->setText(QApplication::translate("Window", "Sa&ve as...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveAs->setToolTip(QApplication::translate("Window", "Save as...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveAs->setShortcut(QApplication::translate("Window", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionProperties->setText(QApplication::translate("Window", "&Properties...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionProperties->setToolTip(QApplication::translate("Window", "Properties", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionProperties->setShortcut(QApplication::translate("Window", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionOpenRecent->setText(QApplication::translate("Window", "Open &Recent", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpenRecent->setToolTip(QApplication::translate("Window", "Open a recently opened file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionReload->setText(QApplication::translate("Window", "Re&load", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionReload->setToolTip(QApplication::translate("Window", "Reload", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionReload->setShortcut(QApplication::translate("Window", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionAboutQt->setText(QApplication::translate("Window", "About Q&t", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAboutQt->setToolTip(QApplication::translate("Window", "About Qt", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAskForHelp->setText(QApplication::translate("Window", "Ask for &help...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAskForHelp->setToolTip(QApplication::translate("Window", "Prepares an email to community@fuzzylegacy.com", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAskForHelp->setShortcut(QApplication::translate("Window", "F1", 0, QApplication::UnicodeUTF8));
        actionJoinTheCommunity->setText(QApplication::translate("Window", "&Join the community...", 0, QApplication::UnicodeUTF8));
        actionJoinTheCommunity->setShortcut(QApplication::translate("Window", "Ctrl+J", 0, QApplication::UnicodeUTF8));
        actionSurface2D->setText(QApplication::translate("Window", "Surface &2D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSurface2D->setToolTip(QApplication::translate("Window", "Surface 2D", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSurface2D->setShortcut(QApplication::translate("Window", "Ctrl+2", 0, QApplication::UnicodeUTF8));
        actionFollowOnTwitter->setText(QApplication::translate("Window", "&Follow @fuzzylegacy", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFollowOnTwitter->setToolTip(QApplication::translate("Window", "Follow @fuzzylegacy on Twitter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCheckForUpdates->setText(QApplication::translate("Window", "Check for &updates", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCheckForUpdates->setToolTip(QApplication::translate("Window", "Check for updates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCheckForUpdates->setShortcut(QApplication::translate("Window", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Window", "Name", 0, QApplication::UnicodeUTF8));
        lbl_inputs->setText(QApplication::translate("Window", "Inputs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_add_input->setToolTip(QApplication::translate("Window", "Add input variable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_add_input->setText(QString());
        btn_add_input->setShortcut(QApplication::translate("Window", "Ctrl+Shift+I", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_remove_input->setToolTip(QApplication::translate("Window", "Remove input variable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_remove_input->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_edit_input->setToolTip(QApplication::translate("Window", "Edit input variable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_edit_input->setText(QString());
        lbl_outputs->setText(QApplication::translate("Window", "Outputs", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_add_output->setToolTip(QApplication::translate("Window", "Add output variable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_add_output->setText(QString());
        btn_add_output->setShortcut(QApplication::translate("Window", "Ctrl+Shift+O", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btn_remove_output->setToolTip(QApplication::translate("Window", "Remove output variable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_remove_output->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_edit_output->setToolTip(QApplication::translate("Window", "Edit output variable", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_edit_output->setText(QString());
        label->setText(QApplication::translate("Window", "Rules", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbxTnorm->setToolTip(QApplication::translate("Window", "Conjunction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbxSnorm->setToolTip(QApplication::translate("Window", "Disjunction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbxActivation->setToolTip(QApplication::translate("Window", "Activation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_hedges->setText(QApplication::translate("Window", "Hedges", 0, QApplication::UnicodeUTF8));
        btn_generate_rules->setText(QString());
#ifndef QT_NO_TOOLTIP
        btn_parse_rules->setToolTip(QApplication::translate("Window", "Process rules", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btn_parse_rules->setText(QString());
        btn_parse_rules->setShortcut(QApplication::translate("Window", "Ctrl+Shift+Return", 0, QApplication::UnicodeUTF8));
        ptx_rules->setPlainText(QString());
        tab_container->setItemText(tab_container->indexOf(tab_containerPage1), QApplication::translate("Window", "Setup", 0, QApplication::UnicodeUTF8));
        btn_inputs->setText(QApplication::translate("Window", "Inputs", 0, QApplication::UnicodeUTF8));
        btn_outputs->setText(QApplication::translate("Window", "Outputs", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Window", "Rules", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Window", "Degree", 0, QApplication::UnicodeUTF8));
        tab_container->setItemText(tab_container->indexOf(tab_containerPage2), QApplication::translate("Window", "Control", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Window", "qtfuzzylegacy", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
