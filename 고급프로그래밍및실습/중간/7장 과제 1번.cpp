#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
	string phone;
	int id;
public:
	Student(string name, string phone, int id);
	string getName() const;
	string getPhone() const;
	int getId() const;
	void print();
};
Student::Student(string name, string phone, int id)
{
	this->name = name;
	this->phone = phone;
	this->id = id;
}
string Student::getName() const { return name; }
string Student::getPhone() const { return phone; }
int Student::getId() const { return id; }
void Student::print()
{
	cout << "==========================" << endl;
	cout << "이   름 : " << this->name << endl;
	cout << "전화번호 : " << this->phone << endl;
	cout << "학   번 : " << this->id << endl;
	cout << "==========================" << endl;
}

int main()
{
	const int MAX = 3;
	Student studentArr[MAX] = {
	Student("홍길동", "010-1234-5678", 100001),
	Student("김철수", "010-7412-2369", 100002),
	Student("박현진", "010-9874-1236", 100003)
	};

	for (int i = 0; i < MAX; i++)
		(studentArr + i)->print();

	return 0;

}