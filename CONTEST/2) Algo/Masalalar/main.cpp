#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateS(double x, int n)
{
    double result = 0.0;
    for (int i = 0; i < n; ++i)
    {
        int factorial = 1;
        for (int j = 1; j <= 2 * i + 1; ++j)
            factorial *= j;
        result += pow(-1, i) * pow(x, 2 * i + 1) / factorial;
    }
    return result;
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << fixed << setprecision(3) << calculateS(x, n) << endl;

    return 0;
}
