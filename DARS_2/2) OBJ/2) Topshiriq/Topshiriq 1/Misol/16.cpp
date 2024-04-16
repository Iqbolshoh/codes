#include <iostream>

using namespace std;

void print(string nomi, string dekan, int zamdekan)
{
    cout << " Dekanat Fakulteti nomi : " << nomi << endl;
    cout << " Jamoalar soni : " << dekan << endl;
    cout << " Dekan o'rinbosarlari soni  : " << zamdekan << endl;
}

class Dekanat
{
private:
    string nomi;
    string  dekan;
    int zamdekan;

public:
    Dekanat(string a, string b, int c)
    {
        nomi = a;
        dekan = b;
        zamdekan = c;
    }

    string Get1()
    {
        return nomi;
    }
    string Get2()
    {
        return dekan;
    }
    int Get3()
    {
        return zamdekan;
    }
};

int main()
{
    Dekanat obj1("Intelektual tizimlar", "Babayarov Abdusattor", 3);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA:
