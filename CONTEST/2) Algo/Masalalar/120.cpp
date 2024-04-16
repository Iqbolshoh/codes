#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    int a[n], x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x >> y;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x and a[i] <= y)
        {
            c++;
        }
    }
    cout << n - c;
    return 0;
}