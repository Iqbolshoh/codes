#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, m;
    cin >> n;
    int a[n];
    float s = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
        {
            s *= m;
        }
        if (a[i] == k)
        {
            s *= k;
        }
    }
    cout << s;
    return 0;
}