#include <iostream>
#include <string>
using namespace std;

int main()
{
	int hour, min, sec, time;
	string s1, s2, s3;
	cin >> hour >> s1 >> min >> s2 >> sec >> s3;
	time = (hour * 60 + min) * 60;
	cout << time << "ÃÊÀÌ´Ù." << endl;
	return 0;
}