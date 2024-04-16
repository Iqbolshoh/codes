#include <iostream>

using namespace std;

class Xodim
{
private:
    static string nom;
    static int maosh;
    static int tajriba;

public:
    static void Set(int b, int c)
    {
        maosh = b;
        tajriba = c;
    }

    static void Print()
    {
        cout << " 1) Xodim nomi : " << nom << endl;
        cout << " 2) Maosh : " << maosh << " $ " << endl;
        cout << " 3) Tajribalar : " << tajriba << " Yil " << endl;
    }
};

string Xodim::nom = "Iqbolshoh";
int Xodim::maosh = 7000;
int Xodim::tajriba = 3;

int main()
{
    Xodim::Print();
    Xodim::Set(11000, 4);
    cout << "Malumot almashtirish" << endl;
    Xodim::Print();
    return 0;
}