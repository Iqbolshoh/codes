#include <iostream>

using namespace std;

int main()
{
    int a, b, k = 1;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        k *= i;
    }
    cout << " Ko'paytma = " << k;
    return 0;
}