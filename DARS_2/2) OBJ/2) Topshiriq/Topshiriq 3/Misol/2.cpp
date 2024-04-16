#include <iostream>

using namespace std;

class Noutbuk
{
private:
    static string nom;
    static string brend;
    static int narx;

public:
    static void Set(string b, int c)
    {
        brend = b;
        narx = c;
    }
    static void Print()
    {
        cout << " 1) Noutbuk nomi : " << nom << endl;
        cout << " 2) Noutbuk brend : " << brend << endl;
        cout << " 3) Narxi : " << narx << "$" << endl;
    }
};
string Noutbuk::nom = "Notebuk";
string Noutbuk::brend = "Lenevo";
int Noutbuk::narx = 1400;

int main()
{
    Noutbuk::Print();
    Noutbuk::Set("Apple", 2200);
    cout << "Malumot almashtirish" << endl;
    Noutbuk::Print();
    return 0;
}