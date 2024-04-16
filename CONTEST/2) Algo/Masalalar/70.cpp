#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double x;
    cin >> n >> x;

    double S = 0;
    double f = 1;

    for (int i = 1; i <= n; i++)
    {
        S += pow(-1, i - 1) * pow(x, 2 * i - 1) / f;
        f *= (2 * i) * (2 * i - 1);
    }

    printf("%.3f", S);

    return 0;
}
