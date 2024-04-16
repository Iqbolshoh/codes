#include <iostream>
#include <cmath>

using namespace std;

class Shape
{
protected:
    string name;
    double area;

public:
    Shape(string n) : name(n) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Shape : " << name << endl;
        cout << " Area : " << area << " sm square " << endl;
    }
};

class Triangle : public Shape
{
protected:
    double base;
    double height;

public:
    Triangle(string n, double b, double h) : Shape(n), base(b), height(h) {}

    void displayTriangleInfo()
    {
        displayInfo();
        cout << " Base : " << base << " sm " << endl;
        cout << " Height : " << height << " sm " << endl;
    }
};

class RightAngledTriangle : public Triangle
{
public:
    RightAngledTriangle(double b, double h) : Triangle("Right-Angled Triangle", b, h) { area = 0.5 * base * height; }

    void displayRightAngledTriangleInfo()
    {
        displayTriangleInfo();
    }
};

class EquilateralTriangle : public Triangle
{
private:
    double side;

public:
    EquilateralTriangle(double s) : Triangle("Equilateral Triangle", s, (sqrt(3.0) / 2.0) * s), side(s) { area = (sqrt(3.0) / 4.0) * side * side; }

    void displayEquilateralTriangleInfo()
    {
        displayTriangleInfo();
        cout << " Side Length : " << side << " sm " << endl;
    }
};

int main()
{
    RightAngledTriangle rightAngledTriangle(4.0, 3.0);
    rightAngledTriangle.displayRightAngledTriangleInfo();
    EquilateralTriangle equilateralTriangle(5.0);
    equilateralTriangle.displayEquilateralTriangleInfo();

    return 0;
}
