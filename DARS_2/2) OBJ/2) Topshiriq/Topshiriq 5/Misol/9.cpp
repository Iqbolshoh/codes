#include <iostream>
#include <string>

using namespace std;

class Maktab
{
private:
    string nomi;
    string direktor;
    int oqituvchilar_soni;
    int talabalar_soni;

public:
    Maktab(string nomi, string direktor, int oqituvchilar_soni, int talabalar_soni)
        : nomi(nomi), direktor(direktor), oqituvchilar_soni(oqituvchilar_soni), talabalar_soni(talabalar_soni) {}

    string getNomi() const
    {
        return nomi;
    }

    string getDirektor() const
    {
        return direktor;
    }

    int getOqituvchilarSoni() const
    {
        return oqituvchilar_soni;
    }

    int getTalabalarSoni() const
    {
        return talabalar_soni;
    }
};

int main()
{
    Maktab maktab1("33-Maktab", "Ravshanova M", 40, 600);
    Maktab maktab2("45-Maktab", "Fayziyeva Z", 35, 550);

    cout << "Maktab 1 ma'lumotlari" << endl;
    cout << "Nomi: " << maktab1.getNomi() << endl;
    cout << "Direktor: " << maktab1.getDirektor() << endl;
    cout << "O'qituvchilar soni: " << maktab1.getOqituvchilarSoni() << endl;
    cout << "Talabalar soni: " << maktab1.getTalabalarSoni() << endl;
    cout << endl;

    cout << "Maktab 2 ma'lumotlari" << endl;
    cout << "Nomi: " << maktab2.getNomi() << endl;
    cout << "Direktor: " << maktab2.getDirektor() << endl;
    cout << "O'qituvchilar soni: " << maktab2.getOqituvchilarSoni() << endl;
    cout << "Talabalar soni: " << maktab2.getTalabalarSoni() << endl;
    cout << endl;

    return 0;
}
