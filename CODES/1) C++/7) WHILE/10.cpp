#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     int n, k = 0;
     cout << " N = ";
     cin >> n;
     while (pow(3, k + 1) <= n)
     {
          k++;
     }
     cout << " k = " << k;
     return 0;
}