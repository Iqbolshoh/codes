#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(2) << log(abs(pow(x + y, 2) + sqrt(abs(y) + 2) - (x - (x * y) / ((pow(x, 2) / 2) - 5)))) + (pow(cos(x + y), 2) / pow(x + y, 1.0 / 3)) << endl;

    return 0;
}
