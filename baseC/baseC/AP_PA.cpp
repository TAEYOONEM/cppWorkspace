#include <iostream>
#include <stdio.h>

int main() {
	// Pointer Arrary
	int n1 = 10, n2 = 20, n3 = 30;
	int* ary[3] = { &n1, &n2, &n3 };

	// Arrary Pointer
	int* pa = &n1;
	int ary[3] = { 1, 2, 3 };
	int** pary = ary;
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int(*parr)[3] = arr;


	return 0;
}