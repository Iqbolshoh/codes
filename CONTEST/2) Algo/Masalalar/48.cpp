#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x, y;
    cin >> x;
    if (x < 0)
    {
        printf("%.2f", -x);
    }
    if (x > 0)
    {
        -printf("%.2f", -x * x);
    }
    return 0;
}