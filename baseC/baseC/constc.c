#include <stdio.h>

int main() {
	//int num = 20;
	//printf("%d\n", num);

	//int* p = &num;
	//printf("%d\n", *p);
	//printf("%p\n", p);
	//printf("%p\n", &num);

	//*p = 30;
	//printf("%d\n", num);
	//printf("%d\n", *p);
	const int num = 100;
	int* p = &num;
	*p = 200;
	printf("%d", num);


}