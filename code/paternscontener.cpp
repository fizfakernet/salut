#include <QTime>
#include <iostream>
#include "salut.h"
#include "paternscontener.h"

PaternsContener::PaternsContener()
{
    qsrand(QTime().secsTo(QTime::currentTime()));
}

PaternsContener::PaternsContener(QPointF startPoint,OptionsSaluts opt)
{
    qsrand(QTime().secsTo(QTime::currentTime()));
    addSalut(QPointF(startPoint), opt);
}

void PaternsContener::addSalut(QPointF startPoint,OptionsSaluts opt)
{
    for(int i=0;i<opt.numPoints;i++)
    {
        int ung = qrand();
        int teta = qrand();
        contener.push_back( Salut(startPoint.x(),startPoint.y(),opt.maxV*cos(teta),ung*0.01,opt) );
        contener.push_back( Salut(startPoint.x(),startPoint.y(),-opt.maxV*cos(teta),ung*0.01,opt) );
    }
}

QPolygonF PaternsContener::getPoints()
{
    QPolygonF qpf(0);
    for (int i=0; i<contener.size() ;i++ )
    {
        if(!contener[i].die())
        {
            qpf << contener[i].getPoint();
            qpf << contener[i].getPolygonF();
        }

    }
    return qpf;
}

void PaternsContener::nextStep(int period)
{
    if ( contener.empty() )
        return;
    int size = contener.size();
    for (int i=0; i<size ;i++ )
    {
        if(!contener[i].die())
        {
            contener[i].nextStep(period);
        }
        else
        {
            contener.removeAt(i);
            size--;
        }
    }
}

void PaternsContener::draw(QPainter *p)
{
    for (int i=0; i<contener.size() ;i++ )
    {
        contener[i].draw(p);
    }
}

int PaternsContener::numElems()
{
   return contener.size();
}
