#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    b = abs(a - b);
    c = abs(a - c);
    if (b > c)
    {
        cout << " A ga C yaqin = " << c;
    }
    if (b < c)
    {
        cout << " A ga B yaqin = " << b;
    }
    return 0;
}