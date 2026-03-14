#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0;
};

class Circle : public Shape {
    float r;

public:
    Circle(float radius) {
        r = radius;
    }

    float area() {
        return 3.14 * r * r;
    }
};

class Rectangle : public Shape {
    float l, b;

public:
    Rectangle(float length, float breadth) {
        l = length;
        b = breadth;
    }

    float area() {
        return l * b;
    }
};

class Triangle : public Shape {
    float b, h;

public:
    Triangle(float base, float height) {
        b = base;
        h = height;
    }

    float area() {
        return 0.5 * b * h;
    }
};

int main() {
    Shape *s;

    Circle c(5);
    Rectangle r(4,6);
    Triangle t(3,7);

    s = &c;
    cout << "Circle Area: " << s->area() << endl;

    s = &r;
    cout << "Rectangle Area: " << s->area() << endl;

    s = &t;
    cout << "Triangle Area: " << s->area() << endl;

    return 0;
}