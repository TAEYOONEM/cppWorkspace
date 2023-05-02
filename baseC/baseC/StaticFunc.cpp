#include <iostream>
using namespace std;

class StaticTest {
private :
	static int a;
	int b;
public :
	StaticTest();
	static void setData(int aa);
	void show();

};

int StaticTest::a = 10;

StaticTest::StaticTest() {
	this->b = 20;
}

void StaticTest::setData(int aa) {
	//this->a = 30;
	a = aa;
}

void StaticTest::show() {
	cout << "a : " << a <<", " << "b: " << b << endl;
}

int main() {
	StaticTest s1, s2;
	s1.show();
	s2.show();
	
	s1.setData(30);
	s1.show();
	s2.show();
	
	StaticTest::setData(100);
	s1.show();
	s2.show();
	return 0;
}