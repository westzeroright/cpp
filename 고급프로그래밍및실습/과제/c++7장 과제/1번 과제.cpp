#include <iostream>
#include <string>

const int MAX = 3; 

using namespace std; 

class Student {
private:
    string name;
    string phoneNumber;
    int studentNumber;

public:
    
    Student(const string& name, const string& phoneNumber, int studentNumber)
        : name(name), phoneNumber(phoneNumber), studentNumber(studentNumber) {}

    
    const string& getName() const {
        return this->name;
    }

    const string& getPhoneNumber() const {
        return this->phoneNumber;
    }

    int getStudentNumber() const {
        return this->studentNumber;
    }


    void print() const {
        cout << "==========================" << endl;
        cout << "��   �� : " << this->name << endl;
        cout << "��ȭ��ȣ : " << this->phoneNumber << endl;
        cout << "��   �� : " << this->studentNumber << endl;
        cout << "==========================" << endl;
    }
};

int main() {
    Student studentArr[MAX] = {
        Student("ȫ�浿", "010-1234-5678", 100001),
        Student("��ö��", "010-7412-2369", 100002),
        Student("������", "010-9874-1236", 100003)
    };

    for (int i = 0; i < MAX; ++i) {
        studentArr[i].print();
    }

    return 0;
}
