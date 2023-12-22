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
		cout << owner << "´Ô °èÁÂ" << endl;
		cout << "°èÁÂ¹øÈ£ : " << account << endl;
		cout << "ÀÜ    ¾× : " << remain << endl;
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
	BankAccount b1(1001, "È«±æµ¿", 100000);
	BankAccount b2(1002, "±è½ÂÁØ", 250000);

	swapAccount(b1, b2);

	b1.print();
	b2.print();

	return 0;
}