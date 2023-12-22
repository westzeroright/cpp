#include <iostream>
#include <string>
using namespace std;

class Complex {
private:
	double real, image;
public:
	double getReal() {
		return real;
	}
	void setReal(double r) {
		real = r;
	}
	double getImage() {
		return image;
	}
	void setImage(double img) {
		image = img;
	}

	void print() {
		cout << real << " + " << image << "i" << endl;
	}
};

// º¹¼Ò¼ö¿¡ ´ëÇÑ µ¡¼À ¿¬»ê°ú »¬¼À ¿¬»ê
void calc(double a, double b, double c, double d) {
	cout << a + c << " + " << b + d << "i" << endl;
}
void sub(double a, double b, double c, double d) {
	if (b - d >= 0)
		cout << a - c << " - " << b - d << "i" << endl;
	else
		cout << a - c << " + " << -(b - d) << "i" << endl;
}


int main()
{
	Complex c1, c2;
	
	c1.setReal(12.0);
	c1.setImage(17.9);
	c1.print();
	double c1a = c1.getReal();
	double c1b = c1.getImage();


	c2.setReal(24.0);
	c2.setImage(35.8);
	double c2c = c2.getReal();
	double c2d = c2.getImage();

	calc(c1a, c1b, c2c, c2d);
	sub(c1a, c1b, c2c, c2d);
	
}