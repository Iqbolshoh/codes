#include <iostream>

using namespace std;

int main()
{
    int a, b, c, i = 0;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    cout << " C = ";
    cin >> c;
    if (a > 0)
    {
        i++;
    }
    if (b > 0)
    {
        i++;
    }
    if (c > 0)
    {
        i++;
    }
    cout << i << " ta musbat";
    return 0;
}