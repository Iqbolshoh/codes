#include <iostream>
#include <string>

using namespace std;

class Universitet
{
private:
    string nomi;
    string manzili;
    int talabalar_soni;

public:
    Universitet(string nomi, string manzili, int talabalar_soni) : nomi(nomi), manzili(manzili), talabalar_soni(talabalar_soni) {}

    string getNomi() const
    {
        return nomi;
    }

    string getManzili() const
    {
        return manzili;
    }

    int getTalabalarSoni() const
    {
        return talabalar_soni;
    }
};

int main()
{
    Universitet universitet1("O'zbekiston Milliy Universiteti", "Tashkent, Universitet ko'chasi 1", 15000);
    Universitet universitet2("Toshkent Davlat Texnika Universiteti", "Tashkent, Universitet ko'chasi 2", 12000);

    cout << "Universitet 1 ma'lumotlari:" << endl;
    cout << "Nomi: " << universitet1.getNomi() << endl;
    cout << "Manzil: " << universitet1.getManzili() << endl;
    cout << "Talabalar soni: " << universitet1.getTalabalarSoni() << endl;
    cout << endl;

    cout << "Universitet 2 ma'lumotlari:" << endl;
    cout << "Nomi: " << universitet2.getNomi() << endl;
    cout << "Manzil: " << universitet2.getManzili() << endl;
    cout << "Talabalar soni: " << universitet2.getTalabalarSoni() << endl;
    cout << endl;

    return 0;
}
