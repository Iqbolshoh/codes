#include <iostream>

using namespace std;

int main()
{
     int n, f = 1, k = 0;
     cout << " N = ";
     cin >> n;
     while (n >= f)
     {
          f *= 3;
          k++;
     }
     cout << " K = " << k;
     return 0;
}