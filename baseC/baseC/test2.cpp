#include <iostream>

int main(){
	int val1, val2;
	int result = 0;

	std::cin >> val1 >> val2;

	if (val1 - val2 > 0) 
		result = (val1 - 1) * val1 / 2 - val2;
	
	else 
		result = (val2 - 1) * val2 / 2 - val1;
	
	std::cout << result<<std::endl;

	return 0;
}