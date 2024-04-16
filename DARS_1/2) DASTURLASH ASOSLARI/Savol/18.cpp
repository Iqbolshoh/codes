#include <iostream>

using namespace std;

int func(float a)
{
    int n;
    n = a;
    if (n + 0.5 <= a)
    {
        n++;
    }
    return n;
}

int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    cout << func(a) << endl;
    cout << func(b) << endl;
    cout << func(c) << endl;
    return 0;
}