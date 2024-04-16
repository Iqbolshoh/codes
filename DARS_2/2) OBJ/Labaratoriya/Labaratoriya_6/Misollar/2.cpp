#include <iostream>
#include <cmath>

using namespace std;

// Kvadrat sinfi
class Square
{
protected:
    double side;

public:
    Square(double _side) : side(_side) {}

    // Yuzasini hisoblash
    virtual double calculateArea()
    {
        return side * side;
    }

    // Perimetrini hisoblash
    virtual double calculatePerimeter()
    {
        return 4 * side;
    }
};

// Uchburchak sinfi
class Triangle : public Square
{
public:
    Triangle(double _side) : Square(_side) {}

    // Yuzasini hisoblash
    double calculateArea() override
    {
        double s = (3 * side) / 2; // Uchburchak yarim perimetri
        return sqrt(s * (s - side) * (s - side) * (s - side));
    }

    // Perimetrini hisoblash
    double calculatePerimeter() override
    {
        return 3 * side;
    }
};

// Daire sinfi
class Circle : public Square
{
public:
    Circle(double _side) : Square(_side) {}

    // Yuzasini hisoblash
    double calculateArea() override
    {
        return M_PI * side * side;
    }

    // Perimetrini hisoblash
    double calculatePerimeter() override
    {
        return 2 * M_PI * side;
    }
};

int main()
{
    Square *shape1 = new Triangle(5);
    Square *shape2 = new Circle(4);

    cout << "Triangle area: " << shape1->calculateArea() << endl;
    cout << "Triangle perimeter: " << shape1->calculatePerimeter() << endl;

    cout << "Circle area: " << shape2->calculateArea() << endl;
    cout << "Circle perimeter: " << shape2->calculatePerimeter() << endl;

    delete shape1;
    delete shape2;

    return 0;
}
