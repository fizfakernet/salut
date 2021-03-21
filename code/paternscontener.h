#include <QPolygonF>
#include <QList>
#include "salut.h"

#ifndef PATERNSCONTENER_H
#define PATERNSCONTENER_H

struct OptionsSaluts:OptionsSalut
{
    int numPoints;
    float maxV;
};

class PaternsContener
{
public:
    PaternsContener(QPointF startPoint,OptionsSaluts opt);
    PaternsContener();
    void addSalut(QPointF startPoint,OptionsSaluts opt);
    QPolygonF getPoints();
    void nextStep(int fps);
    void draw(QPainter *p);
    int numElems();
private:
    QList<Salut> contener;
};

#endif // PATERNSCONTENER_H
