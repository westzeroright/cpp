#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    int account;
    int balance;
public:
    BankAccount(string o, int a, int b) : owner(o), account(a), balance(b) {};
    BankAccount() {};

    void print();
    static void swapAccount(BankAccount& b1, BankAccount& b2);
};

void BankAccount::print() {
    cout << owner << "�� ����" << endl;
    cout << "���¹�ȣ : " << account << endl;
    cout << "�ܰ� : " << balance << endl;
    cout << "==============================" << endl;
}

void BankAccount::swapAccount(BankAccount& b1, BankAccount& b2) {
    BankAccount tmp = b1;
    b1 = b2;
    b2 = tmp;
}

int main(void) {
    BankAccount b1("ȫ�浿", 1001, 100000);
    BankAccount b2("�����", 1002, 250000);

    BankAccount::swapAccount(b1, b2);

    b1.print();
    b2.print();

    return 0;
}
