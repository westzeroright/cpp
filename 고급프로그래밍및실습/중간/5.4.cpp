#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string name, phone;
	int salary;
public:
	string getName() { return name; }
	string getPhone() { return phone; }
	int getSalary() { return salary; }

	void setName(string n) {
		name = n;
	}
	void setPhone(string p) {
		phone = p;
	}
	void setSalary(int s) {
		salary = s;
	}
};

int main()
{
	Employee myEmployee;

	myEmployee.setName("ȫ�浿");
	myEmployee.setPhone("010-1234-5678");
	myEmployee.setSalary(100000);

	cout << "�̸�: " << myEmployee.getName() << endl;
	cout << "��ȭ��ȣ: " << myEmployee.getPhone() << endl;
	cout << "����: " << myEmployee.getSalary() << endl;

	return 0;

}