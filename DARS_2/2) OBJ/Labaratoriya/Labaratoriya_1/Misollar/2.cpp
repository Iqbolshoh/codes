#include <iostream>
#include <math.h>

using namespace std;

class Figure
{
public:
    float surface;
    void print()
    {
        cout << " Surface : " << surface << endl;
    }
};

class Triangle : public Figure
{
public:
    Triangle(float a, float b) : Figure()
    {
        surface = a * b / 2;
    }
};

class Trapezia : public Figure
{
public:
    Trapezia(float a, float b, float h) : Figure()
    {
        surface = (a + b) / 2 * h;
    }
};

class Circle : public Figure
{
public:
    Circle(float r) : Figure()
    {
        surface = r * r * M_PI;
    }
};

int main()
{
    Triangle obj1(4, 3);
    obj1.print();
    Trapezia obj2(2, 2, 4);
    obj2.print();
    Circle obj3(2);
    obj3.print();

    return 0;
}
