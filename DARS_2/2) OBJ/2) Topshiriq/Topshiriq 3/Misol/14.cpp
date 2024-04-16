#include <iostream>

using namespace std;

class Soat
{
private:
    static string turi;
    static string brendi;
    static int narxi;

public:
    static void Set(string b, int c)
    {
        brendi = b;
        narxi = c;
    }
    static void Print()
    {
        cout << " 1) Soat turi : " << turi << endl;
        cout << " 2) Brendi : " << brendi << endl;
        cout << " 3) Narxi : " << narxi << "$" << endl;
    }
};
string Soat::turi = "Qo'l soat";
string Soat::brendi = "Jacob & co";
int Soat::narxi = 150000;

int main()
{
    Soat::Print();
    Soat::Set("Electron", 354);
    cout << "Malumot almashtirish" << endl;
    Soat::Print();
    return 0;
}