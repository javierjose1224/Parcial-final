#ifndef CANON_H
#define CANON_H
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsScene>
#include <stdlib.h>

class canon:public QGraphicsItem
{
private:
    float PX;
    float PY;
    float R;
    float Ancho;
    float Alto;

public:
    canon(float posx,float posy);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR) override;
    void posicionar(float v_limit);
    float getPX() const;
    float getPY() const;
    float getAncho() const;
    float getAlto() const;
};

#endif // CANON_H
