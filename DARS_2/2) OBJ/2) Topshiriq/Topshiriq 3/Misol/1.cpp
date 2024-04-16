#include <iostream>

using namespace std;

class Kitob
{
private:
    static string nom;
    static int bet;
    static int kitobxon;

public:
    static void Set(int b, int c)
    {
        bet = b;
        kitobxon = c;
    }
    static void Print()
    {
        cout << " 1) Kitob nomi : " << nom << endl;
        cout << " 2) Kitob bet : " << bet << endl;
        cout << " 3) Kitobxon soni : " << kitobxon << endl;
    }
};
string Kitob::nom = "Atom Odatlar";
int Kitob::bet = 350;
int Kitob::kitobxon = 4000;

int main()
{
    Kitob::Print();
    Kitob::Set(400, 5000);
    cout << "Malumot almashtirish" << endl;
    Kitob::Print();
    return 0;
}