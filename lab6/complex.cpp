#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r=0, int i=0) {
        real = r;
        imag = i;
    }

    Complex operator + (Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex operator - (Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex operator * (Complex c) {
        return Complex(real*c.real - imag*c.imag,
                       real*c.imag + imag*c.real);
    }

    void display() {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex c1(3,4), c2(2,5);

    Complex add = c1 + c2;
    Complex sub = c1 - c2;
    Complex mul = c1 * c2;

    cout << "Addition: ";
    add.display();

    cout << "Subtraction: ";
    sub.display();

    cout << "Multiplication: ";
    mul.display();

    return 0;
}