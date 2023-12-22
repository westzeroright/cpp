#include <iostream>
using namespace std;

int get_minimum(int x1, int x2, int x3)
{
	if (x1 < x2)
		if (x1 < x3)
			return x1;
		else if (x2 < x3)
			return x2;
	else
		return x3;
}

int main()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	cout << get_minimum(n1, n2, n3) << endl;
	return 0;
}