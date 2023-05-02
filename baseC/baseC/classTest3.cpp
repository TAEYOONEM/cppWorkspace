#include <iostream>
#include <cstring>

using namespace std;
#pragma warning(disable:4996)

class Human {
private : 
	char *name;
	int age;
	int id;
public :
	Human(char* aname, int aage, int aid);
	void getData();
	~Human();
};

Human::Human(char* aname, int aage, int aid) {
	name = new char[strlen(aname) + 1];
	strcpy(name, aname);
	age = aage;
	id = aid;
}
Human::~Human() {
	delete[] name;
}

void Human::getData() {
	cout << "이름 : " << name << " " << "주민 : " << id << " " << "나이 : " << age << endl;
}

int main() {
	Human h[2]{ Human("asd",2,3), Human("zxc",3,4) };
	h[0].getData();
	h[1].getData();
	return 0;
}