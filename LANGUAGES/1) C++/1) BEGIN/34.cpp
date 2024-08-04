#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y, d;
    cout << " X KG SHOKOLAD = ";
    cin >> x;
    cout << " A SO'MN = ";
    cin >> a;
    cout << " Y KG KOMFET = ";
    cin >> y;
    cout << " B SO'M = ";
    cin >> b;
    d = a / x - b / y;
    cout << " SHOKOLAD KONFETDAN " << d << " SO'M QIMMAT ";
    return 0;
}