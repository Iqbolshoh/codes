#include <iostream>

using namespace std;

class Dekanat
{
private:
    string Fakultet;
    string Dekan;
    int zamdekansoni;
    int talabalarSoni;

public:
    Dekanat() : Fakultet(""), Dekan(""), zamdekansoni(0), talabalarSoni(0) {}
    ~Dekanat()
    {
        cout << Fakultet << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, string b, int c, int d)
    {
        Fakultet = a;
        Dekan = b;
        zamdekansoni = c;
        talabalarSoni = d;
    }
    void Print()
    {
        cout << " 1) Fakultet nomi: " << Fakultet << endl;
        cout << " 2) Dekan: " << Dekan << endl;
        cout << " 3) Zamdekanlar Soni: " << zamdekansoni << endl;
        cout << " 4) Talabalar Soni: " << talabalarSoni << endl;
        cout << endl;
    }
};
int main()
{
    Dekanat obj1, obj2;
    obj1.Set("Matematika", "Iqbolshoh", 5, 3000);
    obj2.Set("Iqtisodiyot", "Azizjon", 4, 2500);
    obj1.Print();
    obj2.Print();
    return 0;
}
