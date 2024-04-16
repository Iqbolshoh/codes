#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
    cout << n << " - ";
    switch (n / 10)
    {
    case 1:
        cout << " o'n ";
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