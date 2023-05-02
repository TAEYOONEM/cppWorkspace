#include <iostream>
#include <cstring>

using namespace std;

class MyClass {
private:
	int value;
public :
	MyClass(int n) : value(n) {}
	MyClass operator+(const MyClass& other) const{
		return MyClass(value + other.value);
	}
	void show() {
		cout << value << endl;
	}
};
int main() {
	MyClass a(10);
	a.show();

	MyClass b(a);
	b.show();

	MyClass c = b;
	c.show();

	MyClass d = a + b + c;
	d.show();

	return 0;
}