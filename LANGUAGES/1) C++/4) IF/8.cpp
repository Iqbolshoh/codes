#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
    cout << " Katta = " << a << endl;
    cout << " Kichik = " << b;
    return 0;
}