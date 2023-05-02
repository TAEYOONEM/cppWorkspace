# include <iostream>
# include <cstring>

using namespace std;
#pragma warning(disable:4996)

class Human{
private :
	char name[20];
	int id;
	int age;

public :
	void setData(const char* aname, int aid, int aage) {
		strcpy(name, aname);
		id = aid;
		age = aage;
	}

	void getDate() {
		cout << "이름 : " << name << " " << "주민 : " << id << " " << "나이 : " << age << endl;
	}

};

int main() {
	Human h;
	h.setData("asd", 12, 14);
	h.getDate();

	return 0;
}