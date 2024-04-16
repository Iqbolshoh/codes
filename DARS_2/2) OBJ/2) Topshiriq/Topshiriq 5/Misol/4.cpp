#include <iostream>
#include <string>

using namespace std;

class MaktabSinfi
{
private:
    string Maktab;
    int bolalar;
    int oqituvchilar;

public:
    MaktabSinfi(string maktab, int bolalar, int oqituvchilar) : Maktab(maktab), bolalar(bolalar), oqituvchilar(oqituvchilar) {}

    string getMaktabNomi() const
    {
        return Maktab;
    }

    int getBolalarSoni() const
    {
        return bolalar;
    }

    int getOqituvchilarSoni() const
    {
        return oqituvchilar;
    }
};

int main()
{
    MaktabSinfi sinf1("33-Maktab", 1300, 65);
    MaktabSinfi sinf2("45-Maktab", 1250, 57);

    cout << "Sinf 1 ma'lumotlari:" << endl;
    cout << "Maktab nomi: " << sinf1.getMaktabNomi() << endl;
    cout << "Bolalar soni: " << sinf1.getBolalarSoni() << endl;
    cout << "O'qituvchilar soni: " << sinf1.getOqituvchilarSoni() << endl;
    cout << endl;

    cout << "Sinf 2 ma'lumotlari:" << endl;
    cout << "Maktab nomi: " << sinf2.getMaktabNomi() << endl;
    cout << "Bolalar soni: " << sinf2.getBolalarSoni() << endl;
    cout << "O'qituvchilar soni: " << sinf2.getOqituvchilarSoni() << endl;
    cout << endl;

    return 0;
}
