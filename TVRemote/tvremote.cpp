#include "tvremote.h"
#include "ui_tvremote.h"
#include <QFont>

TVRemote::TVRemote(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TVRemote)
    , currentChannel(1)
    , currentVolume(50)
    , isPoweredOn(true)
{
    ui->setupUi(this);

    // Устанавливаем фиксированный размер
    setFixedSize(240, 680);
    setWindowTitle("TV Remote Control");

    // Общий стиль окна
    setStyleSheet(
        "QMainWindow {"
        "    background-color: #1a1a1a;"
        "}"
        "QMainWindow::title {"
        "    background-color: #333333;"
        "    color: white;"
        "}"
        );

    // Настраиваем дисплей
    QFont displayFont("Arial", 12, QFont::Bold);
    ui->display->setFont(displayFont);
    ui->display->setAlignment(Qt::AlignCenter);
    ui->display->setWordWrap(true);

    // Обновляем дисплей
    updateDisplay();

    // Применяем стили к кнопкам
    applyButtonStyles();
}

TVRemote::~TVRemote()
{
    delete ui;
}

void TVRemote::applyButtonStyles()
{
    // Базовый стиль для всех кнопок
    QString baseStyle =
        "QPushButton {"
        "    color: white;"
        "    border: none;"
        "    border-radius: 15px;"
        "    font-size: 18px;"
        "    font-weight: bold;"
        "}"
        "QPushButton:hover {"
        "    border: 2px solid white;"
        "}"
        "QPushButton:pressed {"
        "    padding-top: 2px;"
        "    padding-left: 2px;"
        "}";

    // Стиль для цифровых кнопок
    QString digitStyle = baseStyle +
                         "QPushButton {"
                         "    background-color: #4a4a4a;"
                         "    min-width: 45px;"
                         "    min-height: 45px;"
                         "}";

    ui->btn1->setStyleSheet(digitStyle);
    ui->btn2->setStyleSheet(digitStyle);
    ui->btn3->setStyleSheet(digitStyle);
    ui->btn4->setStyleSheet(digitStyle);
    ui->btn5->setStyleSheet(digitStyle);
    ui->btn6->setStyleSheet(digitStyle);
    ui->btn7->setStyleSheet(digitStyle);
    ui->btn8->setStyleSheet(digitStyle);
    ui->btn9->setStyleSheet(digitStyle);
    ui->btn0->setStyleSheet(digitStyle);

    // Стиль для навигационных кнопок
    QString navStyle = baseStyle +
                       "QPushButton {"
                       "    background-color: #2c3e50;"
                       "    min-width: 45px;"
                       "    min-height: 45px;"
                       "    font-size: 20px;"
                       "}";

    ui->btnPrev->setStyleSheet(navStyle);
    ui->btnNext->setStyleSheet(navStyle);

    // Стиль для кнопок громкости
    QString volUpStyle = baseStyle +
                         "QPushButton {"
                         "    background-color: #27ae60;"
                         "    min-width: 45px;"
                         "    min-height: 45px;"
                         "    font-size: 24px;"
                         "}";

    QString volDownStyle = baseStyle +
                           "QPushButton {"
                           "    background-color: #e74c3c;"
                           "    min-width: 45px;"
                           "    min-height: 45px;"
                           "    font-size: 24px;"
                           "}";

    ui->btnVolUp->setStyleSheet(volUpStyle);
    ui->btnVolDown->setStyleSheet(volDownStyle);

    // Стиль для кнопки POWER
    ui->btnPower->setStyleSheet(
        "QPushButton {"
        "    background-color: #e67e22;"
        "    color: white;"
        "    border: none;"
        "    border-radius: 20px;"
        "    font-size: 16px;"
        "    font-weight: bold;"
        "    min-height: 40px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #f39c12;"
        "    border: 2px solid white;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #d35400;"
        "    padding-top: 2px;"
        "    padding-left: 2px;"
        "}"
        );
}

void TVRemote::updateDisplay()
{
    if (isPoweredOn) {
        ui->display->setText(QString("CH: %1\nVOL: %2%\nON")
                                 .arg(currentChannel)
                                 .arg(currentVolume));
        ui->display->setStyleSheet(
            "QLabel {"
            "    background-color: #000000;"
            "    color: #00ff00;"
            "    font-size: 18px;"
            "    font-weight: bold;"
            "    border: 2px solid #00ff00;"
            "    border-radius: 10px;"
            "    padding: 10px;"
            "}"
            );
    } else {
        ui->display->setText("TV OFF");
        ui->display->setStyleSheet(
            "QLabel {"
            "    background-color: #000000;"
            "    color: #ff0000;"
            "    font-size: 20px;"
            "    font-weight: bold;"
            "    border: 2px solid #ff0000;"
            "    border-radius: 10px;"
            "    padding: 10px;"
            "}"
            );
    }
    ui->display->setAlignment(Qt::AlignCenter);
}

// Цифровые кнопки
void TVRemote::on_btn1_clicked() { if(isPoweredOn) { currentChannel = 1; updateDisplay(); } }
void TVRemote::on_btn2_clicked() { if(isPoweredOn) { currentChannel = 2; updateDisplay(); } }
void TVRemote::on_btn3_clicked() { if(isPoweredOn) { currentChannel = 3; updateDisplay(); } }
void TVRemote::on_btn4_clicked() { if(isPoweredOn) { currentChannel = 4; updateDisplay(); } }
void TVRemote::on_btn5_clicked() { if(isPoweredOn) { currentChannel = 5; updateDisplay(); } }
void TVRemote::on_btn6_clicked() { if(isPoweredOn) { currentChannel = 6; updateDisplay(); } }
void TVRemote::on_btn7_clicked() { if(isPoweredOn) { currentChannel = 7; updateDisplay(); } }
void TVRemote::on_btn8_clicked() { if(isPoweredOn) { currentChannel = 8; updateDisplay(); } }
void TVRemote::on_btn9_clicked() { if(isPoweredOn) { currentChannel = 9; updateDisplay(); } }
void TVRemote::on_btn0_clicked() { if(isPoweredOn) { currentChannel = 0; updateDisplay(); } }

// Навигация по каналам
void TVRemote::on_btnPrev_clicked()
{
    if (!isPoweredOn) return;
    currentChannel--;
    if (currentChannel < 0) currentChannel = 0;
    updateDisplay();
}

void TVRemote::on_btnNext_clicked()
{
    if (!isPoweredOn) return;
    currentChannel++;
    if (currentChannel > 99) currentChannel = 99;
    updateDisplay();
}

// Громкость
void TVRemote::on_btnVolDown_clicked()
{
    if (!isPoweredOn) return;
    currentVolume -= 10;
    if (currentVolume < 0) currentVolume = 0;
    updateDisplay();
}

void TVRemote::on_btnVolUp_clicked()
{
    if (!isPoweredOn) return;
    currentVolume += 10;
    if (currentVolume > 100) currentVolume = 100;
    updateDisplay();
}

// Питание
void TVRemote::on_btnPower_clicked()
{
    isPoweredOn = !isPoweredOn;
    updateDisplay();
}
