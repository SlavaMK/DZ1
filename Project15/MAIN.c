#include <stdio.h>
#include "mymodule.h"

#define ROWS 3
#define COLUMN 4

int main() {
    DArray arr = createDArray(ROWS, COLUMN);
    int i, j;


    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLUMN; j++) {
            setElement(arr, i, j, i * COLUMN + j);
        }
    }

    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLUMN; j++) {
            printf("%d ", getElement(arr, i, j));
        }
        printf("\n");
    }

    freeDArray(arr);

    return 0;
}