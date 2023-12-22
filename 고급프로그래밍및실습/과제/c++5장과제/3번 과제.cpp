#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int speed, gear;
	string color;
public:
	int getSpeed() { return speed; }
	void setSpeed(int s) {
		if (s < 0)
			speed = 0;
		else
			speed = s;
	}
	int getGear() { return gear; }
	void setGear(int g) { gear = g; }
	string getColor() { return color; }
	void setColor(string c) { color = c; }
};

int main(void)
{
	Car myCar;

	myCar.setSpeed(-30);
	myCar.setGear(1);
	myCar.setColor("Green");

	cout << "�ӵ� : " << myCar.getSpeed() << endl;
	cout << "��� : " << myCar.getGear() << endl;
	cout << "���� : " << myCar.getColor() << endl;

	return 0;
}
