#include <iostream>
#include <string>
using namespace std;

class Movie {
	string title;
	double rate;
public:
	static int number;
	Movie(string title, double rate)
	{
		this->title = title;
		this->rate = rate;
	}
	string getTitle() { return title; }
	double getRate() { return rate; }
	int getNumber() { return number; }
};

int Movie::number = 0;

int main()
{
	string t;
	double r;
	int n;

	cout << "��ȭ�� ����, ����, �����ο��� �Է��Ͽ���" << endl;
	cin >> t >> r >> n;
	Movie* m1 = new Movie(t, r);
	m1->number += n;

	cout << "��ȭ�� ����, ����, �����ο��� �Է��Ͽ���" << endl;
	cin >> t >> r >> n;
	Movie* m2 = new Movie(t, r);
	m2->number += n;

	cout << "��ȭ�� ����, ����, �����ο��� �Է��Ͽ���" << endl;
	cin >> t >> r >> n;
	Movie* m3 = new Movie(t, r);
	m3->number += n;

	cout << "���� ���� ��ȭ��";
	if (m1->getRate() > m2->getRate())
		if (m1->getRate() > m3->getRate())
			cout << "���� " << m1->getRate() << "���� " << m1->getTitle() << "�̴�";
		else
			cout << "���� " << m3->getRate() << "���� " << m3->getTitle() << "�̴�";
	else
		cout << "���� " << m2->getRate() << "���� " << m2->getTitle() << "�̴�";




	cout << "�� �����ο��� " << m3->number << "�̴�";

	return 0;
}