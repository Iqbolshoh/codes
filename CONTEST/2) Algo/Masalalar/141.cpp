#include <iostream>

using namespace std;

int main()
{
    int m, n, x, y;
    cin >> m >> n;
    int a[m][n];
    float c = 0, s = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> x >> y;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x <= a[i][j] and a[i][j] <= y)
            {
                s += a[i][j];
                c++;
            }
        }
    }
    printf("%.2f", s / c);
    return 0;
}