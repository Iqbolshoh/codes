#include <iostream>

using namespace std;

void print(string nomi, string muallif, int betlar)
{
    cout << " Kitob Nomi : " << nomi << endl;
    cout << " Muallifi : " << muallif << endl;
    cout << " Betlar soni: " << betlar << endl;
}

class Kitob
{
private:
    string nomi;
    string muallif;
    int betlar;

public:
    Kitob(string a, string b, int c)
    {
        nomi = a;
        muallif = b;
        betlar = c;
    }

    string Get1()
    {
        return nomi;
    }
    string Get2()
    {
        return muallif;
    }
    int Get3()
    {
        return betlar;
    }
};

int main()
{
    Kitob obj1("Xamsa", "Alisher Navoiy", 538);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: