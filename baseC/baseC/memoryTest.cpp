#include <iostream>

int g = 0;

void func() {
	printf("%p\n", func);
}

int main() {
	int n = 10;
	//func();
	//printf("%p\n", &n);
	//printf("%p\n", &g);

	static int c;
	const int d = 10;
	char arr[10] = "hi";

	func();
	printf("%p\n", &n);
	printf("%p\n", &g);
	printf("%p\n", &c);
	printf("%p\n", &d);
	printf("%p\n", &arr);

	return 0;
}

/* 
메모리 영역 - Code Segment(function) , Data Segement()
*/