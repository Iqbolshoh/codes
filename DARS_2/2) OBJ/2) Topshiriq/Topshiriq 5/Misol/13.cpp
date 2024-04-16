#include <iostream>
#include <string>

using namespace std;

class Guruh
{
private:
    string nomi;
    string Starsta;
    int talabalar_soni;

public:
    Guruh(string nomi, string Starsta, int talabalar_soni)
        : nomi(nomi), Starsta(Starsta), talabalar_soni(talabalar_soni) {}

    string getNomi() const
    {
        return nomi;
    }

    string getStarsta() const
    {
        return Starsta;
    }

    int getTalabalarSoni() const
    {
        return talabalar_soni;
    }

    void PrintInfo() const
    {
        cout << "Nomi: " << nomi << endl;
        cout << "Starsta: " << Starsta << endl;
        cout << "Talabalar soni: " << talabalar_soni << endl;
        cout << endl;
    }
};

int main()
{
    Guruh Guruh1("203", "Olimov Olim", 25);
    Guruh Guruh2("204", "Ilhomjonov Iqbolshoh", 22);

    cout << "Guruh 1 ma'lumotlari:" << endl;
    Guruh1.PrintInfo();

    cout << "Guruh 2 ma'lumotlari:" << endl;
    Guruh2.PrintInfo();

    return 0;
}
