#include <iostream>

using namespace std;

void print(string nomi, int maydoni, int aholi)
{
    cout << " Nomi : " << nomi << endl;
    cout << " Maydoni (Km2) : " << maydoni << endl;
    cout << " Aholi soni : " << aholi << endl;
}

class Shahar
{
private:
    string nomi;
    int maydoni;
    int aholi;

public:
    Shahar(string a, int b, int c)
    {
        nomi = a;
        maydoni = b;
        aholi = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return maydoni;
    }
    int Get3()
    {
        return aholi;
    }
};

int main()
{
    Shahar obj1("Samarqand Shahri", 120, 1050000);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: