#include <iostream>

using namespace std;

int main()
{
  int n, k = 1;
  cout << " N = ";
  cin >> n;
  while (n > 0)
  {
    k *= n;
    n -= 2;
  }
  cout << " k = " << k;
  return 0;
}