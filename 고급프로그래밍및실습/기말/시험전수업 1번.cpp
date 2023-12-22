#include <iostream>
#include <string>
using namespace std;

class ECE {
protected:
	string name;
	int number;
public:
	ECE(string n, int num) : name(n), number(num) { }
	virtual void printMajor()
	{
		cout << this->name << " " << this->number << "���� �а��� �������� �ʾҽ��ϴ�." << endl;
	}
};

class Electronic : public ECE {
public:
	Electronic(string n, int s) : ECE(n, s) { }
	void printMajor()
	{
		cout << this->name << " " << this->number << "����������Ű��������Դϴ�." << endl;
	}
};
class Computer : public ECE {
public:
	Computer(string n, int s) : ECE(n, s) { }
	void printMajor()
	{
		cout << this->name << " " << this->number << "��ǻ��������Ű��������Դϴ�." << endl;
	}
};
class Software : public ECE {
public:
	Software(string n, int s) : ECE(n, s) { }
	void printMajor()
	{
		cout << this->name << " " << this->number << "����Ʈ������������Դϴ�." << endl;
	}
};

int main() {
	ECE e1("ȫ�浿", 123456);
	Electronic e2("ȫ�浿", 123456);
	Computer e3("ȫ�浿", 123456);
	Software e4("ȫ�浿", 123456);
	e1.printMajor();
	e2.printMajor();
	e3.printMajor();
	e4.printMajor();
	return 0;
}
