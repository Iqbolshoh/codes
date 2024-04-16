#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

double AylanaYuzasi(double radius)
{
    if (radius < 0)
    {
        throw invalid_argument("Xatolik: Radius manfiy bo'lishi mumkin emas!");
    }

    return PI * radius * radius;
}

double KvadratYuzasi(double tomon)
{
    if (tomon < 0)
    {
        throw invalid_argument("Xatolik: Kvadrat tomoni manfiy bo'lishi mumkin emas!");
    }

    return tomon * tomon;
}

string KattaYuzaniAniqlash(double aylana_radius, double kvadrat_tomon)
{
    try
    {
        double aylana_yuzasi = AylanaYuzasi(aylana_radius);
        double kvadrat_yuzasi = KvadratYuzasi(kvadrat_tomon);

        if (aylana_yuzasi > kvadrat_yuzasi)
        {
            return "Aylana yuzasi katta.";
        }
        else if (aylana_yuzasi < kvadrat_yuzasi)
        {
            return "Kvadrat yuzasi katta.";
        }
        else
        {
            return "Yuzalar teng.";
        }
    }
    catch (const invalid_argument &e)
    {
        throw; // Xatoni pasda qoldiramiz
    }
}

int main()
{
    double aylana_radius, kvadrat_tomon;

    cout << "Aylana radiusini kiriting: ";
    cin >> aylana_radius;
    cout << "Kvadrat tomonini kiriting: ";
    cin >> kvadrat_tomon;

    try
    {
        string katta_yuzani = KattaYuzaniAniqlash(aylana_radius, kvadrat_tomon);
        cout << katta_yuzani << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
