#include <bits/stdc++.h>

using namespace std;

int main()
{
    string d = "Real_Madrid", s1, s2;
    int a, b, c;
    cin >> s1 >> s2 >> a >> b >> c;

    if (a > b and s1 == d)
    {
        cout << a + 10 + c;
    }
    else if (a == b and s1 == d)
    {
        cout << a + 5 + c;
    }
    else if (a < b and s1 == d)
    {
        cout << a + 2 + c;
    }
    else if (b > a and s2 == d)
    {
        cout << b + 10;
    }
    else if (a > b and s2 == d)
    {
        cout << b + 2;
    }
    else if (a == b and s2 == d)
    {
        cout << b + 5;
    }
    else
    {
        cout << 0;
    }
    return 0;
}