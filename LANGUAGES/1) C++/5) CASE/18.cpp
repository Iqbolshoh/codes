#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
    cout << n << " - ";
    switch (n / 100)
    {
    case 1:
        cout << " bir yuz ";
        break;
    case 2:
        cout << " ikki yuz ";
        break;
    case 3:
        cout << " uch yuz ";
        break;
    case 4:
        cout << " to'rt yuz ";
        break;
    case 5:
        cout << " besh yuz ";
        break;
    case 6:
        cout << " olti yuz ";
        break;
    case 7:
        cout << " yetti yuz ";
        break;
    case 8:
        cout << " sakkiz yuz ";
        break;
    case 9:
        cout << " to'qqiz yuz ";
    }
    switch (n / 10 % 10)
    {
    case 1:
        cout << " on ";
        break;
    case 2:
        cout << " yigirma ";
        break;
    case 3:
        cout << " o'ttiz ";
        break;
    case 4:
        cout << " qirq ";
        break;
    case 5:
        cout << " ellik ";
        break;
    case 6:
        cout << " oltmish ";
        break;
    case 7:
        cout << " yetmish ";
        break;
    case 8:
        cout << " sakson";
        break;
    case 9:
        cout << " to'qson ";
        break;
    }
    switch (n % 10)
    {
    case 1:
        cout << " bir ";
    case 2:
        cout << " ikki ";
        break;
    case 3:
        cout << " uch ";
        break;
    case 4:
        cout << " to'rt ";
        break;
    case 5:
        cout << " besh ";
        break;
    case 6:
        cout << " olti ";
        break;
    case 7:
        cout << " yetti ";
        break;
    case 8:
        cout << " sakkiz ";
        break;
    case 9:
        cout << " to'qqiz ";
        break;
    }

    return 0;
}