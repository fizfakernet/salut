#include "physvector.h"
#include <QPolygon>
#include <QColor>
#include <QPainter>

#ifndef SALUT_H
#define SALUT_H

struct OptionsSalut
{
    int tm; // время свечения
    int timeTail; // время хвоста
    bool haveTail; // наличие хвоста
    QColor color; // цвет
    qreal width; // диаметр точки
    qreal widthTail; // толщина хвоста
};

class Salut
{
public:
    Salut(float x,float y,float v_,float ung,OptionsSalut opt);
//    Salut();
    ~Salut();
    void nextStep(int fps);
    bool die();
    QPointF getPoint();
    QPolygonF getPolygonF();
    void draw(QPainter *p);

    float g = 9.8;//ускорение свободного падения

private:
    PhysVector v;
    PhysVector pos;
    OptionsSalut option;
    QPolygonF tail;
};

#endif // SALUT_H
