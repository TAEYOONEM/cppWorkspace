#include <iostream>
using namespace std;

class Person {
public:
	void personF() { cout << "personF" << endl; }
};

class Student : public Person {
public :
	void studentF() { cout << "studentF" << endl; }
};

class PartTimeStudent : public Student {
public :
	void parttimeF() { cout << "parttimeF" << endl; }
};

int main() {
	Person * ptr1 = new Student();
	Person * ptr2 = new PartTimeStudent();
	Student * ptr3 = new PartTimeStudent();

	ptr1->personF();
	ptr2->personF();
	ptr3->personF();
	ptr3->studentF();

	PartTimeStudent * ptr4 = new PartTimeStudent();
	
	ptr4->personF();
	ptr4->studentF();
	ptr4->parttimeF();

	delete ptr1; delete ptr2; delete ptr3;

	return 0;
}