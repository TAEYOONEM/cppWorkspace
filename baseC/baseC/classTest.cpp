# include <iostream> 
using namespace std;

class MyClass {
private :
	int private_val;

public :
	int public_val;
	void set(int an) {
		private_val = an;
	}
	void get() {
		cout << private_val << endl;
		cout << public_val << endl;
	}

protected : 
	int protected_val;

};

int main() {
	MyClass o;
	o.public_val = 100;
	o.set(3);
	o.get();


	return 0;
}