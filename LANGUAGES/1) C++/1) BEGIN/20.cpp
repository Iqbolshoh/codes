#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float X1, X2, Y1, Y2, S;
    cout << " X1 = ";
    cin >> X1;
    cout << " X2 = ";
    cin >> X2;
    cout << " Y1 = ";
    cin >> Y1;
    cout << " Y2 = ";
    cin >> Y2;
    S = sqrt(pow((X1 - X2), 2) + pow((Y1 - Y2), 2));
    cout << " MASOFA = " << S;
    return 0;
}