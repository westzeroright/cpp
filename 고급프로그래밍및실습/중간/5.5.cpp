#include <iostream>
#include <string>
using namespace std;

class CellPhone {
private:
	string model, company, color;
	bool isOn, carmera;
public:
	bool getIsOn();
	void setIsOn(bool isOn);

	void turnOn() {
		isOn = true;
	}
	void turnOff() {
		isOn = false;
	}
	void print() {
		cout << "Àü¿øÀÌ" << (isOn == true ? "ÄÑÁü" : "²¨Áü") << endl;
	}

};

bool CellPhone::getIsOn()
{
	return isOn;
}
void CellPhone::setIsOn(bool state)
{
	isOn = state;
}


int main()
{
	CellPhone phone;

	phone.turnOn();
	phone.print();
	phone.turnOff();
	phone.print();

	return 0;
}