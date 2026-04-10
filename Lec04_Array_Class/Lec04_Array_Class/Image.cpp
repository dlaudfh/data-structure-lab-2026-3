#include "Image.h"

int main() {
    int h, w;
    int image[MAX_SIZE][MAX_SIZE];

    cout << "이미지의 세로(행)와 가로(열) 크기를 입력하세요 : ";
    cin >> h >> w;

    cout << "화소 밝기 값을 입력하세요 (" << h << "x" << w << ") :\n";
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> image[i][j];
        }
    }

    int result = findMaxPixel(image, h, w);
    cout << "최대 화소 밝기 : " << result << endl;

    return 0;
}