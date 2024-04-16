#include <iostream>
#include <cmath>

using namespace std;

double calculateFunction(double a, double x, double b, double c, double d, double m)
{
    if (a < 0 || x < 0 || b < 0 || c < 0 || d < 0 || m < 0)
    {
        throw invalid_argument("Argumentlar manfiy bo'lishi mumkin emas!");
    }

    double intermediate = sqrt(a * x + b * c + d);
    if (isnan(intermediate))
    {
        throw invalid_argument("Ildiz hisoblanmadi, ishora mavjud!");
    }

    double result = sqrt(intermediate + m);

    return result;
}

int main()
{
    double a, x, b, c, d, m;
    cout << "a, x, b, c, d, m ni kiriting: ";
    cin >> a >> x >> b >> c >> d >> m;

    try
    {
        double result = calculateFunction(a, x, b, c, d, m);
        cout << "Natija: " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xatolik: " << e.what() << endl;
    }

    return 0;
}
