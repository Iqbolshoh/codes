#include <iostream>

using namespace std;

int main()
{
    char jins;
    cout << "O'g'il bolamisiz yoki qiz bola? (X/Y) ";
    cin >> jins;

    try
    {
        if (jins == 'X' || jins == 'x')
        {
            cout << "Menga o'g'il bolalar yoqadi!" << endl;
        }
        else if (jins == 'Y' || jins == 'y')
        {
            cout << "Menga qiz bolalar yoqadi!" << endl;
        }
        else
        {
            throw char("Noto'g'ri javob kiritildi!");
        }
    }
    catch (const char *e)
    {
        cout << "Xato: " << e << endl;
    }

    return 0;
}
