#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    float s = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            c++;
            s += a[i];
        }
    }
    printf("%.2f", s / c);
    return 0;
}