#include <iostream>

using namespace std;

int main()
{
    int a, x, y, b, c;
    cout << " X KG KONFET = ";
    cin >> x;
    cout << " A SO'M = ";
    cin >> a;
    cout << " Y KG KOMFET = ";
    cin >> y;
    b = a / x;
    c = b * y;
    cout << " 1 KG NARXI = " << b << endl;
    cout << y << " KG NARXI = " << c;
    return 0;
}