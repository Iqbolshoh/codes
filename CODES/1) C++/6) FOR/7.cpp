#include <iostream>

using namespace std;

int main()
{
    int a, b, s = 0;
    cout << " A = ";
    cin >> a;
    cout << " B = ";
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        s += i;
    }
    cout << " Yigindi = " << s;
    return 0;
}