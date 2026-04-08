#pragma once
#ifndef IMAGE_H
#define IMAGE_H

#include <cstdio>

#define HEIGHT 8
#define WIDTH 8

class Image {
private:
    int data[HEIGHT][WIDTH];

public:
    void read();          // 데이터 입력
    int findMaxPixel();   // 최대값 찾기
    void print();         // (선택) 출력
};

#endif