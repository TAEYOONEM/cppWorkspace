# include <iostream>
# include <cstring>
using namespace std;

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

class Person {
private :
	char* name;
	int age;
public :
	Person(char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	
	void ShowPersonInfo() const {
		cout << "name :  " << name << endl;
		cout << "age  :  " << age << endl;
	}

	~Person() {
		delete[] name;
		cout << "callecd destructor !" << endl;
	}
};

int main() {
	Person man1("aaa", 20);
	Person man2("bbb", 30);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}