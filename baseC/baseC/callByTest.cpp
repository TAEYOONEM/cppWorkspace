#include <iostream>

//int main() {
//	int n1 = 10;
//	int n2 = 20;
//
//	printf("before change n1: %d \t n2: %d\n", n1, n2);	
//	
//	n1 = 20;
//	n2 = 10;
//
//	printf("after change n1 : %d \t n2 : %d\n", n1, n2);
//
	//return 0;
//}

//void swap(int n1, int n2){
//	int tmp;
//	tmp = n1;
//	n1 = n2;
//	n2 = tmp;
//}
//
//int main() {
//	int n1 = 10, n2 = 20;
//	printf("호출 전%d %d\n", n1, n2);
//
//	swap(n1, n2);
//	printf("호출 후%d %d\n", n1, n2);
//
//	return 0;
//}

// Call by Reference

void swap(int* pn1, int* pn2) {
	int tmp;
	tmp = *pn1;
	*pn1 = *pn2;
	*pn2 = tmp;
}

int main() {
	int n1 = 10, n2 = 20;
	printf("호출 전 %d %d\n", n1, n2);

	swap(&n1, &n2);
	printf("호출 후 %d %d\n", n1, n2);

	return 0;
}

