#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    double s = 0, p = 1;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
        s = s + pow(-1, i) * pow(x, i) / p;
    }
    printf("%.3f", s);
    return 0;
}