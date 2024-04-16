#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x, y;
    cin >> x >> y;
    if (x < 0 and y < 0)
    {
        x = abs(x);
        y = abs(y);
    }
    if (x < 0 or y < 0)
    {
        x += 0.5;
        y += 0.5;
    }
    cout << x << " " << y;
    return 0;
}
