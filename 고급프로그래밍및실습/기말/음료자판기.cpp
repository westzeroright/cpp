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
	os << d.year << "��" << d.month << "��" << d.day << "��";
	return os;
}

class Soda : public Drink {
public:
	Soda(string n, int p, int y, int m, int d) : Drink(n, p, y, m, d) { }
	void print()
	{
		cout << "�̸� : " << getName() << endl;
		cout << "���� : " << getPrice() << endl;
		cout << "������� : " << getExpiryDate() << endl;
	}
};
class SportsDrink : public Drink {
public:
	SportsDrink(string n, int p, int y, int m, int d) : Drink(n, p, y, m, d) { }
	void print()
	{
		cout << "�̸� : " << getName() << endl;
		cout << "���� : " << getPrice() << endl;
		cout << "������� : " << getExpiryDate() << endl;
	}
};
class EnergyDrink : public Drink {
private:
	int rateTaurine;
public:
	EnergyDrink(string n, int p, int y, int m, int d, int t) : Drink(n, p, y, m, d), rateTaurine(t) { }
	void print()
	{
		cout << "�̸� : " << getName() << endl;
		cout << "���� : " << getPrice() << endl;
		cout << "������� : " << getExpiryDate() << endl;
		cout << "Ÿ�츰 �Է� : " << rateTaurine << "mg" << endl;
	}
};

int main()
{
	Drink* arrayOfDrinks[20] = { NULL };

	while (1)
	{
		int choice, num, price, year, month, day;
		string name;
		cout << "�߰��� ���Ḧ �����ϼ���. (1. ź������, 2. �̿�����, 3. �������帵ũ, 4. ����) : ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << endl;
			cout << "���Ḧ ���� ��ȣ�� �Է��ϼ��� : ";
			cin >> num;
			cout << "������ ������ �Է��ϼ���(�̸�, ����, �������) : ";
			cin >> name >> price >> year >> month >> day;

			arrayOfDrinks[num - 1] = new Soda(name, price, year, month, day);
			arrayOfDrinks[num - 1]->print();
			cout << endl;
			break;
		case 2:
			cout << endl;
			cout << "���Ḧ ���� ��ȣ�� �Է��ϼ��� : ";
			cin >> num;
			cout << "������ ������ �Է��ϼ���(�̸�, ����, �������) : ";
			cin >> name >> price >> year >> month >> day;

			arrayOfDrinks[num - 1] = new SportsDrink(name, price, year, month, day);
			arrayOfDrinks[num - 1]->print();
			cout << endl;
			break;
		case 3:
			int taurine;
			cout << endl;
			cout << "���Ḧ ���� ��ȣ�� �Է��ϼ��� : ";
			cin >> num;
			cout << "������ ������ �Է��ϼ���(�̸�, ����, �������) : ";
			cin >> name >> price >> year >> month >> day >> taurine;

			arrayOfDrinks[num - 1] = new EnergyDrink(name, price, year, month, day, taurine);
			arrayOfDrinks[num - 1]->print();
			cout << endl;
			break;
		}
		if (choice == 4) break;

	}
	for (int i = 0; i < 20; i++) {
		cout << i + 1 << "��° ĭ ���� : " << arrayOfDrinks[i]->getName() << endl;
	}

	return 0;
}