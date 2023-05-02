#include <iostream>
#include <cstring>

using namespace std;

class MyClass {
private :
	int num1, num2;
	const char* name;
public :
	MyClass(int n1 = 0, int n2 = 0,const char* na = nullptr) :num1(n1), num2(n2), name(na) {}
	void ShowData() {
		cout << num1 << ", " << num2 << ", " << name << endl;
	}

};
int main() {
	MyClass m(1, 2, "asd");
	m.ShowData();

	MyClass cm(m); // cm = m;
	cm.ShowData();

	MyClass cm1;
	cm1 = cm;
	cm1.ShowData();

	return 0;
}