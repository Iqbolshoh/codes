#include <iostream>

using namespace std;

int main()
{
    int X1, X2, Y1, Y2, P, S;
    cout << " X1 = ";
    cin >> X1;
    cout << " X2 = ";
    cin >> X2;
    cout << " Y1 = ";
    cin >> Y1;
    cout << " Y2 = ";
    cin >> Y2;
    P = 2 * (abs(X2 - X1) + abs(Y2 - Y1));
    S = abs(X2 - X1) * abs(Y2 - Y1);
    cout << " PERIMETR = " << P << endl;
    cout << " YUZA = " << S;
    return 0;
}