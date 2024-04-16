#include <iostream>

using namespace std;

class Tovar
{
private:
    string name;
    int TovarID;
    float narxi;

public:
    Tovar(string a, int b, float c)
    {
        name = a;
        TovarID = b;
        narxi = c;
    }

    string getNomi() const
    {
        return name;
    }

    int getTovarID() const
    {
        return TovarID;
    }

    float getNarxi() const
    {
        return narxi;
    }
};

int main()
{
    Tovar tovar1("Telefon", 12345, 1500.0);

    cout << "Tovar Nomi: " << tovar1.getNomi() << endl;
    cout << "Tovar ID: " << tovar1.getTovarID() << endl;
    cout << "Tovar Narxi: " << tovar1.getNarxi() << " $ " << endl;

    return 0;
}
