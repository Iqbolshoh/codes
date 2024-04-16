#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    double F = (2 * tan(x + M_PI / 6)) / (1.0 / 3 + pow(cos(y + pow(x, 2)), 2)) + log2(pow(x, 2) + 2);

    printf("%.2f", F);

    return 0;
}
