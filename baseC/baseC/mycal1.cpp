#include <iostream>

using namespace std;

class MyCal {
private :
	int num1;
	int num2;

public :
	MyCal(int n1, int n2);
	int add();
	int sub();
	int mul();
	float div();
};

MyCal::MyCal(int n1, int n2) : num1(n1),num2(n2)
{
}

int MyCal::add() {
	return num1 + num2;
}
int MyCal::sub() {
	return num1 - num2;
}
int MyCal::mul() {
	return num1 * num2;
}
float MyCal::div() {
	try {
		if (num2 == 0) 
			throw num2;
		return float(num1) / float(num2);
	}
	catch(int exception){
		return 0;
	}
}

int main() {
	MyCal a(1, 0);
	printf("%d %d %d %f", a.add(), a.sub(), a.mul(), a.div());

	return 0;
}