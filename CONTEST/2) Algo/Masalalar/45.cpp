#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, D, x1, x2;
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        printf("%.2f  %.2f", x1, x2);
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        printf("%.2f  %.2f", x1, x1);
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
