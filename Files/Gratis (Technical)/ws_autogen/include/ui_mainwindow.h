/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gratis
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QLineEdit *Input;
    QPushButton *OKButton;
    QLabel *Gratis_label;
    QLabel *label_8;
    QWidget *page_2;
    QTabWidget *Settings;
    QWidget *Settings1;
    QPushButton *createFileButton;
    QPushButton *selectFileButton;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *backButton3;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *tab;
    QLabel *label;
    QPushButton *backButton;
    QPushButton *encryptButton;
    QFrame *line_5;
    QFrame *line_6;
    QWidget *tab_2;
    QPushButton *backButton2;
    QLabel *label_2;
    QPushButton *decryptButton;
    QFrame *line_8;
    QLabel *txt;
    QLabel *currentFilePath;
    QFrame *line_7;
    QStatusBar *statusbar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *Gratis)
    {
        if (Gratis->objectName().isEmpty())
            Gratis->setObjectName("Gratis");
        Gratis->resize(800, 600);
        centralwidget = new QWidget(Gratis);
        centralwidget->setObjectName("centralwidget");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(1);
        centralwidget->setFont(font);
        centralwidget->setStyleSheet(QString::fromUtf8("/* ================= GLOBAL ================= */\n"
"\n"
"QMainWindow {\n"
"    background-color: #f5f3e7; /* \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \320\261\320\265\320\266\320\265\320\262\321\213\320\271, \320\272\320\260\320\272 \320\261\321\203\320\274\320\260\320\263\320\260 */\n"
"}\n"
"\n"
"QWidget {\n"
"    font-family: \"Times New Roman\", \"Georgia\", serif; /* \320\263\320\260\320\267\320\265\321\202\320\275\321\213\320\271 \321\210\321\200\320\270\321\204\321\202 */\n"
"    color: #1F1F1F; /* \320\277\320\276\321\207\321\202\320\270 \321\207\320\265\321\200\320\275\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    background: transparent;\n"
"}\n"
"\n"
"/* ================= LABEL ================= */\n"
"\n"
"QLabel {\n"
"    padding: 2px 0;\n"
"    color: #1F1F1F;\n"
"}\n"
"\n"
"/* ================= GROUP BOX ================= */\n"
"\n"
"QGroupBox {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #000000;\n"
"    border-radius: 0px; \n"
"    margin"
                        "-top: 12px;\n"
"    padding: 12px;\n"
"}\n"
"\n"
"QGroupBox:title {\n"
"    subcontrol-origin: margin;\n"
"    left: 8px;\n"
"    padding: 0 4px;\n"
"    font-weight: bold;\n"
"    color: #000000;\n"
"}\n"
"\n"
"/* ================= BUTTONS ================= */\n"
"\n"
"QPushButton {\n"
"    background-color: #E0E0E0; /* \321\201\320\262\320\265\321\202\320\273\320\276-\321\201\320\265\321\200\321\213\320\265 \320\272\320\275\320\276\320\277\320\272\320\270 */\n"
"    color: #000000; \n"
"    border: 1px solid #000000; \n"
"    border-radius: 0px; \n"
"    padding: 6px 16px;\n"
"    min-height: 25px;\n"
"    font-weight: bold;\n"
"    text-transform: uppercase; \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #CCCCCC;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #AAAAAA;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #F0F0F0;\n"
"    border: 1px solid #000000;\n"
"    color: #7A7A7A;\n"
"}\n"
"\n"
"/* ================= INPUTS ================= */\n"
"\n"
"QLineEd"
                        "it, QTextEdit, QPlainTextEdit, QComboBox {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #000000; \n"
"    border-radius: 0px; \n"
"    padding: 6px;\n"
"    min-height: 26px;\n"
"    selection-background-color: #000000;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QLineEdit:focus, QTextEdit:focus, QComboBox:focus {\n"
"    border: 1px solid #000000;\n"
"}\n"
"\n"
"/* ================= TABLES ================= */\n"
"\n"
"QTableWidget, QTableView {\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #000000; \n"
"    gridline-color: #000000;\n"
"    selection-background-color: #000000;\n"
"    selection-color: #FFFFFF;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #EAEAEA;\n"
"    padding: 6px;\n"
"    border: 1px solid #000000;\n"
"    font-weight: bold;\n"
"    color: #000000;\n"
"}\n"
"\n"
"/* ================= TAB WIDGET ================= */\n"
"\n"
"QTabWidget::pane {\n"
"    background: #FFFFFF;\n"
"    border: 1px solid #000000;\n"
"    margin-top: -1px;\n"
""
                        "}\n"
"\n"
"QTabBar::tab {\n"
"    background: #EAEAEA;\n"
"    padding: 8px 18px;\n"
"    margin-right: 2px;\n"
"    border: 1px solid #000000;\n"
"    border-bottom: none;\n"
"    border-radius: 0px; \n"
"    font-weight: bold;\n"
"    color: #000000;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: #FFFFFF;\n"
"    border-bottom: 1px solid #FFFFFF;\n"
"}\n"
"\n"
"QTabBar::tab:hover {\n"
"    background: #DADADA;\n"
"}\n"
"\n"
"/* ================= SPLITTER ================= */\n"
"\n"
"QSplitter::handle {\n"
"    background-color: #000000; \n"
"}\n"
"\n"
"/* ================= STATUS BAR ================= */\n"
"\n"
"QStatusBar {\n"
"    background-color: #FFFFFF;\n"
"    border-top: 1px solid #000000; \n"
"    color: #1F1F1F;\n"
"}"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 581));
        stackedWidget->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgb(0, 0, 0)\n"
"}"));
        stackedWidget->setFrameShadow(QFrame::Shadow::Plain);
        page = new QWidget();
        page->setObjectName("page");
        pushButton = new QPushButton(page);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(310, 310, 191, 42));
        Input = new QLineEdit(page);
        Input->setObjectName("Input");
        Input->setGeometry(QRect(220, 220, 351, 41));
        OKButton = new QPushButton(page);
        OKButton->setObjectName("OKButton");
        OKButton->setGeometry(QRect(570, 220, 51, 41));
        OKButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 166, 0);"));
        Gratis_label = new QLabel(page);
        Gratis_label->setObjectName("Gratis_label");
        Gratis_label->setGeometry(QRect(320, 100, 291, 111));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Old English Text MT")});
        font1.setBold(false);
        Gratis_label->setFont(font1);
        Gratis_label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: \"Old English Text MT\", cursive; /* \320\264\320\265\320\272\320\276\321\200\320\260\321\202\320\270\320\262\320\275\321\213\320\271 \321\200\321\203\320\272\320\276\320\277\320\270\321\201\320\275\321\213\320\271 \321\201\321\202\320\270\320\273\321\214 */\n"
"    font-size: 70px;                             /* \320\261\320\276\320\273\321\214\321\210\320\276\320\271 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 */\n"
"    font-weight: normal;\n"
"\n"
"    /* \320\223\321\200\320\260\320\264\320\270\320\265\320\275\321\202 \320\277\320\276\321\207\321\202\320\270 \321\207\320\265\321\200\320\275\321\213\320\271 \320\264\320\273\321\217 \320\263\320\273\321\203\320\261\320\270\320\275\321\213 */\n"
"    color: qlineargradient(\n"
"        x1:0, y1:0, x2:1, y2:0,\n"
"        stop:0 #111111, /* \320\277\320\276\321\207\321\202\320\270 \321\207\320\265\321\200\320\275\321\213\320\271 */\n"
"        stop:1 #333333  /* \320\275\320\265\320\274\320\275\320\276"
                        "\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\264\320\273\321\217 \320\276\320\261\321\212\321\221\320\274\320\260 */\n"
"    );\n"
"\n"
"    /* \320\234\321\217\320\263\320\272\320\260\321\217 \321\202\320\265\320\275\321\214 \320\264\320\273\321\217 \321\215\321\204\321\204\320\265\320\272\321\202\320\260 \320\276\320\261\321\212\320\265\320\274\320\260 */\n"
"    text-shadow: 2px 2px 4px rgba(0, 0, 0, 0.4);\n"
"\n"
"    /* \320\247\320\270\321\201\321\202\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 \320\261\320\265\320\267 \321\204\320\276\320\275\320\260 \320\270 \321\200\320\260\320\274\320\272\320\270 */\n"
"    background: transparent;\n"
"    border: none;\n"
"    padding: 0;\n"
"}"));
        label_8 = new QLabel(page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(370, 530, 81, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_8->setFont(font2);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        Settings = new QTabWidget(page_2);
        Settings->setObjectName("Settings");
        Settings->setGeometry(QRect(0, 0, 801, 521));
        Settings1 = new QWidget();
        Settings1->setObjectName("Settings1");
        createFileButton = new QPushButton(Settings1);
        createFileButton->setObjectName("createFileButton");
        createFileButton->setGeometry(QRect(-10, 410, 401, 81));
        selectFileButton = new QPushButton(Settings1);
        selectFileButton->setObjectName("selectFileButton");
        selectFileButton->setGeometry(QRect(390, 410, 411, 81));
        line_2 = new QFrame(Settings1);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(-10, 60, 811, 21));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        label_3 = new QLabel(Settings1);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 10, 241, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(20);
        font3.setBold(true);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("background-color: #0000; "));
        label_4 = new QLabel(Settings1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 70, 491, 231));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(15);
        font4.setBold(false);
        label_4->setFont(font4);
        label_5 = new QLabel(Settings1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(390, 70, 491, 231));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setPointSize(15);
        font5.setBold(false);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        label_5->setFont(font5);
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setTextFormat(Qt::TextFormat::PlainText);
        backButton3 = new QPushButton(Settings1);
        backButton3->setObjectName("backButton3");
        backButton3->setGeometry(QRect(750, 0, 51, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Times New Roman")});
        font6.setPointSize(15);
        font6.setBold(true);
        backButton3->setFont(font6);
        backButton3->setStyleSheet(QString::fromUtf8("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QPushButton\" name=\"backButton\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>760</x>\n"
"     <y>0</y>\n"
"     <width>41</width>\n"
"     <height>40</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"styleSheet\">\n"
"    <string notr=\"true\">\n"
"</string>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>&lt;</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        line = new QFrame(Settings1);
        line->setObjectName("line");
        line->setGeometry(QRect(390, 340, 3, 61));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(Settings1);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(390, 50, 2, 361));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Times New Roman")});
        font7.setBold(false);
        line_3->setFont(font7);
        line_3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: black;\n"
"}"));
        line_3->setLineWidth(-10);
        line_3->setMidLineWidth(-19);
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(Settings1);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(-10, 50, 811, 2));
        line_4->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: black;\n"
"}"));
        line_4->setFrameShape(QFrame::Shape::HLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        label_6 = new QLabel(Settings1);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 230, 81, 211));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Times New Roman")});
        font8.setPointSize(30);
        font8.setBold(true);
        label_6->setFont(font8);
        label_7 = new QLabel(Settings1);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(530, 220, 81, 231));
        label_7->setFont(font8);
        Settings->addTab(Settings1, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 10, 241, 36));
        label->setFont(font3);
        backButton = new QPushButton(tab);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(750, 0, 51, 51));
        backButton->setFont(font6);
        backButton->setStyleSheet(QString::fromUtf8("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QPushButton\" name=\"backButton\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>760</x>\n"
"     <y>0</y>\n"
"     <width>41</width>\n"
"     <height>40</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"styleSheet\">\n"
"    <string notr=\"true\">\n"
"</string>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>&lt;</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        encryptButton = new QPushButton(tab);
        encryptButton->setObjectName("encryptButton");
        encryptButton->setGeometry(QRect(280, 180, 251, 91));
        line_5 = new QFrame(tab);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(470, 110, 811, 21));
        line_5->setFrameShape(QFrame::Shape::HLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(tab);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(-20, 51, 1281, 2));
        line_6->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: black;\n"
"}"));
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        Settings->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        backButton2 = new QPushButton(tab_2);
        backButton2->setObjectName("backButton2");
        backButton2->setGeometry(QRect(750, 0, 51, 51));
        backButton2->setFont(font6);
        backButton2->setStyleSheet(QString::fromUtf8("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<ui version=\"4.0\">\n"
" <widget name=\"__qt_fake_top_level\">\n"
"  <widget class=\"QPushButton\" name=\"backButton\">\n"
"   <property name=\"geometry\">\n"
"    <rect>\n"
"     <x>760</x>\n"
"     <y>0</y>\n"
"     <width>41</width>\n"
"     <height>40</height>\n"
"    </rect>\n"
"   </property>\n"
"   <property name=\"font\">\n"
"    <font>\n"
"     <pointsize>15</pointsize>\n"
"     <bold>true</bold>\n"
"    </font>\n"
"   </property>\n"
"   <property name=\"styleSheet\">\n"
"    <string notr=\"true\">\n"
"</string>\n"
"   </property>\n"
"   <property name=\"text\">\n"
"    <string>&lt;</string>\n"
"   </property>\n"
"  </widget>\n"
" </widget>\n"
" <resources/>\n"
"</ui>\n"
""));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 10, 241, 36));
        label_2->setFont(font3);
        decryptButton = new QPushButton(tab_2);
        decryptButton->setObjectName("decryptButton");
        decryptButton->setGeometry(QRect(280, 180, 251, 91));
        line_8 = new QFrame(tab_2);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(-90, 50, 1341, 2));
        line_8->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: black;\n"
"}"));
        line_8->setFrameShape(QFrame::Shape::HLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);
        Settings->addTab(tab_2, QString());
        txt = new QLabel(page_2);
        txt->setObjectName("txt");
        txt->setGeometry(QRect(0, 520, 161, 41));
        txt->setFont(font6);
        txt->setFrameShadow(QFrame::Shadow::Plain);
        currentFilePath = new QLabel(page_2);
        currentFilePath->setObjectName("currentFilePath");
        currentFilePath->setGeometry(QRect(130, 520, 691, 41));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Times New Roman")});
        font9.setPointSize(9);
        font9.setBold(true);
        currentFilePath->setFont(font9);
        currentFilePath->setStyleSheet(QString::fromUtf8("color: green; font-weight: bold;"));
        currentFilePath->setFrameShadow(QFrame::Shadow::Plain);
        line_7 = new QFrame(page_2);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(-130, 520, 1391, 2));
        line_7->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: black;\n"
"}"));
        line_7->setFrameShape(QFrame::Shape::HLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);
        stackedWidget->addWidget(page_2);
        Gratis->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Gratis);
        statusbar->setObjectName("statusbar");
        Gratis->setStatusBar(statusbar);
        menuBar = new QMenuBar(Gratis);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        Gratis->setMenuBar(menuBar);

        retranslateUi(Gratis);

        stackedWidget->setCurrentIndex(1);
        Settings->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Gratis);
    } // setupUi

    void retranslateUi(QMainWindow *Gratis)
    {
        Gratis->setWindowTitle(QCoreApplication::translate("Gratis", "Gratis ", nullptr));
#if QT_CONFIG(whatsthis)
        centralwidget->setWhatsThis(QCoreApplication::translate("Gratis", "<html><head/><body><p>/* ================= GLOBAL ================= */</p><p><br/></p><p>QMainWindow {</p><p>    background-color: #F2F4F7;</p><p>}</p><p><br/></p><p>QWidget {</p><p>    font-family: &quot;Segoe UI&quot;, sans-serif;</p><p>    color: #1F2933;</p><p>    background: transparent;</p><p>}</p><p><br/></p><p>/* ================= LABEL ================= */</p><p><br/></p><p>QLabel {</p><p>    /* \320\250\321\200\320\270\321\204\321\202\321\213 \320\270 \321\200\320\260\320\267\320\274\320\265\321\200\321\213 \321\203\320\261\321\200\320\260\320\275\321\213 \342\200\224 \320\275\320\260\321\201\321\202\321\200\320\260\320\270\320\262\320\260\320\271 \320\262\321\200\321\203\321\207\320\275\321\203\321\216 */</p><p>    padding: 2px 0;</p><p>}</p><p><br/></p><p>/* ================= GROUP BOX ================= */</p><p><br/></p><p>QGroupBox {</p><p>    background-color: #FFFFFF;</p><p>    border: 1px solid #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260"
                        " */</p><p>    border-radius: 6px;</p><p>    margin-top: 12px;</p><p>    padding: 12px;</p><p>}</p><p><br/></p><p>QGroupBox:title {</p><p>    subcontrol-origin: margin;</p><p>    left: 8px;</p><p>    padding: 0 4px;</p><p>    font-weight: 600;</p><p>    color: #000000; /* \321\207\320\265\321\200\320\275\321\213\320\271 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\276\320\272 */</p><p>}</p><p><br/></p><p>/* ================= BUTTONS ================= */</p><p><br/></p><p>QPushButton {</p><p>    background-color: #334E68;</p><p>    color: #FFFFFF;</p><p>    border: 1px solid #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */</p><p>    border-radius: 4px;</p><p>    padding: 6px 16px;</p><p>    min-height: 28px;</p><p>}</p><p><br/></p><p>QPushButton:hover {</p><p>    background-color: #243B53;</p><p>}</p><p><br/></p><p>QPushButton:pressed {</p><p>    background-color: #1E2F40;</p><p>}</p><p><br/></p><p>QPushButton:disabled {</p><p>    background"
                        "-color: #CBD2D9;</p><p>    border: 1px solid #000000;</p><p>    color: #9AA5B1;</p><p>}</p><p><br/></p><p>/* ================= INPUTS ================= */</p><p><br/></p><p>QLineEdit, QTextEdit, QPlainTextEdit, QComboBox {</p><p>    background-color: #FFFFFF;</p><p>    border: 1px solid #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */</p><p>    border-radius: 4px;</p><p>    padding: 6px;</p><p>    min-height: 26px;</p><p>    selection-background-color: #334E68;</p><p>    selection-color: #FFFFFF;</p><p>}</p><p><br/></p><p>QLineEdit:focus, QTextEdit:focus, QComboBox:focus {</p><p>    border: 1px solid #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 \320\277\321\200\320\270 \321\204\320\276\320\272\321\203\321\201\320\265 */</p><p>}</p><p><br/></p><p>/* ================= TABLES ================= */</p><p><br/></p><p>QTableWidget, QTableView {</p><p>    background-color: #FFFFFF;</p><p>    border: 1px sol"
                        "id #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 */</p><p>    gridline-color: #000000;   /* \321\207\320\265\321\200\320\275\321\213\320\265 \320\273\320\270\320\275\320\270\320\270 */</p><p>    selection-background-color: #334E68;</p><p>    selection-color: #FFFFFF;</p><p>}</p><p><br/></p><p>QHeaderView::section {</p><p>    background-color: #E4E7EB;</p><p>    padding: 6px;</p><p>    border: 1px solid #000000; /* \321\207\320\265\321\200\320\275\321\213\320\265 \320\273\320\270\320\275\320\270\320\270 \320\267\320\260\320\263\320\276\320\273\320\276\320\262\320\272\320\276\320\262 */</p><p>    font-weight: 600;</p><p>}</p><p><br/></p><p>/* ================= TAB WIDGET ================= */</p><p><br/></p><p>QTabWidget::pane {</p><p>    background: #FFFFFF;</p><p>    border: 1px solid #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */</p><p>    ma"
                        "rgin-top: -1px;</p><p>}</p><p><br/></p><p>QTabBar::tab {</p><p>    background: #E4E7EB;</p><p>    padding: 8px 18px;</p><p>    margin-right: 2px;</p><p>    border: 1px solid #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\274\320\272\320\260 */</p><p>    border-bottom: none;</p><p>    border-radius: 4px 4px 0 0;</p><p>}</p><p><br/></p><p>QTabBar::tab:selected {</p><p>    background: #FFFFFF;</p><p>    font-weight: 600;</p><p>    border-bottom: 1px solid #FFFFFF;</p><p>}</p><p><br/></p><p>QTabBar::tab:hover {</p><p>    background: #DADFE6;</p><p>}</p><p><br/></p><p>/* ================= SPLITTER ================= */</p><p><br/></p><p>QSplitter::handle {</p><p>    background-color: #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \321\200\320\260\320\267\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214\320\275\320\260\321\217 \320\273\320\270\320\275\320\270\321\217 */</p><p>}</p><p><br/></p><p>/* ================= VERTICAL / HORIZONTAL LINES =========="
                        "======= */</p><p><br/></p><p>QFrame#VLine {</p><p>    background-color: #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \320\262\320\265\321\200\321\202\320\270\320\272\320\260\320\273\321\214\320\275\320\260\321\217 \320\273\320\270\320\275\320\270\321\217 */</p><p>    width: 2px; /* \321\202\320\276\320\273\321\211\320\270\320\275\320\260 */</p><p>}</p><p><br/></p><p>QFrame#HLine {</p><p>    background-color: #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \320\263\320\276\321\200\320\270\320\267\320\276\320\275\321\202\320\260\320\273\321\214\320\275\320\260\321\217 \320\273\320\270\320\275\320\270\321\217 */</p><p>    height: 2px; /* \321\202\320\276\320\273\321\211\320\270\320\275\320\260 */</p><p>}</p><p><br/></p><p>/* ================= STATUS BAR ================= */</p><p><br/></p><p>QStatusBar {</p><p>    background-color: #FFFFFF;</p><p>    border-top: 1px solid #000000; /* \321\207\320\265\321\200\320\275\320\260\321\217 \320\273\320\270\320\275\320\270\321\217 */</p><p>}</"
                        "p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QCoreApplication::translate("Gratis", "Get strong password", nullptr));
        OKButton->setText(QCoreApplication::translate("Gratis", "OK", nullptr));
        Gratis_label->setText(QCoreApplication::translate("Gratis", "Gratis", nullptr));
        label_8->setText(QCoreApplication::translate("Gratis", "UglyRaze \n"
"   \302\2512026", nullptr));
        createFileButton->setText(QCoreApplication::translate("Gratis", "create", nullptr));
        selectFileButton->setText(QCoreApplication::translate("Gratis", "select", nullptr));
        label_3->setText(QCoreApplication::translate("Gratis", "Choose type", nullptr));
        label_4->setText(QCoreApplication::translate("Gratis", "You will create a file in .txt format \n"
"in which you will write your text for \n"
"encryption and subsequent decryption.", nullptr));
        label_5->setText(QCoreApplication::translate("Gratis", "You will choose a file in .txt format \n"
"in which you will write your text or\n"
"decrypting.", nullptr));
        backButton3->setText(QCoreApplication::translate("Gratis", "<", nullptr));
        label_6->setText(QCoreApplication::translate("Gratis", ".txt", nullptr));
        label_7->setText(QCoreApplication::translate("Gratis", ".txt", nullptr));
        Settings->setTabText(Settings->indexOf(Settings1), QCoreApplication::translate("Gratis", "Settings \342\232\231", nullptr));
        label->setText(QCoreApplication::translate("Gratis", "ENCRYPT MODE", nullptr));
        backButton->setText(QCoreApplication::translate("Gratis", "<", nullptr));
        encryptButton->setText(QCoreApplication::translate("Gratis", "Encrypt file", nullptr));
        Settings->setTabText(Settings->indexOf(tab), QCoreApplication::translate("Gratis", "Encrypt mode \360\237\224\222", nullptr));
        backButton2->setText(QCoreApplication::translate("Gratis", "<", nullptr));
        label_2->setText(QCoreApplication::translate("Gratis", "DECRYPT MODE", nullptr));
        decryptButton->setText(QCoreApplication::translate("Gratis", "Decrypt file", nullptr));
        Settings->setTabText(Settings->indexOf(tab_2), QCoreApplication::translate("Gratis", "Decipher mode \360\237\224\221", nullptr));
        txt->setText(QCoreApplication::translate("Gratis", "Current Path:", nullptr));
        currentFilePath->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gratis: public Ui_Gratis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
