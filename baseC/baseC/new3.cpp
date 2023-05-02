#include <iostream>

using namespace std;

int main() {
	int size;
	int* arr;

	cout << "input room of arr" << endl;
	cin >> size;
	
	arr = new int[size];
	
	for (int i = 0;i < size;i++) {
		cout <<"numbe of   : " << i + 1 ;
		cin >> arr[i];
	}
	
	delete[] arr;

	return 0;
}
