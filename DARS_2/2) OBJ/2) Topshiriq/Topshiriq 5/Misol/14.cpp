#include <iostream>
#include <string>

using namespace std;

class Kutubxona
{
private:
    string nomi;
    int ishchikar;

public:
    Kutubxona(string nomi, int ishchikar)
        : nomi(nomi), ishchikar(ishchikar) {}

    string getNomi() const
    {
        return nomi;
    }

    int getishchikar() const
    {
        return ishchikar;
    }

    void PrintInfo() const
    {
        cout << "Kutubxona nomi: " << nomi << endl;
        cout << "Ishchikar: " << ishchikar << endl;
        cout << endl;
    }
};

int main()
{
    Kutubxona kitob1("SamDU Kutubxonasi", 23);
    Kutubxona kitob2("Pushkinskiy", 17);

    cout << "Kutubxona 1 ma'lumotlari:" << endl;
    cout << "Nomi: " << kitob1.getNomi() << endl;
    cout << "Ishchikar: " << kitob1.getishchikar() << endl;
    cout << endl;

    cout << "Kutubxona 2 ma'lumotlari:" << endl;
    cout << "Nomi: " << kitob2.getNomi() << endl;
    cout << "Ishchikar: " << kitob2.getishchikar() << endl;
    cout << endl;

    return 0;
}
