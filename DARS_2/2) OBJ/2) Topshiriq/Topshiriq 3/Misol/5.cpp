#include <iostream>

using namespace std;

class Kutubxona
{
private:
    static string nom;
    static int xodim;
    static int kitob;

public:
    static void Set(int b, int c)
    {
        xodim = b;
        kitob = c;
    }

    static void Print()
    {
        cout << " 1) Kutubxona nomi : " << nom << endl;
        cout << " 2) Xodimlar soni : " << xodim << endl;
        cout << " 3) Kitoblar soni : " << kitob << endl;
    }
};

string Kutubxona::nom = "Milliy kutubxona";
int Kutubxona::xodim = 9;
int Kutubxona::kitob = 3751;

int main()
{
    Kutubxona::Print();
    Kutubxona::Set(11, 4200);
    cout << "Malumot almashtirish" << endl;
    Kutubxona::Print();
    return 0;
}
