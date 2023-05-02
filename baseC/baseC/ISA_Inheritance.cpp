#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Computer {
private :
	char owner[50];
public :
	Computer(char* name) {
		strcpy(owner, name);
		cout << "Computer Init" << endl;
	}
	void Calculate() {
		cout << "��û ������ ����մϴ�." << endl;
	}
};

class NotebookComp : public Computer {
private :
	int Battery;
public : 
	NotebookComp(char* name, int initChag) : Computer(name), Battery(initChag) { 
		cout << "NotebookComp Init" << endl; }
	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal() {
		if (GetBatteryInfo() < 1) {
			cout << "������ �ʿ��մϴ�." << endl;
			return ;
		}
	
		cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}
	int GetBatteryInfo() { return Battery; }
};

class TableNotebook : public NotebookComp {
private :
	char regstPenModel[50];
public :
	TableNotebook(char* name, int initChag, char* pen) : NotebookComp(name, initChag) {
		strcpy(regstPenModel, pen);
		cout << "TableNotebook Init" << endl;
	}
	void Write(char* penInfo) {
		if (GetBatteryInfo() < 1) {
			cout << "������ �ʿ��մϴ�." << endl;
			return;
		}
		if (strcmp(regstPenModel, penInfo) != 0) {
			cout << "��ϵ� ���� �ƴմϴ�.";
			return;
		}
		cout << "�ʱ� ������ ó���մϴ�." << endl;
		UseBattery();
	}
};

int main() {
	NotebookComp nc("�̼���", 5);
	TableNotebook tn("������", 5, "ISE-241-242");
	nc.MovingCal();
	tn.Write("ISE-241-242");
	return 0;
}