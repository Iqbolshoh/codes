#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long int a[n];
    double s = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0 or a[i] % 5 == 0)
        {
            s *= a[i];
        }
    }
    printf("%.2f", sin(s));
    return 0;
}