#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float radius;
    cin >> radius;
    float yuzi = M_PI * 4 * pow(radius, 2);
    printf("%.2f", yuzi);
    return 0;
}
