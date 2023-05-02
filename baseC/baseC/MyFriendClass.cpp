#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Girl;

class Boy {
private :
	int height;
	friend class Girl;
public :
	Boy(int len) : height(len) {}
	void ShowYourFriendInfo(Girl& frn);
};

class Girl {
private :
	char phNum[20];
public : 
	Girl(const char* num) {
		strcpy(phNum, num);
	}
	void ShowYourFriendInfo(Boy& frn);
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn) {
	cout << "Her phnum :" << frn.phNum << endl;
}

void Girl::ShowYourFriendInfo(Boy& frn) {
	cout << "His phnum : " << frn.height << endl;
}

int main() {
	Boy boy(170);
	Girl girl("010-123-123");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYourFriendInfo(boy);

	return 0;
}