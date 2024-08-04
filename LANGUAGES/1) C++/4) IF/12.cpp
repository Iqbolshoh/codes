#include <iostream>

using namespace std;

int main()
{
    int a, b, c, min;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    if (a < b and a < c)
    {
        min = a;
    }
    else if (b < a and b < c)
    {
        min = b;
    }
    else if (c < a and c < b)
    {
        min = c;
    }
    cout << " Kichigi = " << min;
    return 0;
}