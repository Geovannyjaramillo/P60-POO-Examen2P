#include "juego.h"
#include "ui_juego.h"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    mImagen = new QImage(this->size(),QImage::Format_ARGB32_Premultiplied);
    mImagen->fill(Qt::white);
    mPainter = new QPainter(mImagen);
    mPainter->setRenderHint(QPainter::Antialiasing);
    QPoint centro = ui->marco->geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());
}

Juego::~Juego()
{
    delete ui;
    delete mImagen;
}

void Juego::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawImage(0, 0, *mImagen);
    event->accept();

}


void Juego::on_btnArriba_released()
{
    QPen pincel;
    pincel.setColor(QMetaType::QColor);
    mPainter->setPen(pincel);
    mPainter->drawEllipse(200,30,100,100);
    update();
}

void Juego::on_btnAbajo_released()
{
    QPen pincel;
    pincel.setColor(QMetaType::QColor);
    mPainter->setPen(pincel);
    mPainter->drawEllipse(200,200,100,100);
    update();
}


void Juego::on_btnIzqueirda_released()
{
    QPen pincel;
    pincel.setColor(QMetaType::QColor);
    mPainter->setPen(pincel);
    mPainter->drawEllipse(100,100,100,100);
    update();
}


void Juego::on_btnDerecha_released()
{
    QPen pincel;
    pincel.setColor(QMetaType::QColor);
    mPainter->setPen(pincel);
    mPainter->drawEllipse(300,100,100,100);
    update();
}

void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}


void Juego::on_actionSalir_triggered()
{
    this->close();
}

int Juego::getAlto(int valor)
{
    return 4 * valor;
}

int Juego::inc(int inc)
{
    return 400 - inc;
}

