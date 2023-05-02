//#include <iostream>
//
//int main() {
//	int val1, val2 = 0;
//	int high, low = 0;
//	int result = 0;
//
//	std::cin >> val1>>val2;
//
//	high = val1 - val2 > 0 ? val1 : val2;
//	low = val1 + val2 - high;
//
//	result = (high * (high - 1) / 2) - (low * (low + 1) / 2);
//	
//	std::cout << result;
//
//	return 0;
//}

# include <iostream>

int add(int a, int b);

int main(){

	//int a = 10;
	//int b = 20;
	//int res;

	//res = a + b;

	//std::cout << res << std::endl;
	int a, b;
	std::cin >> a >> b;
	std::cout << add(a, b);

	return 0;
}


int add(int a, int b) {
	return a + b;
}






