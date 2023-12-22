#include <iostream>
using namespace std;

int main()
{
	cout << "변환할 값을 입력하세요 (단위 : sec) : ";
	int sec;
	cin >> sec;
	int hour, min;
	hour = sec / 3600;
	min = (sec - (hour * 3600)) / 60;
	sec = sec - (hour * 3600) - (min * 60);
	cout << hour << "시간" << min << "분" << sec << "초" << endl;
}