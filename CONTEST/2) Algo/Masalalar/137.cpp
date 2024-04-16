#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> n;
    int a[n][n];
    float s = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % m == 0)
            {
                s += a[i][j];
                c++;
            }
        }
    }
    printf("%.2f", s / c);
    return 0;
}