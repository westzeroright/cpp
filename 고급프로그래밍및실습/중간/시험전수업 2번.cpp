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
		cout << "과일의 이름과 가격, 수량을 입력하세요";
		string name;
		int price, amount;
		cin >> name >> price >> amount;
		objArray[i] = Fruit(name, price, amount);

		cout << name << "의 총 가격은 " << amount * price << "입니다" << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << "변경할 " << objArray[i].getName() << "의 수량을 입력하세요";
		int change;
		cin >> change;
		objArray[i].changeAmount(change);
	}
	cout << "=================";
	for (int i = 0; i < 3; i++) {
		cout << objArray[i].getName() << "의 총 가격은" << objArray[i].getAmount() * objArray[i].getPrice() << "입니다" << endl;
	}
	cout << "=================";

	return 0;
}