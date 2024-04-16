#include <iostream>
#include <string>

using namespace std;

class Fakultet
{
private:
    string nomi;
    string dekan;
    int oqituvchilar_soni;
    int talabalar_soni;

public:
    Fakultet(string nomi, string dekan, int oqituvchilar_soni, int talabalar_soni)
        : nomi(nomi), dekan(dekan), oqituvchilar_soni(oqituvchilar_soni), talabalar_soni(talabalar_soni) {}

    string getNomi() const
    {
        return nomi;
    }

    string getDekan() const
    {
        return dekan;
    }

    int getOqituvchilarSoni() const
    {
        return oqituvchilar_soni;
    }

    int getTalabalarSoni() const
    {
        return talabalar_soni;
    }

    void PrintInfo() const
    {
        cout << "Nomi: " << nomi << endl;
        cout << "Dekan: " << dekan << endl;
        cout << "O'qituvchilar soni: " << oqituvchilar_soni << endl;
        cout << "Talabalar soni: " << talabalar_soni << endl;
        cout << endl;
    }
};

int main()
{
    Fakultet fakultet1("Informatika", "Olimov Olim", 30, 500);
    Fakultet fakultet2("Matematika", "Rasulov Rasul", 25, 450);

    cout << "Fakultet 1 ma'lumotlari:" << endl;
    fakultet1.PrintInfo();

    cout << "Fakultet 2 ma'lumotlari:" << endl;
    fakultet2.PrintInfo();

    return 0;
}
