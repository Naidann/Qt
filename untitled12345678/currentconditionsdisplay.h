#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include <QWidget>
#include <QLCDNumber>

class Currentconditionsdisplay : public QWidget
{
    Q_OBJECT
private:
    float temperature;
    float humidity;
    float pressure;
    QLCDNumber *lcdTemp;

public:
    explicit Currentconditionsdisplay(QWidget *parent = nullptr);
    void display();
private slots:
    void on_update(float,float,float);
};

#endif // CURRENTCONDITIONSDISPLAY_H
