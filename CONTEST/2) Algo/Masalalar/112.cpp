#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    double s = 0, P = 1, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            P *= a[i];
        }

        if (i % 2 == 1)
        {
            s += a[i];
        }
    }
    b = P / s;
    printf("%.2f", b);
    return 0;
}
