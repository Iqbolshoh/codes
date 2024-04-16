#include <iostream>

using namespace std;

void Taqsimlash(double &x, double &y)
{
    if (x >= y)
    {
        throw "Xatolik: x katta y dan katta yoki teng bo'lishi kerak!";
    }
    double temp = x;
    x = y;
    y = temp;
}

int main()
{
    double x, y;
    cin >> x >> y;

    try
    {
        Taqsimlash(x, y);
        cout << "Taqsimlashdan so'ng:\nx = " << x << ", y = " << y << endl;
    }
    catch (const char *e)
    {
        cout << "Xato: " << e << endl;
    }

    return 0;
}
