#include <iostream>

using namespace std;

class Talaba
{
private:
    static string nom;
    static int kurs;
    static int guruh;

public:
    static void Set(int b, int c)
    {
        kurs = b;
        guruh = c;
    }
    static void Print()
    {
        cout << " 1) Talaba ismi : " << nom << endl;
        cout << " 2) Kurs : " << kurs << endl;
        cout << " 3) Guruh : " << guruh << endl;
    }
};
string Talaba::nom = "Iqbolshoh";
int Talaba::kurs = 2;
int Talaba::guruh = 204;

int main()
{
    Talaba::Print();
    Talaba::Set(3, 304);
    cout << "Malumot almashtirish" << endl;
    Talaba::Print();
    return 0;
}