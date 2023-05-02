#include <iostream>
using namespace std;

/*
콜론초기화가 필요한 경우
1. 상수멤버변수 2. 객체멤버변수 3. 참조멤버변수 (4. 멤버변수)
*/

class ConstSome {
public :
	const int val;
	ConstSome(int n) : val(n){}
	void printVal() {
		std::cout << val << std::endl;
	}
};

class RefSome {
public :
	int& ref;
	RefSome(int n) :ref(n){}

	void printVal() {
		std::cout << ref << std::endl;
	}
};

class Position {
public :
	int x, y;
	Position(int ax, int ay) {
		x = ax;
		y = ay;
	}
};

class ObjSome {
public:
	Position Pos;
	ObjSome(int ax, int ay) : Pos(ax, ay) {}
	void printVal() {
		std::cout << Pos.x << " " << Pos.y << std::endl;
	}
};

int main() {
	ConstSome c(10);
	c.printVal();

	int n = 20;
	RefSome r(n);
	r.printVal();

	ObjSome o(10, 20);
	o.printVal();

	return 0;
}