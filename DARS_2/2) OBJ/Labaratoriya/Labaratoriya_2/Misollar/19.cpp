#include <iostream>
#include <cmath>

using namespace std;

double calculateLogarithm(double x, double a, double z, double b)
{
    if (x <= 0 || a <= 0 || z <= 0 || b <= 0)
    {
        throw invalid_argument("Argumentlar manfiy bo'lishi mumkin emas!");
    }

    double logXa = log(x) / log(a);
    double logZb = log(z) / log(b);

    if (isnan(logXa) || isnan(logZb))
    {
        throw invalid_argument("Logarifm funksiyasi hisoblanmadi, ishora mavjud!");
    }

    return logXa + logZb;
}

int main()
{
    double x, a, z, b;
    cout << "x, a, z, b ni kiriting: ";
    cin >> x >> a >> z >> b;

    try
    {
        double result = calculateLogarithm(x, a, z, b);
        cout << "Natija: " << result << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xatolik: " << e.what() << endl;
    }

    return 0;
}
