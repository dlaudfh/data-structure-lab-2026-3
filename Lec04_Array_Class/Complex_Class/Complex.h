#pragma once
#include <iostream>

using namespace std;

class Complex {
public:
    double real;
    double imag;

    // 생성자
    Complex(double r = 0, double i = 0);

    // 덧셈 함수
    Complex add(const Complex& other);

    // 출력 함수
    void print();
};