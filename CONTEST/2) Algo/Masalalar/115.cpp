#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    int a[n];
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < m)
        {
            s += pow(a[i], 2);
        }
    }
    cout << s;
    return 0;
}
