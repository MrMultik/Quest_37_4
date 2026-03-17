#ifndef TVREMOTE_H
#define TVREMOTE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class TVRemote;
}
QT_END_NAMESPACE

class TVRemote : public QMainWindow
{
    Q_OBJECT

public:
    TVRemote(QWidget *parent = nullptr);
    ~TVRemote();

private slots:
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btn0_clicked();
    void on_btnPrev_clicked();
    void on_btnNext_clicked();
    void on_btnVolDown_clicked();
    void on_btnVolUp_clicked();
    void on_btnPower_clicked();

private:
    Ui::TVRemote *ui;

    int currentChannel;
    int currentVolume;
    bool isPoweredOn;

    void updateDisplay();
    void applyButtonStyles();  // Новый метод для стилей
};

#endif // TVREMOTE_H
