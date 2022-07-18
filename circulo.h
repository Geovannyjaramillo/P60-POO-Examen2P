#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include<QPainter>
#include<QPixmap>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);
    void paint(QPainter &painter);
     QPixmap lienzo;
      void dibujar();
};

#endif // CIRCULO_H
