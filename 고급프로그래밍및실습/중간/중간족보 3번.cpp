#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;
	string number;
public:
	string getName() { return name; }
	int getAge() { return age; }
	string getNumber() { return number; }
	Person(string n, int a, string num) : name(n), age(a), number(num) { }
};

class Student : public Person
{
	string school;
public:
	void setSchool(string s) { school = s; }
	string getSchool() { return school; }
	Student(string n, int a, string num, string s) : Person(n, a, num), school(s) { }
};

int main()
{
	cout << "�л��� �̸�, ����, ��ȣ, �б��� ���ʷ� �Է��Ͻÿ�." << endl;;
	string name, number, school;
	int age;
	cin >> name >> age >> number >> school;

	Student s(name, age, number, school);

	cout << "========��������=======" << endl;
	cout << "�л��� �̸� : " << s.getName() << endl;
	cout << "�л��� ���� : " << s.getAge() << endl;
	cout << "�л��� ��ȣ : " << s.getNumber() << endl;
	cout << "�л��� �б� : " << s.getSchool() << endl;
}