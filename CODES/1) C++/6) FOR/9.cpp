#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, s = 0;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        s += pow(i, 2);
    }
    cout << " Kvadratlari yigindisi = " << s;
    return 0;
}