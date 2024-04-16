#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    double s = 1, p = 1;
    ;
    for (int i = 1; i <= n; i++)
    {
        p = p * i;
        s = s + pow(-1, i) * pow(k, i) / p;
    }
    printf("%.3f", s);
    return 0;
}