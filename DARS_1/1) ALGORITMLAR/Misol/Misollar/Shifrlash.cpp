#include <iostream>

using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << " Matnni kiriting: ";
   cin >> str;

   cout << " 1 - Matnni shifrlash. \n";
   cout << " 2 - Shifirni matnga qaytarish. \n"; cin >> x;

   switch(x)
   {

    case 1:
        for(i = 0; i < 100; i++)
        {
            if(str[i] >= 33 and str[i] <= 126){
                str[i] += i*i%2+7;
            }
        }
        cout << " \n Shifrlangan matn: " << str << endl;
        break;

    case 2:
         for(i = 0; i < 100; i++)
         {
            if(str[i] >= 33 and str[i] <= 126){
                str[i] -= i*i%2+7;
            }
         }
      cout << " \n Shifirni matnga qaytarish: " << str << endl;
      break;

      default:
         cout << " \n 1 yoki 2 ni tanlang! \n ";
   }

   return 0;
}