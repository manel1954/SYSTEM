/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_by_ea3eiz;
    QLabel *label_editor_bm;
    QLabel *label_callsign;
    QLineEdit *lineEdit_web_password;
    QPushButton *pushButton_salir;
    QPushButton *pushButton_guardar;
    QLabel *label_callsign_2;
    QLabel *label_callsign_3;
    QLabel *label_callsign_4;
    QLabel *label_callsign_5;
    QLabel *label_callsign_6;
    QLabel *label_callsign_7;
    QLabel *label_callsign_8;
    QLabel *label_callsign_9;
    QLabel *label_callsign_10;
    QLabel *label_callsign_11;
    QLabel *label_callsign_12;
    QLabel *label_callsign_13;
    QLineEdit *lineEdit_station_lat;
    QLineEdit *lineEdit_station_alt;
    QLineEdit *lineEdit_station_lon;
    QLineEdit *lineEdit_rfmodehang;
    QLineEdit *lineEdit_web_port;
    QLineEdit *lineEdit_web_control;
    QLineEdit *lineEdit_duplex;
    QLineEdit *lineEdit_module;
    QLineEdit *lineEdit_uploader_callsign;
    QLineEdit *lineEdit_max_freq;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit_min_freq;
    QLineEdit *lineEdit_url;
    QLineEdit *lineEdit_puente;
    QLabel *label_info_raspi;
    QLineEdit *lineEdit_uploader_antenna;
    QLabel *label;
    QLabel *label_editor_bm_2;
    QLineEdit *lineEdit_sondehub_contact;
    QLineEdit *lineEdit_campo_obligatorio;
    QLabel *label_info_raspi_2;
    QPushButton *pushButton_activar_radiosonde;
    QPushButton *pushButton_desactivar_radiosonde;
    QPushButton *pushButton_abrir_fichero;
    QPushButton *pushButton_abre_instalador;
    QLineEdit *lineEdit_radiosonde_instalado;
    QPushButton *pushButton_radiosonde_instalado;
    QPushButton *pushButton_info;
    QPushButton *pushButton_cerrar_info;
    QLabel *label_by_ea3eiz_2;
    QLabel *label_22;
    QPushButton *pushButton_password_visible;
    QPushButton *pushButton_password_oculto;
    QLineEdit *lineEdit_radiosonde_activado;
    QPushButton *pushButton_radiosonde_off;
    QPushButton *pushButton_radiosonde_on;
    QLineEdit *lineEdit_dmr_enable;
    QLabel *label_by_ea3eiz_3;
    QLineEdit *lineEdit_radiosonde_enable;
    QGroupBox *groupBox;
    QPushButton *pushButton_instalar_radiosonde;
    QPushButton *pushButton_volver;
    QLabel *label_instalar_radiosonde;
    QPushButton *pushButton_desinstalar_radiosonde;
    QPushButton *pushButton_reinstalar_radiosonde;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_reinstalar_si;
    QPushButton *pushButton_reinstalar_no;
    QTextBrowser *textBrowser_desinstalar;
    QPushButton *pushButton_desinstalar_si;
    QPushButton *pushButton_desinstalar_no;
    QLineEdit *lineEdit_grabar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(520, 421);
        MainWindow->setMinimumSize(QSize(520, 421));
        MainWindow->setMaximumSize(QSize(520, 421));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../A108/ICONO_RADIOSONDE.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_by_ea3eiz = new QLabel(centralWidget);
        label_by_ea3eiz->setObjectName(QString::fromUtf8("label_by_ea3eiz"));
        label_by_ea3eiz->setGeometry(QRect(67, 33, 191, 24));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label_by_ea3eiz->setFont(font);
        label_by_ea3eiz->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background:transparent;"));
        label_by_ea3eiz->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_editor_bm = new QLabel(centralWidget);
        label_editor_bm->setObjectName(QString::fromUtf8("label_editor_bm"));
        label_editor_bm->setGeometry(QRect(10, 1210, 209, 27));
        label_editor_bm->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_editor_bm->setAlignment(Qt::AlignCenter);
        label_callsign = new QLabel(centralWidget);
        label_callsign->setObjectName(QString::fromUtf8("label_callsign"));
        label_callsign->setGeometry(QRect(10, 60, 108, 24));
        QFont font1;
        label_callsign->setFont(font1);
        label_callsign->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_web_password = new QLineEdit(centralWidget);
        lineEdit_web_password->setObjectName(QString::fromUtf8("lineEdit_web_password"));
        lineEdit_web_password->setGeometry(QRect(230, 292, 281, 24));
        lineEdit_web_password->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;\n"
""));
        lineEdit_web_password->setMaxLength(32767);
        lineEdit_web_password->setEchoMode(QLineEdit::Password);
        lineEdit_web_password->setCursorPosition(0);
        lineEdit_web_password->setAlignment(Qt::AlignCenter);
        pushButton_salir = new QPushButton(centralWidget);
        pushButton_salir->setObjectName(QString::fromUtf8("pushButton_salir"));
        pushButton_salir->setGeometry(QRect(940, 400, 91, 24));
        pushButton_salir->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_salir->setFocusPolicy(Qt::NoFocus);
        pushButton_salir->setStyleSheet(QString::fromUtf8("background-color: rgb(204, 204, 204);\n"
"\n"
""));
        pushButton_guardar = new QPushButton(centralWidget);
        pushButton_guardar->setObjectName(QString::fromUtf8("pushButton_guardar"));
        pushButton_guardar->setGeometry(QRect(229, 360, 281, 24));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_guardar->setFont(font2);
        pushButton_guardar->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_guardar->setFocusPolicy(Qt::NoFocus);
        pushButton_guardar->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(85, 170, 0);\n"
"color:#fff;\n"
"border-radius:5px;\n"
""));
        label_callsign_2 = new QLabel(centralWidget);
        label_callsign_2->setObjectName(QString::fromUtf8("label_callsign_2"));
        label_callsign_2->setGeometry(QRect(10, 292, 218, 24));
        label_callsign_2->setFont(font1);
        label_callsign_2->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_3 = new QLabel(centralWidget);
        label_callsign_3->setObjectName(QString::fromUtf8("label_callsign_3"));
        label_callsign_3->setGeometry(QRect(240, 1270, 46, 24));
        label_callsign_3->setFont(font1);
        label_callsign_3->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_4 = new QLabel(centralWidget);
        label_callsign_4->setObjectName(QString::fromUtf8("label_callsign_4"));
        label_callsign_4->setGeometry(QRect(270, 1130, 108, 24));
        label_callsign_4->setFont(font1);
        label_callsign_4->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_5 = new QLabel(centralWidget);
        label_callsign_5->setObjectName(QString::fromUtf8("label_callsign_5"));
        label_callsign_5->setGeometry(QRect(270, 140, 141, 24));
        label_callsign_5->setFont(font1);
        label_callsign_5->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_6 = new QLabel(centralWidget);
        label_callsign_6->setObjectName(QString::fromUtf8("label_callsign_6"));
        label_callsign_6->setGeometry(QRect(270, 60, 108, 24));
        label_callsign_6->setFont(font1);
        label_callsign_6->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_7 = new QLabel(centralWidget);
        label_callsign_7->setObjectName(QString::fromUtf8("label_callsign_7"));
        label_callsign_7->setGeometry(QRect(300, 1250, 57, 24));
        label_callsign_7->setFont(font1);
        label_callsign_7->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_8 = new QLabel(centralWidget);
        label_callsign_8->setObjectName(QString::fromUtf8("label_callsign_8"));
        label_callsign_8->setGeometry(QRect(10, 100, 108, 24));
        label_callsign_8->setFont(font1);
        label_callsign_8->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_9 = new QLabel(centralWidget);
        label_callsign_9->setObjectName(QString::fromUtf8("label_callsign_9"));
        label_callsign_9->setGeometry(QRect(420, 1230, 68, 24));
        label_callsign_9->setFont(font1);
        label_callsign_9->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_10 = new QLabel(centralWidget);
        label_callsign_10->setObjectName(QString::fromUtf8("label_callsign_10"));
        label_callsign_10->setGeometry(QRect(270, 254, 108, 24));
        label_callsign_10->setFont(font1);
        label_callsign_10->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_11 = new QLabel(centralWidget);
        label_callsign_11->setObjectName(QString::fromUtf8("label_callsign_11"));
        label_callsign_11->setGeometry(QRect(10, 140, 108, 24));
        label_callsign_11->setFont(font1);
        label_callsign_11->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_12 = new QLabel(centralWidget);
        label_callsign_12->setObjectName(QString::fromUtf8("label_callsign_12"));
        label_callsign_12->setGeometry(QRect(270, 100, 108, 24));
        label_callsign_12->setFont(font1);
        label_callsign_12->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_callsign_13 = new QLabel(centralWidget);
        label_callsign_13->setObjectName(QString::fromUtf8("label_callsign_13"));
        label_callsign_13->setGeometry(QRect(10, 254, 108, 24));
        label_callsign_13->setFont(font1);
        label_callsign_13->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_callsign_13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_station_lat = new QLineEdit(centralWidget);
        lineEdit_station_lat->setObjectName(QString::fromUtf8("lineEdit_station_lat"));
        lineEdit_station_lat->setGeometry(QRect(120, 100, 131, 24));
        lineEdit_station_lat->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_station_lat->setMaxLength(32767);
        lineEdit_station_lat->setCursorPosition(0);
        lineEdit_station_lat->setAlignment(Qt::AlignCenter);
        lineEdit_station_alt = new QLineEdit(centralWidget);
        lineEdit_station_alt->setObjectName(QString::fromUtf8("lineEdit_station_alt"));
        lineEdit_station_alt->setGeometry(QRect(120, 140, 131, 24));
        lineEdit_station_alt->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_station_alt->setMaxLength(32767);
        lineEdit_station_alt->setCursorPosition(0);
        lineEdit_station_alt->setAlignment(Qt::AlignCenter);
        lineEdit_station_lon = new QLineEdit(centralWidget);
        lineEdit_station_lon->setObjectName(QString::fromUtf8("lineEdit_station_lon"));
        lineEdit_station_lon->setGeometry(QRect(380, 100, 131, 24));
        lineEdit_station_lon->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_station_lon->setMaxLength(32767);
        lineEdit_station_lon->setCursorPosition(0);
        lineEdit_station_lon->setAlignment(Qt::AlignCenter);
        lineEdit_rfmodehang = new QLineEdit(centralWidget);
        lineEdit_rfmodehang->setObjectName(QString::fromUtf8("lineEdit_rfmodehang"));
        lineEdit_rfmodehang->setGeometry(QRect(190, 1230, 33, 24));
        lineEdit_rfmodehang->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_rfmodehang->setMaxLength(32767);
        lineEdit_rfmodehang->setCursorPosition(0);
        lineEdit_rfmodehang->setAlignment(Qt::AlignCenter);
        lineEdit_web_port = new QLineEdit(centralWidget);
        lineEdit_web_port->setObjectName(QString::fromUtf8("lineEdit_web_port"));
        lineEdit_web_port->setGeometry(QRect(120, 254, 131, 24));
        lineEdit_web_port->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_web_port->setMaxLength(32767);
        lineEdit_web_port->setCursorPosition(0);
        lineEdit_web_port->setAlignment(Qt::AlignCenter);
        lineEdit_web_control = new QLineEdit(centralWidget);
        lineEdit_web_control->setObjectName(QString::fromUtf8("lineEdit_web_control"));
        lineEdit_web_control->setGeometry(QRect(380, 254, 131, 24));
        lineEdit_web_control->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_web_control->setMaxLength(32767);
        lineEdit_web_control->setCursorPosition(0);
        lineEdit_web_control->setAlignment(Qt::AlignCenter);
        lineEdit_duplex = new QLineEdit(centralWidget);
        lineEdit_duplex->setObjectName(QString::fromUtf8("lineEdit_duplex"));
        lineEdit_duplex->setGeometry(QRect(490, 1170, 21, 24));
        lineEdit_duplex->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_duplex->setMaxLength(32767);
        lineEdit_duplex->setCursorPosition(0);
        lineEdit_duplex->setAlignment(Qt::AlignCenter);
        lineEdit_module = new QLineEdit(centralWidget);
        lineEdit_module->setObjectName(QString::fromUtf8("lineEdit_module"));
        lineEdit_module->setGeometry(QRect(260, 1360, 21, 24));
        lineEdit_module->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_module->setMaxLength(32767);
        lineEdit_module->setCursorPosition(0);
        lineEdit_module->setAlignment(Qt::AlignCenter);
        lineEdit_uploader_callsign = new QLineEdit(centralWidget);
        lineEdit_uploader_callsign->setObjectName(QString::fromUtf8("lineEdit_uploader_callsign"));
        lineEdit_uploader_callsign->setGeometry(QRect(413, 140, 97, 24));
        lineEdit_uploader_callsign->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_uploader_callsign->setMaxLength(32767);
        lineEdit_uploader_callsign->setCursorPosition(0);
        lineEdit_uploader_callsign->setAlignment(Qt::AlignCenter);
        lineEdit_max_freq = new QLineEdit(centralWidget);
        lineEdit_max_freq->setObjectName(QString::fromUtf8("lineEdit_max_freq"));
        lineEdit_max_freq->setGeometry(QRect(380, 60, 131, 24));
        lineEdit_max_freq->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_max_freq->setMaxLength(32767);
        lineEdit_max_freq->setCursorPosition(0);
        lineEdit_max_freq->setAlignment(Qt::AlignCenter);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 520, 421));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);\n"
"border:2px solid #fff;"));
        lineEdit_min_freq = new QLineEdit(centralWidget);
        lineEdit_min_freq->setObjectName(QString::fromUtf8("lineEdit_min_freq"));
        lineEdit_min_freq->setGeometry(QRect(120, 60, 131, 24));
        lineEdit_min_freq->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_min_freq->setMaxLength(32767);
        lineEdit_min_freq->setCursorPosition(0);
        lineEdit_min_freq->setAlignment(Qt::AlignCenter);
        lineEdit_url = new QLineEdit(centralWidget);
        lineEdit_url->setObjectName(QString::fromUtf8("lineEdit_url"));
        lineEdit_url->setGeometry(QRect(330, 1180, 131, 24));
        lineEdit_url->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_url->setMaxLength(32767);
        lineEdit_url->setCursorPosition(0);
        lineEdit_url->setAlignment(Qt::AlignCenter);
        lineEdit_puente = new QLineEdit(centralWidget);
        lineEdit_puente->setObjectName(QString::fromUtf8("lineEdit_puente"));
        lineEdit_puente->setGeometry(QRect(50, 1190, 441, 32));
        label_info_raspi = new QLabel(centralWidget);
        label_info_raspi->setObjectName(QString::fromUtf8("label_info_raspi"));
        label_info_raspi->setGeometry(QRect(10, 180, 218, 24));
        label_info_raspi->setFont(font1);
        label_info_raspi->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_info_raspi->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_uploader_antenna = new QLineEdit(centralWidget);
        lineEdit_uploader_antenna->setObjectName(QString::fromUtf8("lineEdit_uploader_antenna"));
        lineEdit_uploader_antenna->setGeometry(QRect(230, 180, 281, 24));
        lineEdit_uploader_antenna->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_uploader_antenna->setMaxLength(32767);
        lineEdit_uploader_antenna->setCursorPosition(0);
        lineEdit_uploader_antenna->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(13, 1190, 24, 24));
        label->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/ICONO_EDITOR_GENERAL1.png")));
        label->setScaledContents(true);
        label_editor_bm_2 = new QLabel(centralWidget);
        label_editor_bm_2->setObjectName(QString::fromUtf8("label_editor_bm_2"));
        label_editor_bm_2->setGeometry(QRect(290, 1240, 201, 27));
        label_editor_bm_2->setStyleSheet(QString::fromUtf8("background:#ccc;\n"
"color:#000;\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;\n"
"\n"
""));
        label_editor_bm_2->setAlignment(Qt::AlignCenter);
        lineEdit_sondehub_contact = new QLineEdit(centralWidget);
        lineEdit_sondehub_contact->setObjectName(QString::fromUtf8("lineEdit_sondehub_contact"));
        lineEdit_sondehub_contact->setGeometry(QRect(230, 218, 281, 24));
        lineEdit_sondehub_contact->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_sondehub_contact->setMaxLength(32767);
        lineEdit_sondehub_contact->setCursorPosition(0);
        lineEdit_sondehub_contact->setAlignment(Qt::AlignCenter);
        lineEdit_campo_obligatorio = new QLineEdit(centralWidget);
        lineEdit_campo_obligatorio->setObjectName(QString::fromUtf8("lineEdit_campo_obligatorio"));
        lineEdit_campo_obligatorio->setGeometry(QRect(490, 1240, 21, 21));
        QFont font3;
        font3.setPointSize(18);
        lineEdit_campo_obligatorio->setFont(font3);
        lineEdit_campo_obligatorio->setStyleSheet(QString::fromUtf8("color: rgb(255, 85, 0);\n"
"border:1px solid #404244\n"
"\n"
""));
        lineEdit_campo_obligatorio->setMaxLength(32767);
        lineEdit_campo_obligatorio->setCursorPosition(1);
        lineEdit_campo_obligatorio->setAlignment(Qt::AlignCenter);
        label_info_raspi_2 = new QLabel(centralWidget);
        label_info_raspi_2->setObjectName(QString::fromUtf8("label_info_raspi_2"));
        label_info_raspi_2->setGeometry(QRect(10, 218, 218, 24));
        label_info_raspi_2->setFont(font1);
        label_info_raspi_2->setStyleSheet(QString::fromUtf8("color: rgb(227, 227, 227);\n"
"background-color: rgb(64, 66, 68);\n"
"border:1px solid #fff;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        label_info_raspi_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_activar_radiosonde = new QPushButton(centralWidget);
        pushButton_activar_radiosonde->setObjectName(QString::fromUtf8("pushButton_activar_radiosonde"));
        pushButton_activar_radiosonde->setGeometry(QRect(270, 20, 211, 24));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_activar_radiosonde->setFont(font4);
        pushButton_activar_radiosonde->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_activar_radiosonde->setFocusPolicy(Qt::NoFocus);
        pushButton_activar_radiosonde->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(255, 0, 0);\n"
"color:#fff;\n"
"border-radius:5px;\n"
""));
        pushButton_desactivar_radiosonde = new QPushButton(centralWidget);
        pushButton_desactivar_radiosonde->setObjectName(QString::fromUtf8("pushButton_desactivar_radiosonde"));
        pushButton_desactivar_radiosonde->setGeometry(QRect(270, 20, 211, 24));
        pushButton_desactivar_radiosonde->setFont(font4);
        pushButton_desactivar_radiosonde->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_desactivar_radiosonde->setFocusPolicy(Qt::NoFocus);
        pushButton_desactivar_radiosonde->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(85, 170, 0);\n"
"color:#fff;\n"
"border-radius:5px;\n"
""));
        pushButton_abrir_fichero = new QPushButton(centralWidget);
        pushButton_abrir_fichero->setObjectName(QString::fromUtf8("pushButton_abrir_fichero"));
        pushButton_abrir_fichero->setGeometry(QRect(10, 330, 501, 24));
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        pushButton_abrir_fichero->setFont(font5);
        pushButton_abrir_fichero->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_abrir_fichero->setFocusPolicy(Qt::NoFocus);
        pushButton_abrir_fichero->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(255, 170, 0);\n"
"color:#000;\n"
"border-radius:5px;\n"
""));
        pushButton_abre_instalador = new QPushButton(centralWidget);
        pushButton_abre_instalador->setObjectName(QString::fromUtf8("pushButton_abre_instalador"));
        pushButton_abre_instalador->setGeometry(QRect(484, 393, 30, 20));
        QFont font6;
        font6.setPointSize(7);
        font6.setBold(true);
        font6.setWeight(75);
        pushButton_abre_instalador->setFont(font6);
        pushButton_abre_instalador->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_abre_instalador->setFocusPolicy(Qt::NoFocus);
        pushButton_abre_instalador->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: transparent;\n"
"color:#000;\n"
"border-radius:3px;\n"
"image: url(:/ICONO_EDITOR_GENERAL1.png);\n"
""));
        lineEdit_radiosonde_instalado = new QLineEdit(centralWidget);
        lineEdit_radiosonde_instalado->setObjectName(QString::fromUtf8("lineEdit_radiosonde_instalado"));
        lineEdit_radiosonde_instalado->setGeometry(QRect(90, 24, 111, 16));
        lineEdit_radiosonde_instalado->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_radiosonde_instalado->setMaxLength(32767);
        lineEdit_radiosonde_instalado->setCursorPosition(0);
        lineEdit_radiosonde_instalado->setAlignment(Qt::AlignCenter);
        pushButton_radiosonde_instalado = new QPushButton(centralWidget);
        pushButton_radiosonde_instalado->setObjectName(QString::fromUtf8("pushButton_radiosonde_instalado"));
        pushButton_radiosonde_instalado->setGeometry(QRect(260, 1270, 109, 32));
        pushButton_info = new QPushButton(centralWidget);
        pushButton_info->setObjectName(QString::fromUtf8("pushButton_info"));
        pushButton_info->setGeometry(QRect(490, 20, 20, 24));
        pushButton_info->setFont(font4);
        pushButton_info->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_info->setFocusPolicy(Qt::NoFocus);
        pushButton_info->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(255, 255, 0);\n"
"color:#000;\n"
"border-radius:5px;\n"
""));
        pushButton_cerrar_info = new QPushButton(centralWidget);
        pushButton_cerrar_info->setObjectName(QString::fromUtf8("pushButton_cerrar_info"));
        pushButton_cerrar_info->setGeometry(QRect(490, 20, 20, 24));
        pushButton_cerrar_info->setFont(font4);
        pushButton_cerrar_info->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_cerrar_info->setFocusPolicy(Qt::NoFocus);
        pushButton_cerrar_info->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(255, 0, 0);\n"
"color:#fff;\n"
"border-radius:5px;\n"
""));
        label_by_ea3eiz_2 = new QLabel(centralWidget);
        label_by_ea3eiz_2->setObjectName(QString::fromUtf8("label_by_ea3eiz_2"));
        label_by_ea3eiz_2->setGeometry(QRect(65, 11, 201, 24));
        QFont font7;
        font7.setPointSize(20);
        font7.setBold(true);
        font7.setWeight(75);
        label_by_ea3eiz_2->setFont(font7);
        label_by_ea3eiz_2->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background:transparent;"));
        label_by_ea3eiz_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 10, 41, 41));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../A108/ICONO_RADIOSONDE.png")));
        label_22->setScaledContents(true);
        pushButton_password_visible = new QPushButton(centralWidget);
        pushButton_password_visible->setObjectName(QString::fromUtf8("pushButton_password_visible"));
        pushButton_password_visible->setGeometry(QRect(493, 293, 16, 22));
        pushButton_password_visible->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_password_visible->setFocusPolicy(Qt::NoFocus);
        pushButton_password_visible->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 85, 0);"));
        pushButton_password_oculto = new QPushButton(centralWidget);
        pushButton_password_oculto->setObjectName(QString::fromUtf8("pushButton_password_oculto"));
        pushButton_password_oculto->setGeometry(QRect(493, 293, 16, 22));
        pushButton_password_oculto->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_password_oculto->setFocusPolicy(Qt::NoFocus);
        pushButton_password_oculto->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 0);"));
        lineEdit_radiosonde_activado = new QLineEdit(centralWidget);
        lineEdit_radiosonde_activado->setObjectName(QString::fromUtf8("lineEdit_radiosonde_activado"));
        lineEdit_radiosonde_activado->setGeometry(QRect(330, 20, 131, 24));
        lineEdit_radiosonde_activado->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: #000;\n"
"border:1px solid #9f9f9f;\n"
"font-size:15px;\n"
"border-radius:3px;"));
        lineEdit_radiosonde_activado->setMaxLength(32767);
        lineEdit_radiosonde_activado->setCursorPosition(0);
        lineEdit_radiosonde_activado->setAlignment(Qt::AlignCenter);
        pushButton_radiosonde_off = new QPushButton(centralWidget);
        pushButton_radiosonde_off->setObjectName(QString::fromUtf8("pushButton_radiosonde_off"));
        pushButton_radiosonde_off->setGeometry(QRect(164, 360, 54, 24));
        QFont font8;
        font8.setPointSize(10);
        pushButton_radiosonde_off->setFont(font8);
        pushButton_radiosonde_off->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_radiosonde_off->setFocusPolicy(Qt::NoFocus);
        pushButton_radiosonde_off->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"color:#fff;\n"
"background-color: rgb(255, 0, 0);\n"
"text-align:center;\n"
"font-weight:bold;"));
        pushButton_radiosonde_off->setIconSize(QSize(37, 43));
        pushButton_radiosonde_on = new QPushButton(centralWidget);
        pushButton_radiosonde_on->setObjectName(QString::fromUtf8("pushButton_radiosonde_on"));
        pushButton_radiosonde_on->setGeometry(QRect(164, 360, 54, 24));
        pushButton_radiosonde_on->setFont(font8);
        pushButton_radiosonde_on->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_radiosonde_on->setFocusPolicy(Qt::NoFocus);
        pushButton_radiosonde_on->setStyleSheet(QString::fromUtf8("border-radius:5px;\n"
"color:#fff;\n"
"background-color: rgb(85, 170, 0);\n"
"text-align:center;\n"
"font-weight:bold;"));
        pushButton_radiosonde_on->setIconSize(QSize(37, 43));
        lineEdit_dmr_enable = new QLineEdit(centralWidget);
        lineEdit_dmr_enable->setObjectName(QString::fromUtf8("lineEdit_dmr_enable"));
        lineEdit_dmr_enable->setGeometry(QRect(390, 1230, 113, 32));
        label_by_ea3eiz_3 = new QLabel(centralWidget);
        label_by_ea3eiz_3->setObjectName(QString::fromUtf8("label_by_ea3eiz_3"));
        label_by_ea3eiz_3->setGeometry(QRect(10, 360, 151, 24));
        QFont font9;
        font9.setPointSize(11);
        font9.setBold(true);
        font9.setWeight(75);
        label_by_ea3eiz_3->setFont(font9);
        label_by_ea3eiz_3->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background:transparent;"));
        label_by_ea3eiz_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_radiosonde_enable = new QLineEdit(centralWidget);
        lineEdit_radiosonde_enable->setObjectName(QString::fromUtf8("lineEdit_radiosonde_enable"));
        lineEdit_radiosonde_enable->setGeometry(QRect(360, 1260, 113, 32));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 540, 520, 421));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 63, 65);\n"
"border:trasparent;\n"
""));
        pushButton_instalar_radiosonde = new QPushButton(groupBox);
        pushButton_instalar_radiosonde->setObjectName(QString::fromUtf8("pushButton_instalar_radiosonde"));
        pushButton_instalar_radiosonde->setGeometry(QRect(30, 50, 461, 32));
        pushButton_instalar_radiosonde->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_instalar_radiosonde->setFocusPolicy(Qt::NoFocus);
        pushButton_instalar_radiosonde->setStyleSheet(QString::fromUtf8("text-align:left;\n"
"background-color: rgb(0, 170, 255);\n"
"color:#000;\n"
"border-radius:5px;"));
        pushButton_volver = new QPushButton(groupBox);
        pushButton_volver->setObjectName(QString::fromUtf8("pushButton_volver"));
        pushButton_volver->setGeometry(QRect(420, 390, 71, 21));
        QFont font10;
        font10.setPointSize(11);
        pushButton_volver->setFont(font10);
        pushButton_volver->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_volver->setFocusPolicy(Qt::NoFocus);
        pushButton_volver->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(255, 255, 255);\n"
"color:#000;\n"
"border-radius:5px;"));
        label_instalar_radiosonde = new QLabel(groupBox);
        label_instalar_radiosonde->setObjectName(QString::fromUtf8("label_instalar_radiosonde"));
        label_instalar_radiosonde->setGeometry(QRect(30, 10, 461, 24));
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setWeight(75);
        label_instalar_radiosonde->setFont(font11);
        label_instalar_radiosonde->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background:transparent;"));
        label_instalar_radiosonde->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_desinstalar_radiosonde = new QPushButton(groupBox);
        pushButton_desinstalar_radiosonde->setObjectName(QString::fromUtf8("pushButton_desinstalar_radiosonde"));
        pushButton_desinstalar_radiosonde->setGeometry(QRect(30, 50, 461, 32));
        pushButton_desinstalar_radiosonde->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_desinstalar_radiosonde->setFocusPolicy(Qt::NoFocus);
        pushButton_desinstalar_radiosonde->setStyleSheet(QString::fromUtf8("text-align:left;\n"
"background-color: rgb(0, 170, 255);\n"
"color:#000;\n"
"border-radius:5px;"));
        pushButton_reinstalar_radiosonde = new QPushButton(groupBox);
        pushButton_reinstalar_radiosonde->setObjectName(QString::fromUtf8("pushButton_reinstalar_radiosonde"));
        pushButton_reinstalar_radiosonde->setGeometry(QRect(30, 90, 461, 32));
        pushButton_reinstalar_radiosonde->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_reinstalar_radiosonde->setFocusPolicy(Qt::NoFocus);
        pushButton_reinstalar_radiosonde->setStyleSheet(QString::fromUtf8("text-align:left;\n"
"background-color: rgb(255, 0, 0);\n"
"color:#fff;\n"
"border-radius:5px;"));
        textBrowser_2 = new QTextBrowser(groupBox);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 130, 461, 81));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_reinstalar_si = new QPushButton(groupBox);
        pushButton_reinstalar_si->setObjectName(QString::fromUtf8("pushButton_reinstalar_si"));
        pushButton_reinstalar_si->setGeometry(QRect(370, 220, 121, 32));
        pushButton_reinstalar_si->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_reinstalar_si->setFocusPolicy(Qt::NoFocus);
        pushButton_reinstalar_si->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(0, 170, 0);\n"
"color:#fff;\n"
"border-radius:5px;"));
        pushButton_reinstalar_no = new QPushButton(groupBox);
        pushButton_reinstalar_no->setObjectName(QString::fromUtf8("pushButton_reinstalar_no"));
        pushButton_reinstalar_no->setGeometry(QRect(30, 220, 121, 32));
        pushButton_reinstalar_no->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_reinstalar_no->setFocusPolicy(Qt::NoFocus);
        pushButton_reinstalar_no->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(255, 0, 0);\n"
"color:#fff;\n"
"border-radius:5px;"));
        textBrowser_desinstalar = new QTextBrowser(groupBox);
        textBrowser_desinstalar->setObjectName(QString::fromUtf8("textBrowser_desinstalar"));
        textBrowser_desinstalar->setGeometry(QRect(30, 260, 461, 80));
        textBrowser_desinstalar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);\n"
""));
        pushButton_desinstalar_si = new QPushButton(groupBox);
        pushButton_desinstalar_si->setObjectName(QString::fromUtf8("pushButton_desinstalar_si"));
        pushButton_desinstalar_si->setGeometry(QRect(420, 350, 71, 21));
        pushButton_desinstalar_si->setFont(font8);
        pushButton_desinstalar_si->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_desinstalar_si->setFocusPolicy(Qt::NoFocus);
        pushButton_desinstalar_si->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(0, 170, 0);\n"
"color:#fff;\n"
"border-radius:5px;"));
        pushButton_desinstalar_no = new QPushButton(groupBox);
        pushButton_desinstalar_no->setObjectName(QString::fromUtf8("pushButton_desinstalar_no"));
        pushButton_desinstalar_no->setGeometry(QRect(30, 350, 71, 21));
        pushButton_desinstalar_no->setFont(font8);
        pushButton_desinstalar_no->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_desinstalar_no->setFocusPolicy(Qt::NoFocus);
        pushButton_desinstalar_no->setStyleSheet(QString::fromUtf8("text-align:center;\n"
"background-color: rgb(255, 0, 0);\n"
"color:#fff;\n"
"border-radius:5px;"));
        lineEdit_grabar = new QLineEdit(centralWidget);
        lineEdit_grabar->setObjectName(QString::fromUtf8("lineEdit_grabar"));
        lineEdit_grabar->setGeometry(QRect(160, 440, 113, 32));
        MainWindow->setCentralWidget(centralWidget);
        lineEdit_radiosonde_activado->raise();
        lineEdit_radiosonde_instalado->raise();
        textBrowser->raise();
        label_by_ea3eiz->raise();
        label_editor_bm->raise();
        label_callsign->raise();
        lineEdit_web_password->raise();
        pushButton_salir->raise();
        pushButton_guardar->raise();
        label_callsign_2->raise();
        label_callsign_3->raise();
        label_callsign_4->raise();
        label_callsign_5->raise();
        label_callsign_6->raise();
        label_callsign_7->raise();
        label_callsign_8->raise();
        label_callsign_9->raise();
        label_callsign_10->raise();
        label_callsign_11->raise();
        label_callsign_12->raise();
        label_callsign_13->raise();
        lineEdit_station_lat->raise();
        lineEdit_station_alt->raise();
        lineEdit_station_lon->raise();
        lineEdit_rfmodehang->raise();
        lineEdit_web_port->raise();
        lineEdit_web_control->raise();
        lineEdit_duplex->raise();
        lineEdit_module->raise();
        lineEdit_uploader_callsign->raise();
        lineEdit_max_freq->raise();
        lineEdit_min_freq->raise();
        lineEdit_url->raise();
        lineEdit_puente->raise();
        label_info_raspi->raise();
        lineEdit_uploader_antenna->raise();
        label->raise();
        label_editor_bm_2->raise();
        lineEdit_sondehub_contact->raise();
        lineEdit_campo_obligatorio->raise();
        label_info_raspi_2->raise();
        pushButton_activar_radiosonde->raise();
        pushButton_desactivar_radiosonde->raise();
        pushButton_abrir_fichero->raise();
        pushButton_radiosonde_instalado->raise();
        pushButton_info->raise();
        pushButton_cerrar_info->raise();
        label_by_ea3eiz_2->raise();
        label_22->raise();
        pushButton_password_oculto->raise();
        pushButton_password_visible->raise();
        pushButton_radiosonde_off->raise();
        pushButton_radiosonde_on->raise();
        lineEdit_dmr_enable->raise();
        label_by_ea3eiz_3->raise();
        lineEdit_radiosonde_enable->raise();
        groupBox->raise();
        pushButton_abre_instalador->raise();
        lineEdit_grabar->raise();
        QWidget::setTabOrder(lineEdit_min_freq, lineEdit_max_freq);
        QWidget::setTabOrder(lineEdit_max_freq, lineEdit_station_lat);
        QWidget::setTabOrder(lineEdit_station_lat, lineEdit_station_lon);
        QWidget::setTabOrder(lineEdit_station_lon, lineEdit_station_alt);
        QWidget::setTabOrder(lineEdit_station_alt, lineEdit_uploader_callsign);
        QWidget::setTabOrder(lineEdit_uploader_callsign, lineEdit_uploader_antenna);
        QWidget::setTabOrder(lineEdit_uploader_antenna, lineEdit_sondehub_contact);
        QWidget::setTabOrder(lineEdit_sondehub_contact, lineEdit_web_port);
        QWidget::setTabOrder(lineEdit_web_port, lineEdit_web_control);
        QWidget::setTabOrder(lineEdit_web_control, lineEdit_web_password);
        QWidget::setTabOrder(lineEdit_web_password, lineEdit_radiosonde_instalado);
        QWidget::setTabOrder(lineEdit_radiosonde_instalado, lineEdit_url);
        QWidget::setTabOrder(lineEdit_url, lineEdit_module);
        QWidget::setTabOrder(lineEdit_module, lineEdit_puente);
        QWidget::setTabOrder(lineEdit_puente, textBrowser);
        QWidget::setTabOrder(textBrowser, lineEdit_rfmodehang);
        QWidget::setTabOrder(lineEdit_rfmodehang, lineEdit_campo_obligatorio);
        QWidget::setTabOrder(lineEdit_campo_obligatorio, lineEdit_duplex);
        QWidget::setTabOrder(lineEdit_duplex, pushButton_radiosonde_instalado);
        QWidget::setTabOrder(pushButton_radiosonde_instalado, lineEdit_radiosonde_activado);
        QWidget::setTabOrder(lineEdit_radiosonde_activado, lineEdit_dmr_enable);
        QWidget::setTabOrder(lineEdit_dmr_enable, lineEdit_radiosonde_enable);
        QWidget::setTabOrder(lineEdit_radiosonde_enable, textBrowser_2);
        QWidget::setTabOrder(textBrowser_2, textBrowser_desinstalar);
        QWidget::setTabOrder(textBrowser_desinstalar, lineEdit_grabar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "EDITOR RADIOSONDE", nullptr));
        label_by_ea3eiz->setText(QCoreApplication::translate("MainWindow", "by EA3EIZ & EA4AOJ", nullptr));
        label_editor_bm->setText(QCoreApplication::translate("MainWindow", "- - - - - EDITOR", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign->setText(QCoreApplication::translate("MainWindow", "min_freq", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_web_password->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Contrase\303\261a  web</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_web_password->setText(QString());
        pushButton_salir->setText(QCoreApplication::translate("MainWindow", "SALIR", nullptr));
        pushButton_guardar->setText(QCoreApplication::translate("MainWindow", "GUARDAR Y SALIR", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_2->setText(QCoreApplication::translate("MainWindow", "web_password", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_3->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_3->setText(QCoreApplication::translate("MainWindow", "URL:", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_4->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_4->setText(QCoreApplication::translate("MainWindow", ".....", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_5->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_5->setText(QCoreApplication::translate("MainWindow", "uploader_callsign", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_6->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_6->setText(QCoreApplication::translate("MainWindow", "max_freq", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_7->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_7->setText(QCoreApplication::translate("MainWindow", "CW Id:", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_8->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_8->setText(QCoreApplication::translate("MainWindow", "station_lat", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_9->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_9->setText(QCoreApplication::translate("MainWindow", "Duplex:", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_10->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_10->setText(QCoreApplication::translate("MainWindow", "web_control", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_11->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_11->setText(QCoreApplication::translate("MainWindow", "station_alt", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_12->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_12->setText(QCoreApplication::translate("MainWindow", "station_lon", nullptr));
#if QT_CONFIG(tooltip)
        label_callsign_13->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_callsign_13->setText(QCoreApplication::translate("MainWindow", "web_port", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_station_lat->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Latitud</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_station_lat->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_station_alt->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Altitud</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_station_alt->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_station_lon->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Longitud</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_station_lon->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_rfmodehang->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#ffffff;\">Valor \303\263ptimo = 5</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_rfmodehang->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_web_port->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Puerto web</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_web_port->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_web_control->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Control web: True / False</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_web_control->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_duplex->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#ffffff;\">Para Hotspot simplex = 0 para repetidor = 1</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_duplex->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_module->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#ffffff;\">Valor = B</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_module->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_uploader_callsign->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Indicativo</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_uploader_callsign->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_max_freq->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Frecuencia m\303\241xima de escaneo</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_max_freq->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_min_freq->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Frecuencia m\303\255nima de escaneo</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_min_freq->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_url->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Introduce tu Web preferida<br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_url->setText(QString());
#if QT_CONFIG(tooltip)
        label_info_raspi->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_info_raspi->setText(QCoreApplication::translate("MainWindow", "uploader_antenna", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_uploader_antenna->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Descripci\303\263n de la antena</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_uploader_antenna->setText(QString());
        label->setText(QString());
        label_editor_bm_2->setText(QCoreApplication::translate("MainWindow", "GENERAL - - - - -", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_sondehub_contact->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Correo electr\303\263nico</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_sondehub_contact->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_campo_obligatorio->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff5500;\">Importante!!</span></p><p>Poner la ip de esta raspberry</p><p>para el funcionamiento del</p><p>Virtual Radar Server</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_campo_obligatorio->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(tooltip)
        label_info_raspi_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_info_raspi_2->setText(QCoreApplication::translate("MainWindow", "sondehub_contact_email:", nullptr));
        pushButton_activar_radiosonde->setText(QCoreApplication::translate("MainWindow", "ACTIVAR RADIOSONDE", nullptr));
        pushButton_desactivar_radiosonde->setText(QCoreApplication::translate("MainWindow", "DESACTIVAR RADIOSONDE", nullptr));
        pushButton_abrir_fichero->setText(QCoreApplication::translate("MainWindow", "Abrir fichero station.cfg para hacer cualquier otro cambio", nullptr));
        pushButton_abre_instalador->setText(QString());
#if QT_CONFIG(tooltip)
        lineEdit_radiosonde_instalado->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Introduce el nombre de tu Ciudad</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_radiosonde_instalado->setText(QString());
        pushButton_radiosonde_instalado->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_info->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        pushButton_cerrar_info->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        label_by_ea3eiz_2->setText(QCoreApplication::translate("MainWindow", "Radiosonde", nullptr));
        label_22->setText(QString());
        pushButton_password_visible->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        pushButton_password_oculto->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit_radiosonde_activado->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Frecuencia m\303\255nima de escaneo</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_radiosonde_activado->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_radiosonde_off->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Poner Autoarranque</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_radiosonde_off->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_radiosonde_on->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Quitar Autoarranque</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_radiosonde_on->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        label_by_ea3eiz_3->setText(QCoreApplication::translate("MainWindow", "AUTOARRANQUE:", nullptr));
        groupBox->setTitle(QString());
        pushButton_instalar_radiosonde->setText(QCoreApplication::translate("MainWindow", "   Instalar Radiosonde", nullptr));
        pushButton_volver->setText(QCoreApplication::translate("MainWindow", "Volver", nullptr));
        label_instalar_radiosonde->setText(QCoreApplication::translate("MainWindow", "Men\303\272 instalaci\303\263n Radiosonde", nullptr));
        pushButton_desinstalar_radiosonde->setText(QCoreApplication::translate("MainWindow", "   Desinstalar Radiosonde", nullptr));
        pushButton_reinstalar_radiosonde->setText(QCoreApplication::translate("MainWindow", "   Reinstalar Radiosonde", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Est\303\241s seguro que quieres reinstalarlo?</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Si lo reinstalas perder\303\241s toda tu configuraci\303\263n</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_reinstalar_si->setText(QCoreApplication::translate("MainWindow", "SI", nullptr));
        pushButton_reinstalar_no->setText(QCoreApplication::translate("MainWindow", "NO", nullptr));
        textBrowser_desinstalar->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Est\303\241s seguro que quieres desinstalarlo?</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Si lo desinstalas perder\303\241s toda tu configuraci\303\263n</p></body></html>", nullptr));
        pushButton_desinstalar_si->setText(QCoreApplication::translate("MainWindow", "SI", nullptr));
        pushButton_desinstalar_no->setText(QCoreApplication::translate("MainWindow", "NO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
