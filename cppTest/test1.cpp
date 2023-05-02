#include <iostream>
#include <cstring>
#include <string>
//#include "Calculator.h"
#include <sstream>
using namespace std;

int main() {
	string str;
	cin >> str;
	char deli;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 47 && str[i] > 58)
			printf("%c", str[i]);
	}
	
}