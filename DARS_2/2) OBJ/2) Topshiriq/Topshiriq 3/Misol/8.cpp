#include <iostream>

using namespace std;

class Shahar
{
private:
    static string nom;
    static int yil;
    static int aholi;

public:
    static void Set(int b, int c)
    {
        yil = b;
        aholi = c;
    }

    static void Print()
    {
        cout << " 1) Shahar nomi : " << nom << endl;
        cout << " 2) Yil : " << yil << endl;
        cout << " 3) Aholi soni : " << aholi << endl;
    }
};

string Shahar::nom = "Samarqand";
int Shahar::yil = 2022;
int Shahar::aholi = 1555000;

int main()
{
    Shahar::Print();
    Shahar::Set(2023, 1775000);
    cout << "Malumot almashtirish" << endl;
    Shahar::Print();
    return 0;
}
