#include <iostream>

using namespace std;

class Fudbol
{
private:
    string StadionNomi;
    int JamoaSoni;
    int muxlislarSoni;
    string golibJamoa;

public:
    Fudbol() : StadionNomi(""), JamoaSoni(0), muxlislarSoni(0), golibJamoa("") {}
    ~Fudbol()
    {
        cout << StadionNomi << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b, int c, string d)
    {
        StadionNomi = a;
        JamoaSoni = b;
        muxlislarSoni = c;
        golibJamoa = d;
    }
    void Print()
    {
        cout << " 1) Stadion nomi: " << StadionNomi << endl;
        cout << " 2) Jamoa Soni: " << JamoaSoni << endl;
        cout << " 3) Muxlislar Soni: " << muxlislarSoni << endl;
        cout << " 4) golib Jamoa: " << golibJamoa << endl;
        cout << endl;
    }
};
int main()
{
    Fudbol obj1, obj2;
    obj1.Set("Rungrado", 12, 4500, "real madrid");
    obj2.Set("Salt Lake", 11, 4000, "real madrid");
    obj1.Print();
    obj2.Print();
    return 0;
}
