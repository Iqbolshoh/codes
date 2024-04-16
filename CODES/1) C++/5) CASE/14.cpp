#include <iostream>
#include <math.h>

using namespace std;
int main()
{
  float r, a, R;
  int S, n;
  cout << " a = ";
  cin >> a;
  cout << " n = ";
  cin >> n;
  r = a * sqrt(3) / 6;
  switch (n)
  {
  case 1:
    cout << " Tomon = " << a;
    break;
  case 2:
    cout << " ichki r =  " << r;
    break;
  case 3:
    cout << " Tashqi R = " << 2 * r;
    break;
  case 4:
    cout << " yuzasi =  " << pow(a, 2) * sqrt(3) / 4;
    break;
  default:
    cout << " Bunday javob yuq ";
    break;
  }
  return 0;
}