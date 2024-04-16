#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0 or a[i] % 3 == 0 or a[i] % 5 == 0)
        {
            s += a[i];
        }
    }
    cout << s;
    return 0;
}