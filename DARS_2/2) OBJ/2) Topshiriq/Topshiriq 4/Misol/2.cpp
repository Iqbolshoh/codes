#include <iostream>

using namespace std;

class Tortburchak
{
private:
    int a;
    int b;
    int area;

public:
    Tortburchak() : a(0), b(0), area(0) {}

    void Print()
    {
        cout << " a = " << a << endl;
        cout << " b = " << b << endl;
        cout << " Area = " << area << endl;
    }

    friend Tortburchak calculateArea(Tortburchak &Shakl, int a, int b);
};

Tortburchak calculateArea(Tortburchak &Shakl, int a, int b)
{
    Shakl.a = a;
    Shakl.b = b;
    Shakl.area = a * b;
}
int main()
{
    Tortburchak Rectangle;
    Rectangle.Print();
    calculateArea(Rectangle, 5, 10);
    Rectangle.Print();
    return 0;
}