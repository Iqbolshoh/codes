#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a, b;
  cout << " a = ";
  cin >> a;
  cout << " b = ";
  cin >> b;
  switch (a)
  {
  case 1:
    cout << " g'isht ";
    break;
  case 2:
    cout << " olma ";
    break;
  case 3:
    cout << " chillak";
    break;
  case 4:
    cout << " qarg'a ";
    break;
  }
  switch (b)
  {
  case 11:
    cout << " valet ";
    break;
  case 12:
    cout << " dama ";
    break;
  case 13:
    cout << " qirol";
    break;
  case 14:
    cout << " tuz ";
    break;
  default:
    cout << " Bunday karta yuq ";
    break;
  }
  return 0;
}