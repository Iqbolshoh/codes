#include <iostream>

using namespace std;

class Viloyat
{
private:
    static string nom;
    static int maydoni;
    static int aholi;

public:
    static void Set(int b, int c)
    {
        maydoni = b;
        aholi = c;
    }

    static void Print()
    {
        cout << " 1) Viloyat nomi : " << nom << endl;
        cout << " 2) Maydoni : " << maydoni << "km kv" << endl;
        cout << " 3) Aholi soni : " << aholi << endl;
    }
};

string Viloyat::nom = "Samarqand";
int Viloyat::maydoni = 120;
int Viloyat::aholi = 1750000;

int main()
{
    Viloyat::Print();
    Viloyat::Set(150, 2200000);
    cout << "Malumot almashtirish" << endl;
    Viloyat::Print();
    return 0;
}
