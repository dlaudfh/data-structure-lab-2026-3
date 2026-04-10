#pragma once
#include "Car.h"

class SportsCar : public Car
{

public:

    bool bTurbo;

    SportsCar(int s, char* n, int g) : Car(s, n, g) {}

    void setTurbo(bool bTur) { bTurbo = bTur; }

    void speedUp() {
        if (bTurbo) speed += 20;
        else Car::speedUp();
    }

};