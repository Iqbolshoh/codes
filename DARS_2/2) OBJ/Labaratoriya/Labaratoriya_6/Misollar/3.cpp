#include <iostream>
#include <math.h>

using namespace std;
 
class Figure
{
public: 
    virtual double calculateArea() = 0;
 
    virtual double calculatePerimeter() = 0;
};
 
class Rectangle : public Figure
{
protected:
    double length;
    double width;

public:
    Rectangle(double _length, double _width) : length(_length), width(_width) {}
 
    double calculateArea() override
    {
        return length * width;
    }
 
    double calculatePerimeter() override
    {
        return 2 * (length + width);
    }
};
 
class Rhombus : public Figure
{
protected:
    double diagonal1;
    double diagonal2;

public:
    Rhombus(double _diagonal1, double _diagonal2) : diagonal1(_diagonal1), diagonal2(_diagonal2) {}
 
    double calculateArea() override
    {
        return (diagonal1 * diagonal2) / 2;
    }
 
    double calculatePerimeter() override
    {
        return 2 * (sqrt(diagonal1 * diagonal1 + diagonal2 * diagonal2));
    }
};

int main()
{
    Rectangle rect(4, 6);
    Rhombus rhombus(5, 6);

    cout << "Rectangle area: " << rect.calculateArea() << ", perimeter: " << rect.calculatePerimeter() << endl;
    cout << "Rhombus area: " << rhombus.calculateArea() << ", perimeter: " << rhombus.calculatePerimeter() << endl;

    return 0;
}
