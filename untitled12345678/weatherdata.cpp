#include "weatherdata.h"

WeatherData::WeatherData()
{
    timer = new QTimer(this);
    timer->setInterval(2000);
    timer->start();

    connect(timer, SIGNAL(timeout()), this, SLOT(on_timer()));
}


void WeatherData::on_timer()
{
    temperature = std::rand() % 60 - 30;

    emit update(temperature, 0, 0);
}
