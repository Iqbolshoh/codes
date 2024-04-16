#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    double x;
    double y;
    double distance;

public:
    Point() : x(0), y(0), distance(0) {}

    void Print()
    {
        cout << " x = " << x << endl;
        cout << " y = " << y << endl;
        cout << " distance = " << distance << endl;
    }
    friend Point calculateDistance(Point &Nuqta, double x, double y);
};
Point calculateDistance(Point &Nuqta, double x, double y)
{
    Nuqta.x = x;
    Nuqta.y = y;
    Nuqta.distance = abs(x - y);
}

int main()
{
    Point obj1;
    obj1.Print();
    calculateDistance(obj1, 5.5, 7.7);
    obj1.Print();

    return 0;
}
