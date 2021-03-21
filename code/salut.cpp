#include <iostream>
#include "salut.h"

Salut::Salut(float x,float y,float v_,float ung,OptionsSalut opt)
{
    pos.set(x,y,0);
    v.set(v_,ung);
    option = opt;
}

Salut::~Salut()
{
}

void Salut::nextStep(int dt)
{
    if(option.tm>0)
    {
        tail.push_back(pos.getPointF());

        pos.add(v.mul((float)dt/1000));
        v.add(PhysVector(0,(float)g*dt/1000,0));
    }
    if(option.timeTail<0)
        tail.removeFirst();
    option.tm-=dt;
    option.timeTail-=dt;
}

bool Salut::die(){return (option.tm<0)&&(tail.isEmpty());}

QPointF Salut::getPoint()
{
    if(!die())
    {
        return QPointF( pos.getX(), pos.getY() );
    }
    else
        return QPointF(-1,-1);
}

QPolygonF Salut::getPolygonF()
{
    if(option.haveTail)
    {
        return tail;
    }
    else
        return QPolygonF();
}

void Salut::draw(QPainter *p)
{
    if(option.tm>0)
    {
        p->setPen(QPen(option.color,option.width,Qt::SolidLine)); // Настройки рисования
        p->drawPoint(pos.getX(),pos.getY());
    }
    if(option.haveTail && (!tail.isEmpty()))
    {
        p->setPen(QPen(option.color,option.widthTail,Qt::SolidLine)); // Настройки рисования

        for(int i=0;i+1<tail.size();i++)
            p->drawLine(tail[i],tail[i+1]);
    }
}
