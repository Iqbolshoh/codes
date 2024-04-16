#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    if (a < b and b < c or c < b and b < a)
    {
        a *= 2;
        b *= 2;
        c *= 2;
    }
    else
    {
        a *= -1;
        b *= -1;
        c *= -1;
    }
    cout << " A = " << a << endl;
    cout << " B = " << b << endl;
    cout << " C = " << c;
    return 0;
}