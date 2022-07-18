#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{
 lienzo = QPixmap(500,500);
  this->dibujar();
}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{

    xpos=100;
    ypos=100;
}

void Circulo::paint(QPainter &painter)
{

}

void Circulo::dibujar()
{
    lienzo.fill(Qt::white);

        QPainter painter(&lienzo);



         painter.drawEllipse(100,100,100,100);
}
