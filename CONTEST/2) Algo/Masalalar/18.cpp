#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(2) << (1 / (x + 2 / (x * x) + 3 / (x * x * x)) + exp(x * x + 3 * x)) / (atan(x + y) + pow(fabs(5 + x), 2)) - pow(cos(y * y + x * x / 2), 2) << endl;
    return 0;
}