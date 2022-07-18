#include "juego.h"

#include <QApplication>
/*Geovanny Jaramillo
1727072959
Examen Programacion Orientado a Objetos*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
