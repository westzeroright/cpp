#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int number;
public:
	string getName() { return name; }
	void setName(string n) { name = n; }
	int getSchoolNum() { return number; }
	void setSchoolNum(int num) { number = num; }

	void show() {
		cout << "===================" << endl;
		cout << "�л��̸� : " << name << endl;
		cout << "��    �� : " << number << endl;
		cout << "===================" << endl;
	}
};

int main(void)
{
	Student me, you;

	me.setName("ȫ�浿");
	me.setSchoolNum(123456);

	you.setName("������");
	you.setSchoolNum(987654);

	me.show();
	you.show();
}