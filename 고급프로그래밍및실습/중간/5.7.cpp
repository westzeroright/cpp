#include <iostream>
using namespace std;

class Triangle {
private:
	double base, height;
	double area = 0.5 * base * height;
public:
	double getBase() {
		return base;
	}
	void setBase(double b) {
		base = b;
	}
	double getHeight() {
		return height;
	}
	void setHeight(double h) {
		height = h;
	}
	double getArea() {
		return area;
	}
};

int main()
{
	Triangle t;
	
	t.setBase(4.0);
	t.getBase();
	t.setHeight(6.0);
	t.getHeight();
	cout << t.getArea() << endl;
}