#include "currentconditionsdisplay.h"

Currentconditionsdisplay::Currentconditionsdisplay(QWidget *parent) : QWidget(parent)
{
    lcdTemp = new QLCDNumber(this);
    lcdTemp->setGeometry(100, 100, 300, 50);
    lcdTemp->show();
}

void Currentconditionsdisplay::display()
{
    lcdTemp->display(temperature);

}

void Currentconditionsdisplay::on_update(float t, float h, float p)
{
    this->temperature = t;
    this->humidity = h;
    this->pressure = p;
    this->display();

}
