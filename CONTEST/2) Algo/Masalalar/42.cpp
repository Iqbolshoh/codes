#include <iostream>

using namespace std;

int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a <= b and b <= c and c <= d)
    {
        a = max(max(a, b), max(c, d));
        b = a;
        c = a;
        d = a;
    }
    else
    {
        a = min(min(a, b), min(c, d));
        b = a;
        c = a;
        d = a;
    }
    cout << a << " " << b << " " << c << " " << d;
    return 0;
}
