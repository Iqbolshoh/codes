#include <iostream>
#include <string>

using namespace std;

class Kafedra
{
private:
    string nomi;
    string mudiri;
    int oqituvchilar_soni;

public:
    Kafedra(string nomi, string mudiri, int oqituvchilar_soni) : nomi(nomi), mudiri(mudiri), oqituvchilar_soni(oqituvchilar_soni) {}

    string getNomi() const
    {
        return nomi;
    }

    string getMudiri() const
    {
        return mudiri;
    }

    int getOqituvchilarSoni() const
    {
        return oqituvchilar_soni;
    }
};

int main()
{
    Kafedra kafedra1("Informatika", "Olimov Olim", 10);
    Kafedra kafedra2("Matematika", "Rasulov Rasul", 8);

    cout << "Kafedra 1 ma'lumotlari:" << endl;
    cout << "Nomi: " << kafedra1.getNomi() << endl;
    cout << "Mudiri: " << kafedra1.getMudiri() << endl;
    cout << "O'qituvchilar soni: " << kafedra1.getOqituvchilarSoni() << endl;
    cout << endl;

    cout << "Kafedra 2 ma'lumotlari:" << endl;
    cout << "Nomi: " << kafedra2.getNomi() << endl;
    cout << "Mudiri: " << kafedra2.getMudiri() << endl;
    cout << "O'qituvchilar soni: " << kafedra2.getOqituvchilarSoni() << endl;
    cout << endl;

    return 0;
}
