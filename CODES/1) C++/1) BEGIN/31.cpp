#include <iostream>

using namespace std;

int main()
{
    float Tf, Tc;
    cout << " F = ";
    cin >> Tf;
    Tc = (Tf - 32) * 5 / 9;
    cout << " C = " << Tc;
    return 0;
}