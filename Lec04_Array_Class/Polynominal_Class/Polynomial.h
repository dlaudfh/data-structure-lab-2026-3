#pragma once
#include <cstdio>

#define MAX_DEGREE 80

class Polynomial {
    int degree;
    float coef[MAX_DEGREE];

public:
    Polynomial() { degree = 0; }

    void read();
    void display(char* str = (char*)"Poly = ");
    void add(Polynomial a, Polynomial b);
    bool isZero();
    void negate();
};