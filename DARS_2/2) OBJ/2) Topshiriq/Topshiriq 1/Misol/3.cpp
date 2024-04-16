#include <iostream>

using namespace std;

void print(string nomi, int fakultetlar, int talabalar)
{
    cout << " Universitet Nomi : " << nomi << endl;
    cout << " Fakultetlar soni : " << fakultetlar << endl;
    cout << " Talabalar soni : " << talabalar << endl;
}

class Univeresitet
{
private:
    string nomi;
    int fakultetlar;
    int talabalar;

public:
    Univeresitet(string a, int b, int c)
    {
        nomi = a;
        fakultetlar = b;
        talabalar = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return fakultetlar;
    }
    int Get3()
    {
        return talabalar;
    }
};

int main()
{
    Univeresitet obj1("SamDU", 12, 27000);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: