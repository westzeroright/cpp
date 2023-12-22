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
		cout << this->name << " " << this->number << "아직 학과가 정해지지 않았습니다." << endl;
	}
};

class Electronic : public ECE {
public:
	Electronic(string n, int s) : ECE(n, s) { }
	void printMajor()
	{
		cout << this->name << " " << this->number << "전자정보통신공학전공입니다." << endl;
	}
};
class Computer : public ECE {
public:
	Computer(string n, int s) : ECE(n, s) { }
	void printMajor()
	{
		cout << this->name << " " << this->number << "컴퓨터정보통신공학전공입니다." << endl;
	}
};
class Software : public ECE {
public:
	Software(string n, int s) : ECE(n, s) { }
	void printMajor()
	{
		cout << this->name << " " << this->number << "소프트웨어공학전공입니다." << endl;
	}
};

int main() {
	ECE e1("홍길동", 123456);
	Electronic e2("홍길동", 123456);
	Computer e3("홍길동", 123456);
	Software e4("홍길동", 123456);
	e1.printMajor();
	e2.printMajor();
	e3.printMajor();
	e4.printMajor();
	return 0;
}
