#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x;
    cin >> x;
    if (abs(abs(x) - 1) >= 0)
    {
        printf("%.2f", abs(abs(x) - 1));
    }
    return 0;
}