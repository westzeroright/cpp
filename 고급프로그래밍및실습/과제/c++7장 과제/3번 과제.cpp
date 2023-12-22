#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    void print() {
        if (real != 0) {
            cout << real;
            if (imag > 0)
                cout << " + ";
            else if (imag < 0)
                cout << " - ";
        }
        if (imag != 0)
            cout << abs(imag) << "i";
        cout << endl;
    }

    Complex add(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    Complex sub(const Complex& other) {
        Complex result;
        result.real = real - other.real;
        result.imag = imag - other.imag;
        return result;
    }

    Complex mult(const Complex& other) {
        Complex result;
        result.real = (real * other.real) - (imag * other.imag);
        result.imag = (real * other.imag) + (imag * other.real);
        return result;
    }
};

int main() {
    Complex x(2, 3), y(4, 6), z;

    cout << "첫 번째 복소수 x: ";
    x.print();

    cout << "두 번째 복소수 y: ";
    y.print();

    z = x.add(y);
    cout << "z = x + y = ";
    z.print();

    z = x.sub(y);
    cout << "z = x - y = ";
    z.print();

    z = x.mult(y);
    cout << "z = x * y = ";
    z.print();

    return 0;
}
