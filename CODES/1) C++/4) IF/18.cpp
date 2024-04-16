#include <iostream>

using namespace std;

int main()
{
  int a, b, c, i = 1;
  cout << " A = ";
  cin >> a;
  cout << " B = ";
  cin >> b;
  cout << " C = ";
  cin >> c;
  if (a == c)
  {
    i++;
  }
  if (a == b)
  {
    i += 2;
  }
  cout << i << " - son bitta";
  return 0;
}