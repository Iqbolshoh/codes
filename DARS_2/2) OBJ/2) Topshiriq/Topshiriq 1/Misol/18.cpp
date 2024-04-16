#include <iostream>

using namespace std;

void print(string nomi, int burchaklar, int burchakyig)
{
    cout << " GeometrikShakl nomi : " << nomi << endl;
    cout << " Burchaklar soni : " << burchaklar << endl;
    cout << " Ichki burchakalar yig'indisi : " << burchakyig << endl;
}

class GeometrikShakl
{
private:
    string nomi;
    int burchaklar;
    int burchakyig;

public:
    GeometrikShakl(string a, int b, int c)
    {
        nomi = a;
        burchaklar = b;
        burchakyig = c;
    }

    string Get1()
    {
        return nomi;
    }
    int Get2()
    {
        return burchaklar;
    }
    int Get3()
    {
        return burchakyig;
    }
};

int main()
{
    GeometrikShakl obj1("Uchburchak", 3, 180);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}
//NATIJA: