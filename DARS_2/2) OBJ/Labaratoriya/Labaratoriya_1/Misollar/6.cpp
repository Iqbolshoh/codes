#include <iostream>

using namespace std;

class Device
{
protected:
    string brend;
    string model;

public:
    Device(string b, string m) : brend(b), model(m) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Brend : " << brend << endl;
        cout << " Model : " << model << endl;
    }
};

class Telephone : public Device
{
private:
    float price;
    int memory;

public:
    Telephone(string b, string m, float p, int g) : Device(b, m), price(p), memory(g) {}

    void displayTelephoneInfo()
    {
        displayInfo();
        cout << " Price : " << price << " $ " << endl;
        cout << " Memory : " << memory << " gb " << endl;
    }
};

class Computer : public Telephone
{
private:
    string processor;

public:
    Computer(string b, string m, float p, int g, string pr) : Telephone(b, m, p, g), processor(pr) {}
    void displayComputerInfo()
    {
        displayTelephoneInfo();
        cout << " Processor : " << processor << endl;
    }
};

int main()
{
    Device person("Apple", "14 pro max");
    person.displayInfo();
    Telephone Telephone("Samsung", "Galaxy S24", 1200, 512);
    Telephone.displayTelephoneInfo();
    Computer computer("Apple", "MacBook Pro", 1999.99, 1024, "Intel i9");
    computer.displayComputerInfo();

    return 0;
}
