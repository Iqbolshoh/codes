#include <iostream>

using namespace std;

double Hisoblash(int a, double b, double c, int d)
{
    double tolov = 0;

    if (d <= 0)
    {
        throw("Gaplashish vaqti 0 dan kichik yoki teng bo'lishi mumkin emas!");
    }

    if (b < 0 || c < 0)
    {
        throw("To'lov qiymatlari manfiy bo'lishi mumkin emas!");
    }

    if (b == 0 || c == 0)
    {
        throw("Normadan oshgan har minutgi 0 ga teng bo'lishi mumkin emas!");
    }

    if (d <= a)
    {
        tolov = d * b;
    }
    else
    {
        tolov = a * b + (d - a) * c;
    }

    return tolov;
}

int main()
{
    int A, D;
    double B, C;

    cin >> A >> B >> C >> D;

    try
    {
        double tolov = Hisoblash(A, B, C, D);
        cout << "Foydalanuvchining to'lov summasi: " << tolov << " so'm" << endl;
    }
    catch (const char *e)
    {
        cout << "Xato: " << e << endl;
    }

    return 0;
}
