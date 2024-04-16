#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    float b[n], s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 1)
        {
            s += a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            b[i] = a[i] / s;
        }
        else
        {
            b[i] = a[i];
        }
        printf("%.2f", b[i]);
        cout << " ";
    }
    return 0;
}