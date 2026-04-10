#include "Image.h"

int findMaxPixel(int img[][MAX_SIZE], int h, int w) {
    int maxVal = img[0][0];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (img[i][j] > maxVal) {
                maxVal = img[i][j];
            }
        }
    }
    return maxVal;
}