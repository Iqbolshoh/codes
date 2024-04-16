#include <iostream>

using namespace std;

double TenglamaYechimi(double a, double b)
{
    if (a == 0)
    {
        throw invalid_argument("Xatolik: a 0 ga teng bo'lishi mumkin emas!");
    }
    return -b / a;
}

int main()
{
    double a, b;
    cout << "ax + b = 0 chiziqli tenglama uchun a va b ni kiriting: ";
    cin >> a >> b;

    try
    {
        double yechim = TenglamaYechimi(a, b);
        cout << "Tenglama yechimi: " << yechim << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
