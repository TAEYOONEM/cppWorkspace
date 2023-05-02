# include <iostream>
# include<string>

using namespace std;

class MyClass {
private:	
	int age;
	char* id;
	char name[10];

public:
	MyClass(int a, char* i, char* n);
	void get();
};

MyClass::MyClass(int a, char* i, char* n):  {
	//age = a;
	//id = i;
	//strcpy_s(name, 10, n);
}

void MyClass::get() {
	cout << age << endl;
	cout << id << endl;
	cout << name << endl;
}

int main() {
	MyClass a(10, "asd", "zxc");
	a.get();

	return 0;
}