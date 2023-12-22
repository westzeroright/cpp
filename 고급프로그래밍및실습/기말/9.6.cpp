#include <iostream>
#include <string>
using namespace std;

class Shape {
	string name;
public:
	virtual double getSurfaceArea() = 0;
};

class Sphere : public Shape {
	double radius;
public:
	Sphere(double r) : radius(r) { }
	void setRadius(double radius) { this->radius = radius; }
	double getRadius() { return radius; }
	double getSurfaceArea()
	{
		double area = 4 * 3.14 * radius * radius;
		return area;
	}

};
class Cube : public Shape {
	double width, length, height;
public:
	Cube(double w, double l, double h) : width(w), length(l), height(h) { }
	void setWidth(double width) { this->width = width; }
	double getWidth() { return width; }
	void setLength(double legnth) { this->length = length; }
	double getLenght() { return length; }
	void setHeight(double height) { this->height = height; }
	double getHeight() { return height; }
	double getSurfaceArea()
	{
		double area = width * length * height;
		return area;
	}
};
class Cylinder : public Shape {
	double radius, height;
public:
	Cylinder(double r, double h) : radius(r), height(h) { }
	void setRadius(double radius) { this->radius = radius; }
	double getRadius() { return radius; }
	void setHeight(double height) { this->height = height; }
	double getHeight() { return height; }
	double getSurfaceArea()
	{
		double area = radius * radius * 3.14 * height;
		return area;
	}
};

int main()
{
	Shape* arrayOfShapes[3];

	arrayOfShapes[0] = new Sphere(5);
	arrayOfShapes[1] = new Cube(5, 5, 5);
	arrayOfShapes[2] = new Cylinder(5, 5);
	for (int i = 0; i < 3; i++) {
		cout << arrayOfShapes[i]->getSurfaceArea() << endl;
	}
	for (int i = 0; i < 3; i++) {
		delete arrayOfShapes[i];
	}
	// 하향 형변환 같은 개고생도 사서 하는 건 어떰..??
}