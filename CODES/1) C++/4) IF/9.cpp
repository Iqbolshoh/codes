#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    if (a > b)
    {
        c = b;
        b = a;
        a = c;
    }
    cout << " A = " << a << endl;
    cout << " B = " << b;
    return 0;
}