#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float L, R, S;
    cout << " L = ";
    cin >> L;
    R = L / 2 / M_PI;
    S = M_PI * pow(R, 2);
    cout << " RADIUS = " << R << endl;
    cout << " YUZA = " << S << endl;
    return 0;
}