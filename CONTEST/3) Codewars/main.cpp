#include <iostream>

using namespace std;

float Max(float x, float y) { return (x > y) ? x : y; }
float Min(float x, float y) { return (x < y) ? x : y; }

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max = Max(Max(a, b), c);
    int min = Min(Min(a, b), c);
    int middle = a + b + c - (max + min);
    cout << min << " " << middle << " " << max << endl;

    return 0;
}
