#include <iostream>
#include <math.h>

using namespace std;

float func(float a)
{
    return pow(a, 3);
}

int main()
{
    float a;
    cin >> a;
    cout << func(a);
    return 0;
}