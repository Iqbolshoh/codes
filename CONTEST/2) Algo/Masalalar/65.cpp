#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    double s = 0, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1 * i / pow(x, 2 * i);
    }
    printf("%.3f", s);
    return 0;
}
