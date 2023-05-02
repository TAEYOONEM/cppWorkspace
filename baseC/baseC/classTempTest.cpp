#include <iostream>
using namespace std;
template <typename T>

class CTest {
private :
	T data;
public :
	CTest(T adata) : data(adata) {}
	T getData() {
		return data;
	}

};

template <>
class CTest<char> {
private :
	char data;
public :
	CTest(char adata) : data(adata) {}
	char getData() {
		return data;
	}

};

int main() {
	CTest<int> obj(10);
	cout << obj.getData() << endl;

	CTest<char> obj1('a');
	cout << obj1.getData() << endl;

	return 0;
}