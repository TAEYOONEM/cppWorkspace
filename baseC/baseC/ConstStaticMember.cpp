#include <iostream>
using namespace std;

class CountryArea {
public :
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHAINA = 957290;
	const static int KOREA = 9922;

};

int main() {
	cout << "���þ� ����: " << CountryArea::RUSSIA << endl;
	cout << "ĳ���ٸ���: " << CountryArea::CANADA<< endl;
	cout << "���̳� ����: " << CountryArea::CHAINA << endl;
	cout << "�ڸ��� ����: " << CountryArea::KOREA << endl;

	return 0;
}
