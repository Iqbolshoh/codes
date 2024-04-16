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

        if (a[i] < 0)
        {
            s += a[i];
            c++;
        }
    }
    printf("%.2f", s / c);
    return 0;
}