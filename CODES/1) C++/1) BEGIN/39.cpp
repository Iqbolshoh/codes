#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, D;
    float x1, x2;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    D = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    cout << " X1 = " << x1 << endl;
    cout << " X2 = " << x2;
    return 0;
}