// author : ¿Ã≈¬¿±

#include <iostream>
#include "Calculator.h"
#include <sstream>
#include <vector>

using namespace std;

vector<string> split(string str, char Delimiter) { // Split Function
	istringstream iss(str);
	string buffer;

	vector<string> result;

	while (getline(iss, buffer, Delimiter)) {
		result.push_back(buffer);
	}

	return result;
}

 int main() {
	//Calculator c;
	//
	//string str;

	//char deli;
	//vector<string> result;
	//
	//cout <<" Calculator Console Application "<< endl;
	//cout << " Please enter the operation to perform. Format: a+b | a-b | a*b | a/b " << endl;
	//cout << " Press \"ctrl + c\" to exit the program " << endl;

	//while (true) {
	//	getline(cin, str); // Except Blank 
	//	
	//	for (int i = 0;i < str.length();i++) {
	//		if (str[i] == ' ') str.erase(i, 1);
	//	}

	//	for (int i = 0; i < str.length(); i++) { // Check Delimiter
	//		if (str[i] < 48 || str[i] > 57) {
	//			deli = str[i];
	//			break;
	//		}
	//	}

	//	result = split(str, deli); // Split for Delimiter

	//	try { // Check Zero Division
	//		if (deli == '/' && stod(result[1]) == 0) throw stod(result[1]);
	//		cout << " = " << c.Calculate(stod(result[0]), deli, stod(result[1])) << endl;
	//	}
	//	catch (double expn) {
	//		cout << "Zero Division" << endl;
	//	}
	//}	
	int a = 010;
	cout << a << endl;
	return 0;
}