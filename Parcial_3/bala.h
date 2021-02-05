#ifndef BALA_H
#define BALA_H

#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <stdlib.h>
#include <QDebug>
#include <cmath>

class bala:public QGraphicsItem
{
private:
    float PX;
    float PY;
    float mass;
    float R;//radio
    float VX;
    float VY;
    float angulo;
    float AX;
    float AY;
    float G;
    float K;//resistencia del aire
    float e;//coef de restitucion
    float V;//vector de velocidad
    float dt;//var del tiempo
    float escala;

public:
    bala(float posX_,float posY_,float velX_,float velY_,float radio);
    ~bala();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR) override;
    void setEscala(float s);
    void actualizar(float v_limit);
    float getPX() const;
    float getPY() const;
    float getMass() const;
    float getR() const;
    float getVX() const;
    float getVY() const;
    float getE() const;
    void set_vel(float vx,float vy, float px,float py);

};

#endif // BALA_H
