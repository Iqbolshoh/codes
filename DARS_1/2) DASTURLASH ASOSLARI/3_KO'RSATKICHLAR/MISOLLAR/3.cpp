#include <iostream>
#include <math.h>

using namespace std;

void func(int a, int b, int c, int *x1, int *x2)
{
    cout << a << "x^2 + " << b << "x + " << c << " = 0 " << endl;
    int D = b * b - 4 * a * c;
    *x1 = (-b + sqrt(D)) / (2 * a);
    *x2 = (-b - sqrt(D)) / (2 * a);
}

int main()
{
    int a, b, c, x1, x2;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    cout << " c = ";
    cin >> c;
    func(a, b, c, &x1, &x2);
    cout << " X1 = " << x1 << endl;
    cout << " X2 = " << x2 << endl;
    return 0;
}