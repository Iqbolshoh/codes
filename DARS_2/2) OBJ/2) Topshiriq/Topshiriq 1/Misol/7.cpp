#include <iostream>

using namespace std;

void print(string brendi, string protsesori, int oparatifkasi)
{
    cout << " Noutebook Nomi : " << brendi << endl;
    cout << " Protsesor turi : " << protsesori << endl;
    cout << " Operatifkasi : " << oparatifkasi << " GB " << endl;
}

class Noutebook
{
private:
    string brendi;
    string protsesori;
    int oparatifkasi;

public:
    Noutebook(string a, string b, int c)
    {
        brendi = a;
        protsesori = b;
        oparatifkasi = c;
    }

    string Get1()
    {
        return brendi;
    }
    string Get2()
    {
        return protsesori;
    }
    int Get3()
    {
        return oparatifkasi;
    }
};

int main()
{
    Noutebook obj1("Lenevo", "Intel core i5", 8);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: