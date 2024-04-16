#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (c <= b and b <= a) cout << 2 * a << " " << 2 * b << " " << 2 * c;
    else cout << abs(a) << " " << abs(b) << " " << abs(c);
    return 0;
}

