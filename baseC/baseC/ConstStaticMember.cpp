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
	cout << "러시아 면적: " << CountryArea::RUSSIA << endl;
	cout << "캐나다면적: " << CountryArea::CANADA<< endl;
	cout << "차이나 면적: " << CountryArea::CHAINA << endl;
	cout << "코리아 면적: " << CountryArea::KOREA << endl;

	return 0;
}
