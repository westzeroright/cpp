#include <iostream>
#include <string>
using namespace std;

class Receipt {
private:
	string name, date;
	int amount;
public:
	Receipt(string n, string d, int a)
	{
		name = n;
		date = d;
		//amount = a;
		if (a < 0)
			amount = 0;
		else
			amount = a;
	}
	Receipt()
	{
		name = "��ǰ��";
		date = "2022-01-01";
		amount = 0;
	}

	void print();
};

void Receipt::print()
{
	cout << "------------------------" << endl;
	cout << "ǰ    �� : " << name << endl;
	cout << "������¥ : " << date << endl;
	cout << "��    �� : " << amount << endl;
	cout << "------------------------" << endl;
}

int main(void)
{
	Receipt r1;
	Receipt r2("KF94 ����ũ", "2022-10-05", 5000);
	Receipt r3("���̽�ũ��", "2022-10-12", -1000);

	r1.print();
	r2.print();
	r3.print();

	return 0;
}