#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n], x, y;
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = m; i < n; i++)
    {
        s += a[i];
    }
    cout << s;
    return 0;
}