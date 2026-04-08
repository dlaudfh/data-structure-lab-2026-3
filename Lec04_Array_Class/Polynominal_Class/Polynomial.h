#pragma once
#include <iostream>

using namespace std;

#define MAX_DEGREE 10  // 최대 차수

class Polynomial {
public:
    int degree;                 // 최고 차수
    double coef[MAX_DEGREE];    // 계수 배열

    // 생성자
    Polynomial();

    // 다항식 설정
    void setPolynomial(int deg, double c[]);

    // 덧셈
    Polynomial add(const Polynomial& other);

    // 출력
    void print();
};