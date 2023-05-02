#include <iostream>

void func() {
	std::cout << "func" << std::endl;
}

void func(int a) {
	std::cout << "func(int a)" << std::endl;
}

int main() {
	
	func();
	func(1);

	return 0;
}