#include <iostream>
#include <math.h>

using namespace std;

class Shape
{
protected:
    string name;
    double area;

public:
    Shape(string n) : name(n), area(0.0) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Shape: " << name << endl;
        cout << " Area: " << area << " sm square " << endl;
    }
};

class Triangle : public Shape
{
private:
    double base;
    double height;

public:
    Triangle(string n, double b, double h) : Shape(n), base(b), height(h)
    {
        area = 0.5 * base * height;
    }
};

class Rectangle : public Shape
{
private:
    double length;
    double width;

public:
    Rectangle(string n, double l, double w) : Shape(n), length(l), width(w)
    {
        area = length * width;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(string n, double r) : Shape(n), radius(r)
    {
        area = M_PI * radius * radius;
    }
};

int main()
{
    Shape genericShape("Generic Shape");
    genericShape.displayInfo();
    Triangle triangle("Triangle", 5.0, 8.0);
    triangle.displayInfo();
    Rectangle rectangle("Rectangle", 4.0, 6.0);
    rectangle.displayInfo();
    Circle circle("Circle", 3.0);
    circle.displayInfo();

    return 0;
}
