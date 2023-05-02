#include <iostream>
using namespace std;

int main() {
	int* arr;
	int size;

	
	printf("room of arr: ");
	scanf_s("%d", &size);

	arr = (int*)malloc(sizeof(int)*size); // allocate heap


	printf("size of arr : %d\n", sizeof(arr)*size);
	printf("%d\n", sizeof(int));

	free(arr); // free memory 
	

	return 0;
}