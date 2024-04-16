#include <iostream>
#include <string>

using namespace std;

class Kitob
{
private:
    string nomi;
    string muallif;
    int chop_etilgan_yil;
    string til;

public:
    Kitob(string nomi, string muallif, int chop_etilgan_yil, string til)
        : nomi(nomi), muallif(muallif), chop_etilgan_yil(chop_etilgan_yil), til(til) {}

    string getNomi() const
    {
        return nomi;
    }

    string getMuallif() const
    {
        return muallif;
    }

    int getChopEtilganYil() const
    {
        return chop_etilgan_yil;
    }

    string getTil() const
    {
        return til;
    }
};

int main()
{
    Kitob kitob1("Sherlock Holmes", "Arthur Conan Doyle", 1892, "Inglizcha");
    Kitob kitob2("Anna Karenina", "Leo Tolstoy", 1877, "Ruscha");

    cout << "Kitob 1 ma'lumotlari:" << endl;
    cout << "Nomi: " << kitob1.getNomi() << endl;
    cout << "Muallif: " << kitob1.getMuallif() << endl;
    cout << "Chop etilgan yil: " << kitob1.getChopEtilganYil() << endl;
    cout << "Til: " << kitob1.getTil() << endl;
    cout << endl;

    cout << "Kitob 2 ma'lumotlari:" << endl;
    cout << "Nomi: " << kitob2.getNomi() << endl;
    cout << "Muallif: " << kitob2.getMuallif() << endl;
    cout << "Chop etilgan yil: " << kitob2.getChopEtilganYil() << endl;
    cout << "Til: " << kitob2.getTil() << endl;
    cout << endl;

    return 0;
}
