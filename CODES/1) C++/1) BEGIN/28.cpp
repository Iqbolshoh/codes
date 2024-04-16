#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cout << " a = ";
    cin >> a;
    b = pow(a, 2);
    c = pow(a, 3);
    d = pow(a, 5);
    e = pow(a, 10);
    f = pow(a, 15);
    cout << " a ^ 2 = " << b << endl;
    cout << " a ^ 3 = " << c << endl;
    cout << " a ^ 5 = " << d << endl;
    cout << " a ^ 10 = " << e << endl;
    cout << " a ^ 15 = " << f << endl;
    return 0;
}