#include <iostream>

using namespace std;

int main()
{
   int D, M, k;
   string oy;
   cout << " Kun = ";
   cin >> D;
   cout << " Oy = ";
   cin >> M;

   switch (M)
   {
   case 1:
      oy = " Yanvar ";
      break;
   case 2:
      oy = " Fevral ";
      break;
   case 3:
      oy = " Mart ";
      break;
   case 4:
      oy = " Aprel ";
      break;
   case 5:
      oy = " May ";
      break;
   case 6:
      oy = " Iyun ";
      break;
   case 7:
      oy = " Iyul ";
      break;
   case 8:
      oy = " Avgust ";
      break;
   case 9:
      oy = " Sentyabr ";
      break;
   case 10:
      oy = " Oktyabr ";
      break;
   case 11:
      oy = " Noyabr ";
      break;
   case 12:
      oy = " Dekabr ";
      break;
   default:
      cout << " Bunday oy yuq";
      break;
   }
   cout << D << " - " << oy;
   return 0;
}