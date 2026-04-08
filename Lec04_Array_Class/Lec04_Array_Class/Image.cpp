#include <iostream>
#include "Image.h"

// 데이터 입력 (PDF 스타일)
void Image::read() {
    printf("이미지 데이터를 입력하세요 (%d x %d):\n", HEIGHT, WIDTH);
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            scanf_s("%d", &data[i][j]);
        }
    }
}

// 최대값 찾기
int Image::findMaxPixel() {
    int maxVal = data[0][0];

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (data[i][j] > maxVal) {
                maxVal = data[i][j];
            }
        }
    }

    return maxVal;
}

// 출력 (선택)
void Image::print() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            printf("%4d", data[i][j]);
        }
        printf("\n");
    }
}

// main (PDF 스타일)
int main() {
    Image img;

    img.read();  // 데이터 입력

    printf("최대 밝기 값: %d\n", img.findMaxPixel());

    return 0;
}