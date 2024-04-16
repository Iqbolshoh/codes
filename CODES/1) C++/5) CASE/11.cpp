#include <iostream>

using namespace std;

int main()
{
    int k1, k2, C = 0;
    cout << " K1 = ";
    cin >> k1;
    cout << " K2 = ";
    cin >> k2;

    switch (k1)
    {
    case 0:
        C += 90;
        break;
    case 1:
        C -= 90;
        break;
    case 2:
        C += 180;
        break;
    }

    switch (k2)
    {
    case 0:
        C += 90;
        break;
    case 1:
        C -= 90;
        break;
    case 2:
        C += 180;
        break;
    }

    switch (C)
    {
    case 360:
        cout << " O'zgarmadi ";
    case -180:
    case 180:
        cout << " Teskarisiga o'girildi ";
        break;
    case -90:
        cout << " Chapga burildi ";
        break;
    case 90:
        cout << " O'ngga burildi ";
        break;
    }
    return 0;
}