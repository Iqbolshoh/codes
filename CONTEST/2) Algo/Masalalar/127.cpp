#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], min;
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            min = a[0];
        }
        if (min > a[i])
        {
            min = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = pow(min, 2);
        }
        cout << a[i] << " ";
    }
    return 0;
}