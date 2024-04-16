#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a, n;
  float c, h;
  cout << " a  = ";
  cin >> a;
  cout << " n = ";
  cin >> n;
  c = a * sqrt(2);
  h = c / 2;
  switch (n)
  {
  case 1:
    cout << " katet = " << a;
    break;
  case 2:
    cout << " gepatnuza = " << c;
    break;
  case 3:
    cout << " gepatunazagdan tushirilgan balandlik = " << h;
    break;
  case 4:
    cout << " yuzasi = " << c * h / 2;
    break;
  default:
    cout << " Bunday uzunlik yuq ";
    break;
  }
  return 0;
}