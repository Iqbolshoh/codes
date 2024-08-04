#include <iostream>

using namespace std;

int main()
{
  int b, a;
  cin >> a;
  cin >> b;
  switch (a)
  {
  case 1:
    cout << " shimol " << endl;
    break;
  case 2:
    cout << " janub " << endl;
    break;
  case 3:
    cout << " sharq " << endl;
    break;
  case 4:
    cout << " g'arb " << endl;
    break;
  }

  switch (b)
  { 
  case 0:
    cout << " harakatni davom ";
    break;
  case 1:
    cout << " o'nga buril ";
    break;
  case 2:
    cout << " chapga buril ";
    break;
  default:
    cout << " Bunday tamon yuq ";
    break;
  }
  return 0;
}