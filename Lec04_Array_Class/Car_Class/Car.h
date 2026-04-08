#pragma once
#include <iostream>

using namespace std;

class Car {
public:
    int speed;

    // 생성자
    Car(int s = 0);

    // 출력
    void print();
};

// 파생 클래스
class SportsCar : public Car {
public:
    int turbo;

    // 생성자
    SportsCar(int s = 0, int t = 0);

    // 출력 (오버라이딩 느낌)
    void print();
};
