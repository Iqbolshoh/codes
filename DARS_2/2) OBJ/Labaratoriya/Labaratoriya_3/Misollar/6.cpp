#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class Rectangle
{
private:
    T tomon1, tomon2;

public:
    Rectangle(T t1, T t2) : tomon1(t1), tomon2(t2) {}

    T yuzasi()
    {
        return tomon1 * tomon2;
    }

    T perimetr()
    {
        return 2 * (tomon1 + tomon2);
    }

    T diagonal()
    {
        return sqrt(tomon1 * tomon1 + tomon2 * tomon2);
    }

    T tashqiAylanaRadius()
    {
        return diagonal() / 2;
    }

    T ichkiAylanaRadius()
    {
        return (tomon1 < tomon2 ? tomon1 : tomon2) / 2;
    }
};

int main()
{
    Rectangle<double> rectangle(3, 4);

    cout << "Yuzasi: " << rectangle.yuzasi() << endl;
    cout << "Perimetri: " << rectangle.perimetr() << endl;
    cout << "Diagonal: " << rectangle.diagonal() << endl;
    cout << "Tashqilgan aylana radiusi: " << rectangle.tashqiAylanaRadius() << endl;
    cout << "Ichki aylana radiusi: " << rectangle.ichkiAylanaRadius() << endl;

    return 0;
}
