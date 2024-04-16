#include <iostream>

using namespace std;

void print(string nomi, string manzil, int doktorlar)
{
    cout << " Shifoxona nomi : " << nomi << endl;
    cout << " Manzil : " << manzil << endl;
    cout << " Doktorlar soni  : " << doktorlar << endl;
}

class Shifoxona
{
private:
    string nomi;
    string  manzil;
    int doktorlar;

public:
    Shifoxona(string a, string b, int c)
    {
        nomi = a;
        manzil = b;
        doktorlar = c;
    }

    string Get1()
    {
        return nomi;
    }
    string Get2()
    {
        return manzil;
    }
    int Get3()
    {
        return doktorlar;
    }
};

int main()
{
    Shifoxona obj1("MARKAZIY SHAHAR KASALXONASI", "Samarqand", 79);
    print(obj1.Get1(), obj1.Get2(), obj1.Get3());
    return 0;
}

//NATIJA: