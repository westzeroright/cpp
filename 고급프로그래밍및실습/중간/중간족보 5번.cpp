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
	cout << "=====학생 정보=====" << endl;
	cout << "이름 : " << name << endl;
	cout << "성별 : " << gender << endl;
	cout << "나이 : " << age << endl;
}

int main()
{
	cout << "몇명의 학생이 있습니까? : ";
	int size;
	cin >> size;
	Student* obj = new Student[size];

	for (int i = 0; i < size; i++) {
		cout << "학생의 이름, 성별, 나이를 차례대로 입력하세요 : ";
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