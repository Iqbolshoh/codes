#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, i = 1;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    cout << " D = ";
    cin >> d;

    if (a == c and c == d)
    {
        i = 2;
    }
    if (a == b and b == d)
    {
        i = 3;
    }
    if (a == b and b == c)
    {
        i = 4;
    }

    cout << i << " - son bitta";
    return 0;
}