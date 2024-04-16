#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, d;
    cout << " a = ";
    cin >> a;
    b = pow(a, 2);
    c = pow(a, 4);
    d = pow(a, 8);
    cout << " a ^ 2 = " << b << endl;
    cout << " a ^ 4 = " << c << endl;
    cout << " a ^ 8 = " << d;
    return 0;
}