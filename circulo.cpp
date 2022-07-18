#include "circulo.h"

Circulo::Circulo()
    :QPoint(0,0)
{

}

Circulo::Circulo(int xpos, int ypos)
    :QPoint(xpos, ypos)
{
    xpos=10;
    ypos=10;
    QPainter pintor1;
    pintor1.drawEllipse(xpos,ypos,ypos,xpos);

}



