#include <iostream>

using namespace std;

void bolinadimi(int a, int b)
{
    if (a == 0)
    {
        throw invalid_argument("Xatolik: Boluvchi 0 ga teng bolishi mumkin emas!");
    }

    if (b % a == 0)
    {
        cout << a << " soni " << b << " sonining boluvchisi." << endl;
    }
    else
    {
        throw invalid_argument(to_string(a) + " soni " + to_string(b) + " sonining boluvchisi emas!");
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    try
    {
        bolinadimi(a, b);
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
