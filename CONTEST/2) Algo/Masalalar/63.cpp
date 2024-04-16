#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    double s = 0, k = 1;
    for (int i = 1; i <= n; i++)
    {
        int p = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            p = p * j;
        }
        s = s + k * (1.0 / p);
        k = -k;
    }

    printf("%.4f", s);

    return 0;
}