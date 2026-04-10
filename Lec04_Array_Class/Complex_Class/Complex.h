#pragma once
#include <cstdio>

class Complex {
private:
    double real;
    double imag;

public:
    void read(const char* msg = "복소수 = ");
    void print(const char* msg = "복소수 = ");
    void add(Complex a, Complex b);
};