#include <iostream>
using namespace std;

class Complex {
	double real;
	double imag;
public:
	Complex() { }
	Complex(double r, double i) : real(r), imag(i) { }
	void print()
	{
		cout << real << " + " << imag << "i" << endl;
	}
	Complex add(Complex c2)
	{
		Complex c3;
		c3.real = real + c2.real;
		c3.imag = imag + c3.imag;
		return c3;
	}
};
int main(void)
{
	Complex x(2, 3), y(4, 6), z;

	cout << "첫 번째 복소수 x: ";
	x.print();

	cout << "두 번째 복소수 y: ";
	y.print();

	z = x.add(y);
	cout << "z = x + y = ";
	z.print();

	return 0;

}