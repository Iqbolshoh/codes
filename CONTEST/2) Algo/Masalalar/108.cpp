#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    float s = 0, min;
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
        s = a[i] / min;
        printf("%.2f", s);
        cout << " ";
    }
    return 0;
}