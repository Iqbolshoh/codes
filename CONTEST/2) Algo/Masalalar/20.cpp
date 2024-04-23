#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    double result = (x * x + 1) / (x * x + (x * y + y * y) / (y * y + (y + x * y) / (fabs(x * y) + 5))) +
                    1 / (1 + cos(x) + 1 / sin(fabs(x)));

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
