#include <iostream>
#include <string>

using namespace std;

class Mashina
{
private:
    string model;
    string rang;
    int narx;

public:
    Mashina(string model, string rang, int narx) : model(model), rang(rang), narx(narx) {}

    string getModel() const
    {
        return model;
    }

    string getRang() const
    {
        return rang;
    }

    int getNarx() const
    {
        return narx;
    }
};

int main()
{
    Mashina mashina1("Toyota Camry", "Oq", 30000);
    Mashina mashina2("Chevrolet Malibu", "Qora", 25000);

    cout << "Mashina 1 ma'lumotlari:" << endl;
    cout << "Model: " << mashina1.getModel() << endl;
    cout << "Rang: " << mashina1.getRang() << endl;
    cout << "Narx: " << mashina1.getNarx() << " $" << endl;
    cout << endl;

    cout << "Mashina 2 ma'lumotlari:" << endl;
    cout << "Model: " << mashina2.getModel() << endl;
    cout << "Rang: " << mashina2.getRang() << endl;
    cout << "Narx: " << mashina2.getNarx() << " $" << endl;
    cout << endl;

    return 0;
}
