#include <iostream>

using namespace std;

int main()
{
    float S = 0, p;
    cin >> S >> p;
    int c = 0;
    float summa = S * 2;
    while (S < summa)
    {
        S += S * p / 100;
        cout << S << endl;
        c++;
    }
    cout << c << " oy " << endl;
    cout << S << " summa " << endl;
    return 0;
}