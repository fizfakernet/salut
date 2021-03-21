#include <QTimer>
#include <QtWidgets>
#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QBrush br(Qt::SolidPattern);
         QPalette plt = this->palette();
         plt.setBrush(QPalette::Background, br);
         this->setPalette(plt);


    numClicks = 0;
    fps = ui->fps->value();
    period = 1000/fps;
    optSal.numPoints = ui->num2->value();
    optSal.tm = ui->timesecc->value()*1000;
    optSal.maxV = ui->v0->value();
    optSal.color = Qt::red;
    optSal.haveTail = false;
    optSal.timeTail = ui->timeTail->value()*1000;
    optSal.widthTail = ui->sizeTail->value();
    optSal.width = ui->sizeSalut->value();
    timer.start(period,this);
    showOptions = false;
    hideOpt();
    this->showFullScreen();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p(this); // Создаём новый объект рисовальщика
    ps.draw(&p);
}

void MainWindow::mousePressEvent(QMouseEvent* ev)
{
    ps.addSalut(QPointF(ev->pos()),optSal);
    numClicks++;
    repaint();
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    if (event->timerId() == timer.timerId())
    {
        this->ps.nextStep((int)period);
        ui->lcdNumber->display(fps);
        ui->paterns->display(ps.numElems());
        ui->numClicks->display(numClicks);
        repaint();
    }
}

void MainWindow::drawPolygon(QPainter *p,QPolygonF *poligon,int rad)
{
    for (int i=0; i<poligon->size() ;i++ )
    {
        p->drawEllipse((*poligon)[i],rad,rad);
    }
}

void MainWindow::on_fps_valueChanged(int arg1)
{
    fps = arg1;
    timer.stop();
    period = 1000/fps;
    timer.start(period,this);
}

void MainWindow::on_num2_valueChanged(int arg1)
{
   optSal.numPoints = arg1;
}

void MainWindow::on_timesecc_valueChanged(int arg1)
{
    optSal.tm = arg1*1000;
}

void MainWindow::on_v0_valueChanged(double arg1)
{
    optSal.maxV = arg1;
}

void MainWindow::on_exitButton_clicked()
{
    this->close();
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    optSal.haveTail = arg1;
}

void MainWindow::on_colorBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0: optSal.color = Qt::white;break;
    case 1: optSal.color = Qt::red;break;
    case 2: optSal.color = Qt::green;break;
    case 3: optSal.color = Qt::blue;break;
    case 4: optSal.color = Qt::yellow;break;
    case 5: optSal.color = Qt::cyan;break;
    }
}

void MainWindow::on_checkBox_clicked(bool checked)
{

}

void MainWindow::showOpt()
{
    ui->fps->show();
    ui->num2->show();
    ui->timesecc->show();
    ui->v0->show();
    ui->colorBox->show();
    ui->haveTail->show();
    ui->timeTail->show();
    ui->sizeTail->show();
    ui->sizeSalut->show();
    ui->label->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->label_6->show();
    ui->label_7->show();
    ui->label_8->show();
    ui->label_9->show();
    repaint();
}

void MainWindow::hideOpt()
{
    ui->fps->hide();
    ui->num2->hide();
    ui->timesecc->hide();
    ui->v0->hide();
    ui->colorBox->hide();
    ui->haveTail->hide();
    ui->timeTail->hide();
    ui->sizeTail->hide();
    ui->sizeSalut->hide();
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();
    repaint();
}

void MainWindow::on_hideOptionsButton_clicked()
{
    showOptions = !showOptions;
    if(showOptions)
    {
        showOpt();
        ui->hideOptionsButton->setIcon(QIcon("back.png"));
    }
    else
    {
        hideOpt();
        ui->hideOptionsButton->setIcon(QIcon("gear.png"));
    }
}

void MainWindow::on_sizeSalut_valueChanged(int arg1)
{
    optSal.width = arg1;
}

void MainWindow::on_timeTail_valueChanged(int arg1)
{
    optSal.timeTail = arg1*1000;
}

void MainWindow::on_haveTail_stateChanged(int arg1)
{
    optSal.haveTail = arg1;
}

void MainWindow::on_sizeTail_valueChanged(int arg1)
{
    optSal.widthTail = arg1;
}
