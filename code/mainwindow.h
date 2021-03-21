#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QBasicTimer>
#include <QPainter>
#include <QSpinBox>
#include "paternscontener.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);
    void timerEvent(QTimerEvent *event);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_fps_valueChanged(int arg1);

    void on_num2_valueChanged(int arg1);

    void on_timesecc_valueChanged(int arg1);

    void on_v0_valueChanged(double arg1);

    void on_exitButton_clicked();

    void on_checkBox_clicked(bool checked);

    void on_checkBox_stateChanged(int arg1);

    void on_colorBox_currentIndexChanged(int index);

    void on_hideOptionsButton_clicked();

    void on_sizeSalut_valueChanged(int arg1);

    void on_timeTail_valueChanged(int arg1);

    void on_haveTail_stateChanged(int arg1);

    void on_sizeTail_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;

    int numClicks;
    int fps;
    int period;
    OptionsSaluts optSal;
    QBasicTimer timer;
    PaternsContener ps;
    bool showOptions;
    void drawPolygon(QPainter *p,QPolygonF *poligon,int rad);
    void showOpt();
    void hideOpt();
};
#endif // MAINWINDOW_H
