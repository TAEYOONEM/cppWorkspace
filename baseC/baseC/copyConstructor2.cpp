#include <iostream>
using namespace std;

class MyClass {
	int num;

public:
	MyClass(int n) :num(n) {
		cout << "������ ȣ��" << endl;
	}

	MyClass(MyClass& other) {
		cout << "��������� ȣ��" << endl;
		num = other.num;
	}

	void getData() {
		cout << num << endl;
	}
};

int main() {
	MyClass m1(10);
	MyClass m2 = m1;
	MyClass m3(m2);

	m1.getData();
	m2.getData();
	m3.getData();

	return 0;
}