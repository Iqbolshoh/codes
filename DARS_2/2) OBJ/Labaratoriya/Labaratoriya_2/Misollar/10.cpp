#include <iostream>

using namespace std;

string func(double kilometr, double fut)
{
    double fut_metrlar = fut * 0.3048;
    if (kilometr < 0 || fut_metrlar < 0)
    {
        throw invalid_argument("Xatolik: Masofalar manfiy bo'lishi mumkin emas!");
    }

    if (kilometr < fut_metrlar)
    {
        return "Kilometr kichik masofa.";
    }
    else if (fut_metrlar < kilometr)
    {
        return "Fut kichik masofa.";
    }
    else
    {
        return "Masofalar bir xil.";
    }
}

int main()
{
    double kilometr, fut;

    cout << "Kilometrlarni kiriting: ";
    cin >> kilometr;
    cout << "Futlarni kiriting: ";
    cin >> fut;

    try
    {
        string kichik_masofa = func(kilometr, fut);
        cout << kichik_masofa << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
