#include <iostream>
using namespace std;

const double pi = 3.14;

class Shape { };

class TwoDimShape : public Shape {
public:
	virtual double getArea() = 0;
};

class ThreeDimShape : public Shape {
public:
	virtual double getVolume() = 0;
};

class Ellipse : public TwoDimShape {
	double a, b;
public:
	Ellipse(double a, double b) : a(a), b(b) { }
	double getArea()
	{
		return pi * a * b;
	}
};
class Rectangle : public TwoDimShape {
	double a, b;
public:
	Rectangle(double a, double b) : a(a), b(b) { }
	double getArea()
	{
		return a * b;
	}
};
class Triangle : public TwoDimShape {
	double width, height;
public:
	Triangle(double w, double h) : width(w), height(h) { }
	double getArea()
	{
		return 0.5 * width * height;
	}
};

class Shpere : public ThreeDimShape { };
class Cube : public ThreeDimShape { };
class Cylinder : public ThreeDimShape { };

int main()
{
	TwoDimShape* arrayOfShapes[3];

	arrayOfShapes[0] = new Ellipse(3, 4);
	arrayOfShapes[1] = new Rectangle(3, 4);
	arrayOfShapes[2] = new Triangle(3, 4);
	for (int i = 0; i < 6; i++) {
		cout << arrayOfShapes[i]->getArea() << endl;
	}
}