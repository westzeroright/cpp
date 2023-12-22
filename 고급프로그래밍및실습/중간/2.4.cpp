#include <iostream>
using namespace std;

// 당첨 번호를 생성하는 함수
int get_number()
{
	// rand() 함수를 호출하여 1부터 100사이의 번호 생성
	// rand() 함수는 0이상 1미만의 난수 생성
	int number;
	number = rand() * 100 + 1;
	return number;
}

// 당첨 여부를 판별하는 함수
string is_winning_ticket(int x, int y)
{
	if (x == y)
		return "당첨 ㅊㅋ";
	else
		return "까비";
	return 0;
}

int main()
{
	int user;
	cout << "복권의 번호를 입력하시오: ";
	cin >> user;
	int ticket;
	ticket = get_number();
	cout << is_winning_ticket(ticket, user) << endl;
	return 0;
}