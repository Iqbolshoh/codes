#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double F = (x + y) / (y * y + abs((y * y + 2) / (x + (x * x * x / 5)))) + exp(y + 2);
    printf("%.2f", F);
    return 0;
}
