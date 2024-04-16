#include <iostream>

using namespace std;

void print(string nomi, int tumanlar, int shaharlar)
{
    cout << " Viloyat Nomi : " << nomi << endl;
    cout << " Tumanalar soni : " << tumanlar << endl;
    cout << " Shaharlar soni : " << shaharlar << endl;
}

class Viloyat
{
private:
    string nomi;
    int tumanlar;
    int shaharlar;

public:
    Viloyat(string a, int b, int c)
    {
        nomi = a;
        tumanlar = b;
        shaharlar = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return tumanlar;
    }
    int Get3()
    {
        return shaharlar;
    }
};

int main()
{
    Viloyat obj1("Samarqand", 14, 2);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: