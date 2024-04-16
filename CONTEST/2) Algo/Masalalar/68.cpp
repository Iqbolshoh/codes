#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    double s = 0;
    for (int i = 1; i <= n; i++)
    {
        int p = 1;
        for (int j = 1; j <= i; j++)
        {
            p = p * j;
        }
        s = s + pow(x, i) * (1.0 / p);
    }
    printf("%.3f", s);

    return 0;
}