#include <iostream>
# include <cstring>

using namespace std;
#pragma warning(disable:4996)

class Person {
private :
	char* name;
	int age;
public :
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person(const Person& copy) : age(copy.age) {
		name = new char[strlen(copy.name) + 1];
		strcpy(name, copy.name);
	}

	void ShowPersonInfo() const {
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}

	~Person() {
		delete[]name;
		cout << "Called destructor" << endl;
	}
};

int main() {
	Person man1("asd", 22);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}