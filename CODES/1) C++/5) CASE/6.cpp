#include <iostream>

using namespace std;

int main()
{
   float a, m;
   int n;
   cout << " A = ";
   cin >> a;
   cout << " n = ";
   cin >> n;
   switch (n)
   {
   case 1:
      m = a / 10;
      break;
   case 2:
      m = a * 1000;
      break;
   case 3:
      m = a;
      break;
   case 4:
      m = a / 1000;
      break;
   case 5:
      m = a / 100;
      break;
   }
   cout << m << " Metr ";
   return 0;
}