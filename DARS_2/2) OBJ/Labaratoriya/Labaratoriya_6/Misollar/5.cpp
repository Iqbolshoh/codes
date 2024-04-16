#include <iostream>
#include <string>

using namespace std;

class Market
{
protected:
    string name;
    string address;

public:
    Market(const string &_name, const string &_address)
        : name(_name), address(_address) {}

    virtual double calculateAnnualRevenue() = 0;

    void displayInfo()
    {
        cout << "Market Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Supermarket : public Market
{
private:
    double totalRevenue;

public:
    Supermarket(const string &_name, const string &_address, double _totalRevenue)
        : Market(_name, _address), totalRevenue(_totalRevenue) {}

    double calculateAnnualRevenue() override
    {
        return totalRevenue;
    }
};

class Hypermarket : public Market
{
private:
    double totalRevenue;

public:
    Hypermarket(const string &_name, const string &_address, double _totalRevenue)
        : Market(_name, _address), totalRevenue(_totalRevenue) {}
 
    double calculateAnnualRevenue() override
    {
        return totalRevenue;
    }
};
 
class Minimarket : public Market
{
private:
    double totalRevenue;

public:
    Minimarket(const string &_name, const string &_address, double _totalRevenue)
        : Market(_name, _address), totalRevenue(_totalRevenue) {}
 
    double calculateAnnualRevenue() override
    {
        return totalRevenue;
    }
};

int main()
{
    Supermarket supermarket("Supermarket X", "123 Main St.", 1000000.0);
    Hypermarket hypermarket("Hypermarket Y", "456 Park Ave.", 2000000.0);
    Minimarket minimarket("Minimarket Z", "789 Elm St.", 500000.0);

    cout << "Supermarket info:" << endl;
    supermarket.displayInfo();
    cout << "Annual Revenue: $" << supermarket.calculateAnnualRevenue() << endl;

    cout << "Hypermarket info:" << endl;
    hypermarket.displayInfo();
    cout << "Annual Revenue: $" << hypermarket.calculateAnnualRevenue() << endl;

    cout << "Minimarket info:" << endl;
    minimarket.displayInfo();
    cout << "Annual Revenue: $" << minimarket.calculateAnnualRevenue() << endl;

    return 0;
}
