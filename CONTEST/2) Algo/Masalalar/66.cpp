#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double s = 0, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        s = s + pow(-1, i - 1) * 1 / i * sin(i * x);
    }
    printf("%.3f", s);
    return 0;
}