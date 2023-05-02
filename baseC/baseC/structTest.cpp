#include <iostream>

struct Human {
	const char name[20];
	int age;
};

int main() {
	struct Human h = { "ȫ�浿", 23 };
	printf ("%s\n",h.name);
	printf ("%d\n",h.age);

	return 0;
}