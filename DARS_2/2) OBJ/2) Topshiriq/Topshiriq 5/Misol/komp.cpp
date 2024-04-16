#include <iostream>
#include <string>

using namespace std;

class Kompyuter
{
private:
    string nomi;
    string protsessori;
    float narxi;

public:
    Kompyuter(string nomi, string protsessori, float narxi) : nomi(nomi), protsessori(protsessori), narxi(narxi) {}

    string getNomi() const
    {
        return nomi;
    }

    string getprotsessori() const
    {
        return protsessori;
    }

    float getTalabalarSoni() const
    {
        return narxi;
    }
};

int main()
{
    Kompyuter Kompyuter1("Lenevo", "Intel core i5", 500);
    Kompyuter Kompyuter2("Macbook", "M1", 1200);

    cout << "Kompyuter 1 ma'lumotlari:" << endl;
    cout << "Nomi: " << Kompyuter1.getNomi() << endl;
    cout << "Protsessor: " << Kompyuter1.getprotsessori() << endl;
    cout << "Narxi: " << Kompyuter1.getTalabalarSoni() << "$" << endl;
    cout << endl;

    cout << "Kompyuter 2 ma'lumotlari:" << endl;
    cout << "Nomi: " << Kompyuter2.getNomi() << endl;
    cout << "Protsessor: " << Kompyuter2.getprotsessori() << endl;
    cout << "Narxi: " << Kompyuter2.getTalabalarSoni() << "$" << endl;
    cout << endl;

    return 0;
}
