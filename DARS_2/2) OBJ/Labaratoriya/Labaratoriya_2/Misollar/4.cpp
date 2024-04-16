#include <iostream>

using namespace std;

double func(double v1, double v2, double t)
{
    if (v1 < 0 || v2 < 0 || t < 0)
    {
        throw("Xatolik: Uch tezlik vaqt musbat son bo'lishi kerak!");
    }
    return (v1 * t) / (v2 - v1);
}

int main()
{
    double v1, v2, t;
    cout << "Yuk mashinasi tezligi (v1 km/soat): ";
    cin >> v1;
    cout << "Yengil avtomobil tezligi (v2 km/soat): ";
    cin >> v2;
    cout << "Yengil avtomobilning yo'lga chiqishdan keyin o'tgan vaqt (t soat): ";
    cin >> t;

    try
    {
        double quvib_otish_vaqt = func(v1, v2, t);
        cout << "Yengil avtomobil yuk mashinasini " << quvib_otish_vaqt << " soatda quvib o'tadi." << endl;
    }
    catch (const char *e)
    {
        cout << "Xato: " << e << endl;
    }

    return 0;
}
