#pragma once
#pragma once
#include <stdlib.h>

typedef struct {
	int rows;
	int column;
	int* data;
} DArray;

DArray createDArray(int row, int col) {
	DArray arr;
	arr.rows = row;
	arr.column = col;
	arr.data = (int*)malloc(row * col * sizeof(int));
	return arr;
}

void setElement(DArray arr, int row, int col, int val) {
	*(arr.data + (row * arr.column) + col) = val;
}

int getElement(DArray arr, int row, int col) {
	return *(arr.data + (row * arr.column) + col);
}

void freeDArray(DArray arr) {
	free(arr.data);
}
