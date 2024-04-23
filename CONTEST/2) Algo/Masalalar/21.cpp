#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    double result = pow(a, 1.0 / 5) + pow(b * (a + b) / (2 * b + a * b), 1.0 / 4) * (pow(a, 2) + pow(b, 2) + 2);

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
