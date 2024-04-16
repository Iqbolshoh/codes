#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z, x1, y1;
    cin >> x >> y >> z;
    x1 = max(max(max(x, y), z), x + y + z);
    y1 = pow(min(min(min(x, y), z), x + y / 2), 2);

    printf("%.2f", x1);
    cout << "  ";
    printf("%.2f", y1);

    return 0;
}