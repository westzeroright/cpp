#include <iostream>
using namespace std;

int main()
{
	int days[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int month;
	for (month = 0; month < 12; month++)
		cout << month + 1 << "월은" << days[month] << "일까지 있습니다." << endl;
	
	return 0;
}