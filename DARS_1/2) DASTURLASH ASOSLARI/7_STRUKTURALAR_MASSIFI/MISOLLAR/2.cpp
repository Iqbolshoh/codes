#include <iostream>

using namespace std;

struct Talaba
{
    int hemisID;
    string nom;
    int yosh;
    string manzil;
};

int main()
{
    Talaba obj[3];

    obj[0].hemisID = 77777;
    obj[0].nom = " Iqbolshoh ";
    obj[0].yosh = 18;
    obj[0].manzil = " Samarqand Tuman ";

    obj[1].hemisID = 12345;
    obj[1].nom = " Olim ";
    obj[1].yosh = 18;
    obj[1].manzil = " Samarqand Shahar ";

    obj[2].hemisID = 11223;
    obj[2].nom = " Davlat ";
    obj[2].yosh = 18;
    obj[2].manzil = " Samarqand Tuman ";

    int n, c = 0;
    cout << " HemisID ni kiriting = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (obj[i].hemisID == n)
        {
            cout << " Talaba Nomi: " << obj[i].nom << endl;
            cout << " Talaba Yoshi: " << obj[i].yosh << endl;
            cout << " Talaba Manzili: " << obj[i].manzil << endl;
            c++;
        }
    }
    if (c == 0)
    {
        cout << " Bunday Talaba mavjud emas " << endl;
    }

    return 0;
}