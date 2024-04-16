#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if (a > 0) a*=a;
    if (b > 0) b*=b;
    if (c > 0) c*=c;
    cout << a << " " << b << " " << c;
    return 0;
}
