#include <iostream>
#include <math.h>

using namespace std;

void func(int a, int b, int *x1, int *x2, int *x3)
{
    *x1 = 0;
    *x2 = sqrt(-b / (a * a));
    *x3 = sqrt(+b / (a * a));
}

int main()
{
    int a, b, x1, x2, x3;
    cout << " a  = ";
    cin >> a;
    cout << " b  = ";
    cin >> b;
    func(a, b, &x1, &x2, &x3);
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "x3 = " << x3 << endl;
    return 0;
}