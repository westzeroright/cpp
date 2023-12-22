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
    cout << owner << "´Ô °èÁÂ" << endl;
    cout << "°èÁÂ¹øÈ£ : " << account << endl;
    cout << "ÀÜ°í : " << balance << endl;
    cout << "==============================" << endl;
}

void BankAccount::swapAccount(BankAccount& b1, BankAccount& b2) {
    BankAccount tmp = b1;
    b1 = b2;
    b2 = tmp;
}

int main(void) {
    BankAccount b1("È«±æµ¿", 1001, 100000);
    BankAccount b2("±è½ÂÁØ", 1002, 250000);

    BankAccount::swapAccount(b1, b2);

    b1.print();
    b2.print();

    return 0;
}
