#include <iostream>

using namespace std;

void print(string yonalishi, int KitobSoni, int kitobxonlarSoni)
{
    cout << " Nomi : " << yonalishi << endl;
    cout << " Kitoblar Soni : " << KitobSoni << endl;
    cout << " Kitobxonlar soni : " << kitobxonlarSoni << endl;
}

class Kutubxona
{
private:
    string yonalishi;
    int KitobSoni;
    int kitobxonlarSoni;

public:
    Kutubxona(string a, int b, int c)
    {
        yonalishi = a;
        KitobSoni = b;
        kitobxonlarSoni = c;
    }

    string Get1()
    {
        return yonalishi;
    }
    int Get2()
    {
        return KitobSoni;
    }
    int Get3()
    {
        return kitobxonlarSoni;
    }
};

int main()
{
    Kutubxona obj1("Pushkinskiy", 4765, 2035);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: