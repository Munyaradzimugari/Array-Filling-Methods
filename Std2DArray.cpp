#include <iostream>
#include "Std2DArrays.h"

void fillArray(int array[][4], int rows, int cols, char method) {
    int num = 1;
    if (method == 'N') {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                array[i][j] = num++;
            }
        }
    } else if (method == 'D') {
        int row = 0;
        int col = 0;
        while (num <= rows * cols) {
