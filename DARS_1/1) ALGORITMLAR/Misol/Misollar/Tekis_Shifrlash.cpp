#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x, c=0;
   char str[64];

   cout << "\n Matnni kiriting: "; cin >> str;

    cout << " \n 1 - Matnni shifrlash. \n";
    cout << " \n 2 - Shifirni matnga qaytarish. \n";
    cout << " \n Tanlang : ";  cin >> x;

   switch(x)
   {

    case 1:

        for(int i = 0; str[i]!='\0'; i++)
        {
            str[i] = str[i]+7;
            c++;
        }
  
        for(int i = c; i < 64; i++)
        {
            str[i] = (str[i-1]+c)%93+33;
        }

        str[63] = c%93+33;

        cout << " \n Shifrlangan matn: " << str <<endl;
        break;

    case 2:

        c = str[63]%93-33;

        for(int i = 0; i<c; i++)
        {
            str[i] = str[i]-7;
        }

        for(int i = c; i < 64; i++)
        {
            str[i] = '\0';
        }

      cout << " \n Shifirni matnga qaytardi: " << str << endl;
      break;

      default:
         cout << " \n 1 yoki 2 ni tanlang! \n ";
   }

   return 0;
}