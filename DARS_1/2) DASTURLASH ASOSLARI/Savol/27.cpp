#include <iostream>

using namespace std;

float func(float a, int b)
{
    float daraja = 1;
    for (int i = 0; i < b; i++)
    {
        daraja = daraja * a;
    }
    return daraja;
}

int main()
{
    float a, b;
    cin >> a >> b;
    cout << func(a, b) << endl;
    return 0;
}