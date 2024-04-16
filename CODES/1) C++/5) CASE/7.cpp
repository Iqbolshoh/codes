#include <iostream>

using namespace std;

int main()
{
   float a, kg;
   int n;
   cout << " A = ";
   cin >> a;
   cout << " n = ";
   cin >> n;
   switch (n)
   {
   case 1:
      kg = a;
      break;
   case 2:
      kg = a / 1000000;
      break;
   case 3:
      kg = a / 1000;
      break;
   case 4:
      kg = a * 1000;
      break;
   case 5:
      kg = a * 100;
      break;
   }
   cout << kg << " Kg ";

   return 0;
}