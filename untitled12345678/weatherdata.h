#ifndef WEATHERDATA_H
#define WEATHERDATA_H


#include <QList>
#include <QTimer>
#include <ctime>
#include <iostream>

class WeatherData : public QObject
{
    Q_OBJECT
private:

    float temperature;
    float humidity;
    float pressure;
    QTimer *timer;
public:
    WeatherData();
private slots:
    void on_timer();

signals:
    void update(float, float, float);

};

#endif // WEATHERDATA_H
