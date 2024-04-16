#include <iostream>

using namespace std;

int main()
{
    int m, n, max, min;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j and i == 0)
            {
                max = a[i][j];
            }
            if (i == j and a[i][j] > max)
            {
                max = a[i][j];
            }

            if (i + j == n - 1 and i == 0)
            {
                min = a[i][j];
            }
            if (i + j == n - 1 and min > a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    cout << max << " " << min;
    return 0;
}