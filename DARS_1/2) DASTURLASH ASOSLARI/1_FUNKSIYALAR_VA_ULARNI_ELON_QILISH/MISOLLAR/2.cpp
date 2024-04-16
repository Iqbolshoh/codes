#include <iostream>
#include <math.h>

using namespace std;

float func(int i)
{
    int R;
    cout << " R" << i << " = ";
    cin >> R;
    float yuza = 3.14 * pow(R, 2);
    return yuza;
}

int main()
{
    int n, c = 0;
    cout << " Uchburcha soni = ";
    cin >> n;
    float max = 0;
    for (int i = 1; i <= n; i++)
    {
        float yuza = func(i);
        if (max < yuza)
        {
            max = yuza;
            c = i;
        }
    }

    cout << c << " - Doira katta yuzali ";
    return 0;
}