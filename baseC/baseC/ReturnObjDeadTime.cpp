#include <iostream>
using namespace std;

class SoSimple {
private :
	int num;
public :
	SoSimple(int n) : num(n) {
		cout << "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) : num(copy.num) {
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple() {
		cout << "Destroy obj: " << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "Parm ADRl " << &ob << endl;
	return ob; // 임시객체 리턴
}

int main() {
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);
	cout << "Return obj" << &tempRef << endl;

	return 0;
}