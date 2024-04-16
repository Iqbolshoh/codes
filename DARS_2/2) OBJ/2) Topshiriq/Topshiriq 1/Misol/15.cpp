#include <iostream>

using namespace std;

void print(string nomi, int jamoalar, int tomoshabinlar)
{
    cout << " Fudbol Stadion nomi : " << nomi << endl;
    cout << " Jamoalar soni : " << jamoalar << endl;
    cout << " Tomoshabinlar soni : " << tomoshabinlar << endl;
}

class Fudbol
{
private:
    string nomi;
    int jamoalar;
    int tomoshabinlar;

public:
    Fudbol(string a, int b, int c)
    {
        nomi = a;
        jamoalar = b;
        tomoshabinlar = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return jamoalar;
    }
    int Get3()
    {
        return tomoshabinlar;
    }
};

int main()
{
    Fudbol obj1("Uembli", 18, 90000);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: