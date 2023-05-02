#include <iostream>

int boxVolume(int lengh, int width = 1, int height = 1);

int main() {

	std::cout << boxVolume(3, 3, 3) << std::endl;
	std::cout << boxVolume(3, 3) << std::endl;
	std::cout << boxVolume(3) << std::endl;

	return 0;
}

int boxVolume(int length, int width, int height) {
	return length * width * height;
}