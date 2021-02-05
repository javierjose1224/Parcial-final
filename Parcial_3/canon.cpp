#include "canon.h"
float canon::getPX() const
{
    return PX;
}

float canon::getPY() const
{
    return PY;
}

float canon::getAncho() const
{
    return Ancho;
}

float canon::getAlto() const
{
    return Alto;
}

canon::canon(float posx, float posy)
{
    PX=posx;
    PY=posy;
    Ancho=50;
    R=1;
}

QRectF canon::boundingRect() const
{
    return QRectF(-1*R,-1*R,Ancho,PY);
}

void canon::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawRect(boundingRect());
}

void canon::posicionar(float v_limit)
{
    setPos(PX,v_limit-PY);
}
