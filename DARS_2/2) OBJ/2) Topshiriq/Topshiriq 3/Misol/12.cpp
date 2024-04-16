#include <iostream>

using namespace std;

class Shifoxona
{
private:
    static string nom;
    static int xodim;
    static int bemor;

public:
    static void Set(int b, int c)
    {
        xodim = b;
        bemor = c;
    }
    static void Print()
    {
        cout << " 1) Shifoxona nomi : " << nom << endl;
        cout << " 2) Xodim soni : " << xodim << endl;
        cout << " 3) Bemor soni : " << bemor  << endl;
    }
};
string Shifoxona::nom = "Markaziy shifoxona";
int Shifoxona::xodim = 55;
int Shifoxona::bemor = 257;

int main()
{
    Shifoxona::Print();
    Shifoxona::Set(77, 354);
    cout << "Malumot almashtirish" << endl;
    Shifoxona::Print();
    return 0;
}