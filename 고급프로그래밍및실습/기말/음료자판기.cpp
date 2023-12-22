#include <iostream>
#include <string>
using namespace std;

class Date {
	friend ostream& operator<<(ostream& os, Date d);
private:
	int year;
	int month;
	int day;
public:
	Date(int y, int m, int d)
	{
		this->year = y;
		if (m < 0 || m > 12)
			this->month = 1;
		else
			this->month = m;
		if (d < 0 || d > 31)
			this->day = 1;
		else
			this->day = d;
	}
};

class Drink {
private:
	string name;
	int price;
	Date expiryDate;
public:
	Drink(string n, int p, int y, int m, int d) : name(n), price(p), expiryDate(y, m, d) { }
	string getName() { return name; }
	int getPrice() { return price; }
	Date getExpiryDate() { return expiryDate; }
	virtual void print() = 0;

};

ostream& operator<<(ostream& os, Date d)
{
	os << d.year << "년" << d.month << "월" << d.day << "일";
	return os;
}

class Soda : public Drink {
public:
	Soda(string n, int p, int y, int m, int d) : Drink(n, p, y, m, d) { }
	void print()
	{
		cout << "이름 : " << getName() << endl;
		cout << "가격 : " << getPrice() << endl;
		cout << "유통기한 : " << getExpiryDate() << endl;
	}
};
class SportsDrink : public Drink {
public:
	SportsDrink(string n, int p, int y, int m, int d) : Drink(n, p, y, m, d) { }
	void print()
	{
		cout << "이름 : " << getName() << endl;
		cout << "가격 : " << getPrice() << endl;
		cout << "유통기한 : " << getExpiryDate() << endl;
	}
};
class EnergyDrink : public Drink {
private:
	int rateTaurine;
public:
	EnergyDrink(string n, int p, int y, int m, int d, int t) : Drink(n, p, y, m, d), rateTaurine(t) { }
	void print()
	{
		cout << "이름 : " << getName() << endl;
		cout << "가격 : " << getPrice() << endl;
		cout << "유통기한 : " << getExpiryDate() << endl;
		cout << "타우린 함량 : " << rateTaurine << "mg" << endl;
	}
};

int main()
{
	Drink* arrayOfDrinks[20] = { NULL };

	while (1)
	{
		int choice, num, price, year, month, day;
		string name;
		cout << "추가할 음료를 선택하세요. (1. 탄산음료, 2. 이온음료, 3. 에너지드링크, 4. 종료) : ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << endl;
			cout << "음료를 넣을 번호를 입력하세요 : ";
			cin >> num;
			cout << "음료의 정보를 입력하세요(이름, 가격, 유통기한) : ";
			cin >> name >> price >> year >> month >> day;

			arrayOfDrinks[num - 1] = new Soda(name, price, year, month, day);
			arrayOfDrinks[num - 1]->print();
			cout << endl;
			break;
		case 2:
			cout << endl;
			cout << "음료를 넣을 번호를 입력하세요 : ";
			cin >> num;
			cout << "음료의 정보를 입력하세요(이름, 가격, 유통기한) : ";
			cin >> name >> price >> year >> month >> day;

			arrayOfDrinks[num - 1] = new SportsDrink(name, price, year, month, day);
			arrayOfDrinks[num - 1]->print();
			cout << endl;
			break;
		case 3:
			int taurine;
			cout << endl;
			cout << "음료를 넣을 번호를 입력하세요 : ";
			cin >> num;
			cout << "음료의 정보를 입력하세요(이름, 가격, 유통기한) : ";
			cin >> name >> price >> year >> month >> day >> taurine;

			arrayOfDrinks[num - 1] = new EnergyDrink(name, price, year, month, day, taurine);
			arrayOfDrinks[num - 1]->print();
			cout << endl;
			break;
		}
		if (choice == 4) break;

	}
	for (int i = 0; i < 20; i++) {
		cout << i + 1 << "번째 칸 음료 : " << arrayOfDrinks[i]->getName() << endl;
	}

	return 0;
}