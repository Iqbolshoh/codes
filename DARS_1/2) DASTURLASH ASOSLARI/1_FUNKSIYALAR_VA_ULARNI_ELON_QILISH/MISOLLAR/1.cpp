#include <iostream>

using namespace std;

float func(int i)
{
    int a, b;
    cout << " a" << i << " = ";
    cin >> a;
    cout << " b" << i << " = ";
    cin >> b;
    float yuza = a * b / 2;
    return yuza;
}

int main()
{
    float max = 0, yuza, c = 0;
    for (int i = 1; i <= 3; i++)
    {
        yuza = func(i);
        if (max < yuza)
        {
            max = yuza;
            c = i;
        }
    }
    cout << c << " - uchburchak katta ";
    return 0;
}