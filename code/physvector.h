#include <math.h>
#include <qpolygon.h>

#ifndef PHYSVECTOR_H
#define PHYSVECTOR_H


class PhysVector
{
public:
    void set(float x_,float y_,float z_)    {        x=x_;y=y_;z=z_;    }
    void set(float module,float ungle)
    {
        z=0;
        x=module*cos(ungle);
        y=module*sin(ungle);
    }
    PhysVector(float x_,float y_,float z_)    {        set(x_, y_,z_);    }
    PhysVector(float module,float ungle)    { set(module,ungle); }
    PhysVector(){}

    float getX(){return x;}
    float getY(){return y;}
    float getZ(){return z;}
    QPointF getPointF(){ return QPointF( QPoint(x,y) ); }
    void add(PhysVector v2)    { x += v2.getX(); y += v2.getY();  z += v2.getZ(); }
    PhysVector mul(float scal){return PhysVector(getX()*scal,getY()*scal,getZ()*scal);}

    float getUngle();
    float getModule();

protected:
    qreal x,y,z;

};

#endif // PHYSVECTOR_H
