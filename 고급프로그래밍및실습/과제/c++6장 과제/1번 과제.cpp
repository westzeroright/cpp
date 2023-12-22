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
		name = "빈품목";
		date = "2022-01-01";
		amount = 0;
	}

	void print();
};

void Receipt::print()
{
	cout << "------------------------" << endl;
	cout << "품    목 : " << name << endl;
	cout << "결제날짜 : " << date << endl;
	cout << "금    액 : " << amount << endl;
	cout << "------------------------" << endl;
}

int main(void)
{
	Receipt r1;
	Receipt r2("KF94 마스크", "2022-10-05", 5000);
	Receipt r3("아이스크림", "2022-10-12", -1000);

	r1.print();
	r2.print();
	r3.print();

	return 0;
}