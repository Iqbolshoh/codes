#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double y = 0;
    double i = -1;
    while (i <= 1)
    {
        y += (pow(sin(a * i), 2) + pow(b, c)) / (pow(b, 2) + pow(cos(i), 2)) - sin(pow(i, 2)) / (a * b);
        i += 0.25;
    }
    cout << fixed << setprecision(2) << y << endl;
    return 0;
}
