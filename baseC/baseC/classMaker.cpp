#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#pragma warning(disable:4996)

using namespace std;

class Person {
private :
	char *name;
	int bday;
public :
	Person(const char* aname, int abday) : bday(abday) {
		//strcpy(name, aname);
		cout << "aa" << endl;
		this->name = new char[strlen(aname) + 1];
		strcpy(this->name, aname);
	}
	
	Person(const Person& copy)
	{
		cout << "bb" << endl;

		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->bday = copy.bday;
	}

	
	Person& operator=(const Person& copy) {
		cout << "cc" << endl;

		this->name = new char[strlen(copy.name) + 1];
		strcpy(this->name, copy.name);
		this->bday = copy.bday;
		
		return *this;
	}

	void ShowPerson() {
		cout << name << ' ' << bday << endl;
	}
	
	
	~Person() {
		cout << "dd" << endl;
		delete []name;
	}
};

int main() {
	Person p1("ȫ�浿", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();
	
	//Person p3;
	//p3 = p2;
	//Person p3 = p2;
	//p3.ShowPerson();

	Person p4("asd", 123);
	p4.ShowPerson();

	p4 = p1;
	p4.ShowPerson();

	return 0;
}