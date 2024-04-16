#include <iostream>

using namespace std;

class Fakultet
{
private:
    static string nom;
    static int oqituvchi;
    static int talaba;

public:
    static void Set(int b, int c)
    {
        oqituvchi = b;
        talaba = c;
    }
    static void Print()
    {
        cout << " 1) Fakultet nomi : " << nom << endl;
        cout << " 2) O'qituvchilar soni : " << oqituvchi << endl;
        cout << " 3) Talabalar soni : " << talaba << endl;
    }
};
string Fakultet::nom = "Intelektular tizimlar";
int Fakultet::oqituvchi = 77;
int Fakultet::talaba = 1300;

int main()
{
    Fakultet::Print();
    Fakultet::Set(88, 1200);
    cout << "Malumot almashtirish" << endl;
    Fakultet::Print();
    return 0;
}