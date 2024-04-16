#include <iostream>
#include <string>

using namespace std;

class Noutbuk
{
private:
    string model;
    string produser;
    int ram;
    float ekran_hajmi;

public:
    Noutbuk(string model, string produser, int ram, float ekran_hajmi)
        : model(model), produser(produser), ram(ram), ekran_hajmi(ekran_hajmi) {}

    string getModel() const
    {
        return model;
    }

    string getProduser() const
    {
        return produser;
    }

    int getRAM() const
    {
        return ram;
    }

    float getEkranHajmi() const
    {
        return ekran_hajmi;
    }

    void PrintInfo() const
    {
        cout << "Model: " << model << endl;
        cout << "Produser: " << produser << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Ekran hajmi: " << ekran_hajmi << " dyuym" << endl;
        cout << endl;
    }
};

int main()
{
    Noutbuk noutbuk1("Dell XPS 13", "Dell", 16, 13.3);
    Noutbuk noutbuk2("MacBook Pro", "Apple", 32, 15.6);

    cout << "Noutbuk 1 ma'lumotlari:" << endl;
    noutbuk1.PrintInfo();

    cout << "Noutbuk 2 ma'lumotlari:" << endl;
    noutbuk2.PrintInfo();

    return 0;
}
