#include <iostream>

using namespace std;

class CTest {
private :
	int num;
public :
	CTest(int n) : num(n) {
		cout << num <<"CTest Constructor" << endl;
	}
	~CTest()
	{
		cout << "CTest Destructor" << endl;
	}
};

class CTestSub : public CTest {
private :
	int subn;
public :
	CTestSub(int n, int nn) : CTest(n), subn(nn) {
		cout << subn << "CTestSub Constructor" << endl;
	}
	~CTestSub(){
		cout << "CTestSub Destructor" << endl;
	}
};

int main() {
	//CTest a(10);
	cout << "----" << endl;
	CTestSub b(10,20);

	return 0;
}