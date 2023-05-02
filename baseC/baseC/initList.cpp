#include <iostream>
using namespace std;

/*
�ݷ��ʱ�ȭ�� �ʿ��� ���
1. ���������� 2. ��ü������� 3. ����������� (4. �������)
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