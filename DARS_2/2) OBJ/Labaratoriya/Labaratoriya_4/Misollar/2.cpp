#include <iostream>

using namespace std;

class Point
{
private:
    double x;
    double y;

public:
    Point(double x = 0.0, double y = 0.0) : x(x), y(y) {}

    double getX() const { return x; }
    double getY() const { return y; }

    bool operator==(const Point &other) const
    {
        return (x == other.x) && (y == other.y);
    }

    bool operator<(const Point &other) const
    {
        return (x < other.x) || ((x == other.x) && (y < other.y));
    }

    bool operator>(const Point &other) const
    {
        return (x > other.x) || ((x == other.x) && (y > other.y));
    }

    Point operator+(const Point &other) const
    {
        return Point(x + other.x, y + other.y);
    }

    Point operator-(const Point &other) const
    {
        return Point(x - other.x, y - other.y);
    }

    friend ostream &operator<<(ostream &out, const Point &p)
    {
        out << "(" << p.x << ", " << p.y << ")";
        return out;
    }
};

int main()
{
    Point p1(3.0, 4.0);
    Point p2(2.0, 5.0);

    cout << "p1: " << p1 << endl;
    cout << "p2: " << p2 << endl;

    if (p1 == p2)
        cout << "p1 va p2 teng" << endl;
    else if (p1 < p2)
        cout << "p1 kichik p2" << endl;
    else if (p1 > p2)
        cout << "p1 katta p2" << endl;

    Point sum = p1 + p2;
    Point diff = p1 - p2;

    cout << "Summa: " << sum << endl;
    cout << "Ayirma: " << diff << endl;

    return 0;
}
