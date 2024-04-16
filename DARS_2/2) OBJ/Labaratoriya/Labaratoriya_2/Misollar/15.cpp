#include <iostream>
#include <cmath>

using namespace std;

void QuadraticEquationSolution(double a, double b, double c)
{
    if (a == 0)
    {
        throw invalid_argument("Xatolik: a 0 ga teng bo'lishi mumkin emas! Bu kvadrat tenglama emas.");
    }

    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        throw invalid_argument("Xatolik: Tenglamada haqiqiy yechim mavjud emas! Diskriminant manfiy.");
    }

    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    double x2 = (-b - sqrt(discriminant)) / (2 * a);

    cout << "Tenglama yechimlari:\n";
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}

int main()
{
    double a, b, c;
    cout << "ax^2 + bx + c = 0 kvadrat tenglama uchun a, b, va c ni kiriting: ";
    cin >> a >> b >> c;

    try
    {
        QuadraticEquationSolution(a, b, c);
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
