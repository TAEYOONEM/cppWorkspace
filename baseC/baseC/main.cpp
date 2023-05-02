#include <iostream>

int main(int argc, char* argv[]) {
	int i;
	printf("전달 인자개수 : %d\n", argc);
	for (i = 0;i < argc;i++) {
		printf("전달 인자 : %c\n", argv[i]);
	}

	return 0;
}