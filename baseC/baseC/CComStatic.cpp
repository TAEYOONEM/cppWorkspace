#include <iostream>
using namespace std;

void Counter() {
	int cnt=0;
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}
void StaticCounter() {
	static int cnt;
	cnt++;
	cout << "Static Current cnt : " << cnt << endl;
}
int main() {
	for (int i = 0; i < 10;i++) {
		Counter();
		StaticCounter();
	}

	return 0;
}