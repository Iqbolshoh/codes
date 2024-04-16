#include <iostream>

using namespace std;

void print(string nomi, int oqituvchilar, int fanlar)
{
    cout << " Kafedra Nomi : " << nomi << endl;
    cout << " O'qituvchilar soni : " << oqituvchilar << endl;
    cout << " Fanlar soni : " << fanlar << endl;
}

class Kafedra
{
private:
    string nomi;
    int oqituvchilar;
    int fanlar;

public:
    Kafedra(string a, int b, int c)
    {
        nomi = a;
        oqituvchilar = b;
        fanlar = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return oqituvchilar;
    }
    int Get3()
    {
        return fanlar;
    }
};

int main()
{
    Kafedra obj1("Dasturiy injenering", 20, 7);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}
//NATIJA: