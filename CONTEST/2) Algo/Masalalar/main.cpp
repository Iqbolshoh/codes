#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    double result = (pow(x, 2) + 1) / (pow(x, 2) + x * y + pow(y, 2) / (pow(y, 2) + abs(x * y) + 5)) +
                    1 / (1 + cos(x) + 1 / (1 + sin(abs(x))));

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
