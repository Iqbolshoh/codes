#include <iostream>

using namespace std;

void print(string nomi, int kafedralar, int talabalar)
{
    cout << " Fakultet Nomi : " << nomi << endl;
    cout << " Kafedralar soni : " << kafedralar << endl;
    cout << " Talabalar soni : " << talabalar << endl;
}

class Fakultet
{
private:
    string nomi;
    int kafedralar;
    int talabalar;

public:
    Fakultet(string a, int b, int c)
    {
        nomi = a;
        kafedralar = b;
        talabalar = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return kafedralar;
    }
    int Get3()
    {
        return talabalar;
    }
};

int main()
{
    Fakultet obj1("Intelektual tizimlar", 3, 1207);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: