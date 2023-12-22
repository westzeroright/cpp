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
	cout << "학생의 이름, 나이, 번호, 학교를 차례로 입력하시오." << endl;;
	string name, number, school;
	int age;
	cin >> name >> age >> number >> school;

	Student s(name, age, number, school);

	cout << "========개인정보=======" << endl;
	cout << "학생의 이름 : " << s.getName() << endl;
	cout << "학생의 나이 : " << s.getAge() << endl;
	cout << "학생의 번호 : " << s.getNumber() << endl;
	cout << "학생의 학교 : " << s.getSchool() << endl;
}