#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    if (0.25 <= x * x + y * y and x * x + y * y <= 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}