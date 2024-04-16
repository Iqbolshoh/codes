#include <iostream>
#include <math.h>

using namespace std;

int func(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int k, n, c;
    cout << " K = ";
    cin >> k;
    cout << " N = ";
    cin >> n;
    for (int i = 0; i < k; i++)
    {
        c = func(i);
        if (pow(c, n) == i)
        {
            cout <<i << " soni Armstrong son " <<endl;
        }
    }
    return 0;
}