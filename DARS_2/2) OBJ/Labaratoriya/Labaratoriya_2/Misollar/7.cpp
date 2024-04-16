#include <iostream>

using namespace std;

void bolinadimi(int m, int n)
{
    if (n == 0)
    {
        throw invalid_argument("Xatolik: n soni 0 ga bo'lib bo'lmaydi!");
    }

    if (m >= n)
    {
        cout << m << " soni " << n << " soniga bo'lganda qoldigi : " << m % n << endl;
    }
    else
    {
        throw invalid_argument(to_string(m) + " soni " + to_string(n) + " soniga butun bo'linmaydi!");
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    try
    {
        bolinadimi(m, n);
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
