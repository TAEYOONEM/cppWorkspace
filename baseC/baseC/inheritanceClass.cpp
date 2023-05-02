#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Person {
private :
	char name[30];
	int age;
public :
	Person(const char* aname, int aage);
	void getData();
};

class Student : public Person {
private :
	int stId;
public :
	Student(const char* aname, int aage, int astId);
	void showData();
};

Person::Person(const char* aname, int aage) : age(aage) {
	strcpy(name, aname);
}

void Person::getData() {
	cout << name << endl;
	cout << age << endl;
}

Student::Student(const char* aname, int aage, int astId) : Person(aname, aage), stId(astId)
{}

void Student::showData() {
	cout << stId << endl;
}
int main() {
	Person a("asd", 123);
	a.getData();

	Student b("qwe", 456, 789);
	b.getData();
	b.showData();

	return 0;
}