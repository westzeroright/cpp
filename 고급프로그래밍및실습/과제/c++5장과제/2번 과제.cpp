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
		cout << "학생이름 : " << name << endl;
		cout << "학    번 : " << number << endl;
		cout << "===================" << endl;
	}
};

int main(void)
{
	Student me, you;

	me.setName("홍길동");
	me.setSchoolNum(123456);

	you.setName("강감찬");
	you.setSchoolNum(987654);

	me.show();
	you.show();
}