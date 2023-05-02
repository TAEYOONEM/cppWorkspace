#include <iostream>

int main() {
	int size;
	int* arr;

	printf("room of arr: ");
	scanf_s("%d",&size);

	arr = (int*)malloc(sizeof(int) * size);

	printf("input number of %d\n", size);
	for (int i = 0;i < size;i++) {
		scanf_s("%d", arr+i);
		printf("number of %d: %d\n",i+1, arr[i]);
	}

	for (int i = 0;i < size;i++) {
		printf("%d\n", arr[i]);
		printf("%d\n", *(arr+i));
	}

	free(arr);

	return 0;
}