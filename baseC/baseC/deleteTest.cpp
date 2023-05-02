#include <iostream>

using namespace std;

class Orange
{
private:
    int price;

public:
    Orange(int price)
    {
        this->price = price;
        cout << "[������] ������ ���� : " << price << endl;
    }

    ~Orange()
    {
        cout << "[�Ҹ���]" << endl;
    }

    void ShowPrice()
    {
        cout << "[����] ������ : " << price << endl;
    }
};

//void stack()
//{
//    cout << "*** stack Orange orange(500); ***" << endl;
//    Orange orange(500); // stack����
//    orange.ShowPrice();
//}

Orange* orange;

void heap()
{
    Orange* orange = new Orange(1000); // heap ����
    orange->ShowPrice();
}

int main(void)
{
    heap();
    delete orange;
    return 0;
}