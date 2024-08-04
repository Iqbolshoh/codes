#include <iostream>

using namespace std;

int main()
{
  int n, r;
  cout << " N = ";
  cin >> n;
  cout << " R = ";
  cin >> r;
  switch (n)
  {
  case 1:
    cout << r;
    break;
  case 2:
    cout << " deametr = " << 2 * r;
    break;
  case 3:
    cout << " uzunligi = " << 2 * 3.14 * r;
    break;
  case 4:
    cout << " doiranig yuzi = " << 3.14 * r * r;
    break;
  default:
    cout << " Bunday uzunlik  yuq ";
    break;
  }
  return 0;
}