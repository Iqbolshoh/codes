#include <iostream>

using namespace std;

class Guruh
{
private:
    static string nom;
    static string starsta;
    static int talaba;

public:
    static void Set(string b, int c)
    {
        starsta = b;
        talaba = c;
    }

    static void Print()
    {
        cout << " 1) Guruh nomi : " << nom << endl;
        cout << " 2) Starsta : " << starsta << endl;
        cout << " 3) Talabalar soni : " << talaba << endl;
    }
};

string Guruh::nom = "204-Dasturiy Injinering";
string Guruh::starsta = "Suxrob";
int Guruh::talaba = 30;

int main()
{
    Guruh::Print();
    Guruh::Set("Iqbolshoh", 25);
    cout << "Malumot almashtirish" << endl;
    Guruh::Print();
    return 0;
}
