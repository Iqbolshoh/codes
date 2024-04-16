#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n], b[n][n], c[n][2 * n];
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
            cin >> b[i][j];
            c[i][j] = a[i][j];
            c[i][n + j] = b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n * 2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}