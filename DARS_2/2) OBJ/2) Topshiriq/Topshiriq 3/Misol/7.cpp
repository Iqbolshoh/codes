#include <iostream>

using namespace std;

class Korxona
{
public:
    static string korxonaNomi;
    static int ishchilarSoni;
    static void Print()
    {
        cout << "Korxona nomi: " << korxonaNomi << endl;
        cout << "Ishchilar soni: " << ishchilarSoni << endl;
    }
    static void Set(int newIshchilarSoni)
    {
        ishchilarSoni = newIshchilarSoni;
    }
};
string Korxona::korxonaNomi = "Tibbiyot Korxonasi";
int Korxona::ishchilarSoni = 100;
int main()
{
    Korxona::Print();
    Korxona::Set(120);
    cout << "Malumot almashtirish" << endl;
    Korxona::Print();
    return 0;
}