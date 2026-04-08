#include <iostream>
#include "Polynomial.h"

using namespace std;

// 생성자
Polynomial::Polynomial() {
    degree = 0;
    for (int i = 0; i < MAX_DEGREE; i++)
        coef[i] = 0;
}

// 다항식 설정
void Polynomial::setPolynomial(int deg, double c[]) {
    degree = deg;
    for (int i = 0; i <= deg; i++) {
        coef[i] = c[i];
    }
}

// 덧셈
Polynomial Polynomial::add(const Polynomial& other) {
    Polynomial result;
    result.degree = (degree > other.degree) ? degree : other.degree;

    for (int i = 0; i <= result.degree; i++) {
        result.coef[i] = coef[i] + other.coef[i];
    }

    return result;
}

// 출력
void Polynomial::print() {
    for (int i = degree; i >= 0; i--) {
        if (coef[i] == 0) continue;

        if (i != degree && coef[i] > 0)
            printf(" + ");

        if (i == 0)
            printf("%.2f", coef[i]);
        else if (i == 1)
            printf("%.2fx", coef[i]);
        else
            printf("%.2fx^%d", coef[i], i);
    }
    printf("\n");
}

int main() {
    Polynomial A, B;

    double a_coef[] = { 1, 2, 3 };   // 1 + 2x + 3x^2
    double b_coef[] = { 2, 1, 4 };   // 2 + x + 4x^2

    A.setPolynomial(2, a_coef);
    B.setPolynomial(2, b_coef);

    printf("A = ");
    A.print();

    printf("B = ");
    B.print();

    Polynomial C = A.add(B);

    printf("A + B = ");
    C.print();

    return 0;
}