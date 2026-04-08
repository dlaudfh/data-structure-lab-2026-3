#include <iostream>
#include "Complex.h"

using namespace std;

// 생성자
Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

// 덧셈
Complex Complex::add(const Complex& other) {
    return Complex(real + other.real, imag + other.imag);
}

// 출력
void Complex::print() {
    printf("%.2f", real);

    if (imag >= 0)
        printf(" + %.2fi\n", imag);
    else
        printf(" - %.2fi\n", -imag);
}

int main() {
    Complex A(2.0, 3.1);
    Complex B(5.4, 1.2);

    printf("A = ");
    A.print();

    printf("B = ");
    B.print();

    Complex C = A.add(B);

    printf("A + B = ");
    C.print();

    return 0;
}