#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float X1, X2, X3, Y1, Y2, Y3, a, b, c, P, S;
    cout << " X1 = ";
    cin >> X1;
    cout << " Y1 = ";
    cin >> Y1;
    cout << " X2 = ";
    cin >> X2;
    cout << " Y2 = ";
    cin >> Y2;
    cout << " X3 = ";
    cin >> X3;
    cout << " Y3 = ";
    cin >> Y3;
    a = sqrt(pow((X1 - X2), 2) + pow((Y1 - Y2), 2));
    b = sqrt(pow((X2 - X3), 2) + pow((Y2 - X3), 2));
    c = sqrt(pow((X3 - X1), 2) + pow((Y3 - Y1), 2));
    P = (a + b + c) / 2;
    S = sqrt(P * (P - a) * (P - b) * (P - c));
    cout << " PERIMETR = " << P << endl;
    cout << " YUZA = " << S;
    return 0;
}