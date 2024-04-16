#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    float a1 = a , b1 = b, c1 = c;
    if (a < 1 and b < 1 and c < 1)
    {
        if (a < b and a < c) a1 = (b + c) / 2;
        if (b < c and b < a) b1 = (a + c) / 2;
        if (c < a and c < b) c1 = (a + b) / 2;
    }
    cout << a1 << " " << b1 << " " << c1;
    return 0;
}
