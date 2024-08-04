#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " Kattasi = ";
    if (a > b)
    {
        cout << a;
    }
    else if (a < b)
    {
        cout << b;
    }
    return 0;
}