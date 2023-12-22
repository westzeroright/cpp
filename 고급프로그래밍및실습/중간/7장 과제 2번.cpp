#include <iostream>
#include <string>
using namespace std;

class BankAccount {
	string owner;
	int account;
	int remain;
public:
	BankAccount() {}
	BankAccount(int a, string o, int r) : account(a), owner(o), remain(r) { }
	void print()
	{
		cout << owner << "�� ����" << endl;
		cout << "���¹�ȣ : " << account << endl;
		cout << "��    �� : " << remain << endl;
		cout << "==============================" << endl;
	}
};

void swapAccount(BankAccount& b1, BankAccount& b2)
{
	BankAccount tmp;

	tmp = b1;
	b1 = b2;
	b2 = tmp;
}

int main(void)
{
	BankAccount b1(1001, "ȫ�浿", 100000);
	BankAccount b2(1002, "�����", 250000);

	swapAccount(b1, b2);

	b1.print();
	b2.print();

	return 0;
}