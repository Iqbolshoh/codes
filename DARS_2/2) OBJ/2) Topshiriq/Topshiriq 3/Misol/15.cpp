#include <iostream>

using namespace std;

class Telefon
{
private:
    static string nomi;
    static string brendi;
    static int narxi;

public:
    static void Set(string b, int c)
    {
        nomi = b;
        narxi = c;
    }
    static void Print()
    {
        cout << " 1) Telefon nomi : " << nomi << endl;
        cout << " 2) Brendi : " << brendi << endl;
        cout << " 3) Narxi : " << narxi << "$" << endl;
    }
};
string Telefon::nomi = "14 pro max";
string Telefon::brendi = "Apple";
int Telefon::narxi = 1300;

int main()
{
    Telefon::Print();
    Telefon::Set("13 pro", 450);
    cout << "Malumot almashtirish" << endl;
    Telefon::Print();
    return 0;
}