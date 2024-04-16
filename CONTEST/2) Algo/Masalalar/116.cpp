#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double s = 0, a[n], max;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max < a[i] || i == 0)
            max = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i] /= max;
        printf("%.2f ", a[i]);
    }
    return 0;
}
