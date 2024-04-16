#include <iostream>
#include <stdexcept>

using namespace std;

string KattaTezlikniAniqlash(double km_per_hour, double m_per_second)
{
    if (km_per_hour < 0 || m_per_second < 0)
    {
        throw invalid_argument("Xatolik: Tezliklar manfiy bo'lishi mumkin emas!");
    }

    double km_per_second = km_per_hour / 3600; // Kilometrni sekundga o'tkazish

    if (km_per_second > m_per_second)
    {
        return "Kilometr/soat tezligi katta.";
    }
    else if (km_per_second < m_per_second)
    {
        return "Metrlar/sekunda tezligi katta.";
    }
    else
    {
        return "Tezliklar teng.";
    }
}

int main()
{
    double km_per_hour, m_per_second;

    cout << "Kilometr/soat tezligini kiriting: ";
    cin >> km_per_hour;
    cout << "Metrlar/sekunda tezligini kiriting: ";
    cin >> m_per_second;

    try
    {
        string katta_tezlik = KattaTezlikniAniqlash(km_per_hour, m_per_second);
        cout << katta_tezlik << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
