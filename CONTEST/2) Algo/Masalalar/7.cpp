#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double h, r, V;
    cin >> h >> r;
    V = (1.0 / 3.0) * M_PI * pow(r, 2) * h;
    printf("%.2f", V);
    return 0;
}
