#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include "Car.h"

using namespace std;

// Car 생성자
Car::Car(int s) {
    speed = s;
}

// Car 출력
void Car::print() {
    printf("Speed: %d\n", speed);
}

// SportsCar 생성자
SportsCar::SportsCar(int s, int t) : Car(s) {
    turbo = t;
}

// SportsCar 출력
void SportsCar::print() {
    printf("Speed: %d, Turbo: %d\n", speed, turbo);
}

int main() {
    Car c(100);
    SportsCar sc(200, 1);

    printf("Car -> ");
    c.print();

    printf("SportsCar -> ");
    sc.print();

    return 0;
}