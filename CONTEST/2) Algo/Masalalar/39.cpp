#include <iostream>

using namespace std;

int main()
{
    float x, y, x1, y1;
    cin >> x >> y;
    if (x < y)
    {
        x1 = (x + y) / 2;
        y1 = x * y * 4;
    }
    else
    {
        x1 = x * y * 4;
        y1 = (x + y) / 2;
    }
    printf("%.1f", x1); 
    cout << " ";
    printf("%.1f", y1);
    return 0;
}
