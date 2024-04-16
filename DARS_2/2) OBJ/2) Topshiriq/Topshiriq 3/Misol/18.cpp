#include <iostream>

using namespace std;

class Universitet
{
private:
    static string nom;
    static int fakultet;
    static int talaba;

public:
    static void Set(int b, int c)
    {
        fakultet = b;
        talaba = c;
    }
    static void Print()
    {
        cout << " 1) Universitet nomi : " << nom << endl;
        cout << " 2) Fakultet soni : " << fakultet << endl;
        cout << " 3) Talabalar soni : " << talaba << endl;
    }
};
string Universitet::nom = "SamDU";
int Universitet::fakultet = 14;
int Universitet::talaba = 28000;

int main()
{
    Universitet::Print();
    Universitet::Set(16, 32000);
    cout << "Malumot almashtirish" << endl;
    Universitet::Print();
    return 0;
}