#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, ac, bc;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    ac = abs(c - a);
    bc = abs(c - b);
    d = ac + bc;
    cout << " AC kesma = " << ac << endl;
    cout << " BC kesma = " << bc << endl;
    cout << " YIGINDI = " << d;
    return 0;
}