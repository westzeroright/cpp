#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	int accountNumber;
	string owner;
	int balance;

public:
	void setBalance(int amount);
	int getBalance();
	void deposit(int amount);
	void withdraw(int amount);
	void print();

	int transfer(int amount, BankAccount otherAccount);
};

void BankAccount::setBalance(int amount)
{
	balance = amount;
}

int BankAccount::getBalance()
{
	return balance;
}

void BankAccount::deposit(int amount)
{
	balance += amount;
}

void BankAccount::withdraw(int amount)
{
	balance -= amount;
}

void BankAccount::print()
{
	cout << "잔액은" << balance << "입니다." << endl;
}

int BankAccount::transfer(int amount, BankAccount otherAccount)
{
	balance -= amount;
	//otherAccount.deposit(amount);
	otherAccount.setBalance(otherAccount.getBalance() + amount);
	//cout << otherAccount.getBalance();
	return balance;
}

int main() {
	BankAccount account, yourAccount;

	account.setBalance(0);
	yourAccount.setBalance(0);
	account.deposit(10000);
	account.print();
	account.withdraw(8000);
	account.print();

	account.transfer(2000, yourAccount);
	account.print();
	//yourAccount.print(); // 포인터 사용


	return 0;
}