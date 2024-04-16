#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double g = 9.8;
    double h;
    cin >> h;
    double t = sqrt((2 * h) / g);
    printf("%.2f", t);
    return 0;
}
