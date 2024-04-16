#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double s = 0, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        s += pow(x, i * 2 - 1) / (i * 2 - 1);
    }
    printf("%.3f", s);
    return 0;
}