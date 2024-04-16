#include <iostream>

using namespace std;

class Maktab
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
        cout << " 1) Maktab nomi : " << nom << endl;
        cout << " 2) O'qituvchilar soni : " << oqituvchi << endl;
        cout << " 3) Talabalar soni : " << talaba << endl;
    }
};
string Maktab::nom = "33-Maktab";
int Maktab::oqituvchi = 77;
int Maktab::talaba = 1300;

int main()
{
    Maktab::Print();
    Maktab::Set(88, 1400);
    cout << "Malumot almashtirish" << endl;
    Maktab::Print();
    return 0;
}