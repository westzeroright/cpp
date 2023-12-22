#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
	bool gender;
	int age;
public:
	Student() { }
	Student(string n, bool g, int a) : name(n), gender(g), age(a) { }
	void printStudent();
};

void Student::printStudent()
{
	cout << "=====�л� ����=====" << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << gender << endl;
	cout << "���� : " << age << endl;
}

int main()
{
	cout << "����� �л��� �ֽ��ϱ�? : ";
	int size;
	cin >> size;
	Student* obj = new Student[size];

	for (int i = 0; i < size; i++) {
		cout << "�л��� �̸�, ����, ���̸� ���ʴ�� �Է��ϼ��� : ";
		string name;
		bool gender;
		int age;
		cin >> name >> gender >> age;
		obj[i] = Student(name, gender, age);
	}

	for (int i = 0; i < size; i++) {
		obj[i].printStudent();
	}
}