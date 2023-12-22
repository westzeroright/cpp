#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	cout << "당신의 이름을 입력하시오: ";
	cin >> s1;
	cout << s1 << "씨 무엇을 해드릴까요?" << endl;
	cout << "할일을 입력하시오: ";
	cin >> s2;
	cout << s2 << "는 할 수 없습니다." << endl;
	return 0;
}
