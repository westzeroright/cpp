#include <iostream>
#include <string>
using namespace std;

class Fruit {
	string name;
	int price, amount;
public:
	Fruit() { }
	Fruit(string n, int p, int a) : name(n), price(p), amount(a) { }
	string getName() { return name; }
	int getPrice() { return price; }
	int getAmount() { return amount; }
	void setName(string name) { this->name = name; }
	void setPrice(int price) { this->price = price; }
	void setAmount(int amount) { this->amount = amount; }
	void changeAmount(int change) { this->amount = change; }
};

int main()
{
	Fruit objArray[3];
	for (int i = 0; i < 3; i++) {
		cout << "������ �̸��� ����, ������ �Է��ϼ���";
		string name;
		int price, amount;
		cin >> name >> price >> amount;
		objArray[i] = Fruit(name, price, amount);

		cout << name << "�� �� ������ " << amount * price << "�Դϴ�" << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << "������ " << objArray[i].getName() << "�� ������ �Է��ϼ���";
		int change;
		cin >> change;
		objArray[i].changeAmount(change);
	}
	cout << "=================";
	for (int i = 0; i < 3; i++) {
		cout << objArray[i].getName() << "�� �� ������" << objArray[i].getAmount() * objArray[i].getPrice() << "�Դϴ�" << endl;
	}
	cout << "=================";

	return 0;
}