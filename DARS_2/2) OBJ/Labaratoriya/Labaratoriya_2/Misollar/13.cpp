#include <iostream>
#include <cmath>

using namespace std;

double UchburchakYuzasi(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        throw invalid_argument("Uchburchak tomonlari musbat son bo'lishi kerak!");
    }

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        throw invalid_argument("Uchburchak sharti buzilgan!");
    }

    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    double a, b, c;

    cout << "Uchburchak tomonlarini kiriting: ";
    cin >> a >> b >> c;

    try
    {
        double yuza = UchburchakYuzasi(a, b, c);
        cout << "Uchburchak yuzasi: " << yuza << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
