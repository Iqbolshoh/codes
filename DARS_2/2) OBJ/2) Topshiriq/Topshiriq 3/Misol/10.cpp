#include <iostream>

using namespace std;

class Futbol
{
private:
    static string JamoaNomi;
    static string stadion;
    static int fudbolchi;

public:
    static void Set(string a, int c)
    {
        JamoaNomi = a;
        fudbolchi = c;
    }
    static void Print()
    {
        cout << " 1) Jamoa Nomi : " << JamoaNomi << endl;
        cout << " 2) Stadion nomi : " << stadion << endl;
        cout << " 3) Tudbolchi soni : " << fudbolchi << endl;
    }
};
string Futbol::JamoaNomi = "Real madrid";
string Futbol::stadion = "Borg El Arab";
int Futbol::fudbolchi = 11;

int main()
{
    Futbol::Print();
    Futbol::Set("Juventus", 12);
    cout << "Malumot almashtirish" << endl;
    Futbol::Print();
    return 0;
}