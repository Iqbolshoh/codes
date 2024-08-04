#include <iostream>

using namespace std;

int main()
{
  int a, b;

  cout << "A = ";
  cin >> a;
  cout << "B = ";
  cin >> b;

  while (a != b)
  {
    if (a > b)
      a %= b;
    else
      b %= a;

    if (a == 0)
      a = b;
    if (b == 0)
      b = a;
  }

  cout << a << endl;

  return 0;
}