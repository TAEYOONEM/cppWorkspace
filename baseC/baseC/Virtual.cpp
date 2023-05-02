#include <iostream>
using namespace std;

class Super {
public : 
	Super() { cout << "Super" << endl; }
	virtual void func1() { cout << "Super::func1()" << endl; }
	virtual void func2() { cout << "Super::func2()" << endl; }
	void func3() { cout << "Super::func3()" << endl;}
};

class Sub : public Super {
public :
	Sub() { cout << "Sub" << endl; }
	void func1() { cout << "Sub::func1()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void func3() { cout << "Sub::func3()" << endl; }
	void func4() { cout << "Sub::func4()" << endl; }
};

int main() {
	Super super;
	Sub sub;
	Super* sptr = new Sub;
	sptr->func1();
	sptr->func2();
	sptr->func3();


	//sp.func1();
	//sp.func2();
	//sp.func3();

	//sb.func1();
	//sb.func2();
	//sb.func3();
	//sb.func4();
	//
	//cout << endl;
	//Super* ps = new Sub();
	//ps->func1();
	//ps->func2();
	//ps->func3();

	//delete ps;

	return 0;
}