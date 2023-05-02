#include <iostream>
#include <cstring>

using namespace std;
#pragma warning(disable:4996)

class MyClass {
	int num;
	char* name;

public :
	MyClass(int n, const char* name) : num(n) {
		cout << "생성자 호출" << endl;
		//this->num = n;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	explicit MyClass(const MyClass& other) {
		cout << "복사 생성자 호출" << endl;
		this->name = other.name;
		this->num = other.num;
	}
	
	void getData() {
		cout << num << endl;
	}
	~MyClass() {
		cout << "메모리 해제" << endl;
		delete[] this->name;
	}

};

int main() {
	MyClass m1(10,"asd");
	m1.getData();
	MyClass m2 (m1);
	m2.getData();


	return 0;
}