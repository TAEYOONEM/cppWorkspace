#include <stdio.h>

int main() {
	char asd[10] = "asd";
	asd[0] = 'x';

	//char* xcv = "xcv";
	//xcv[0] = 'q';


	printf("%s", asd);
	//printf("%s", xcv);
	return 0;
}