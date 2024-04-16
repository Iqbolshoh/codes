#include <iostream>
#include <string>

using namespace std;

class Hotel
{
protected:
    string name;
    string address;
    string manager;

public:
    Hotel(const string &_name, const string &_address, const string &_manager)
        : name(_name), address(_address), manager(_manager) {}

    virtual double calculateAnnualIncome() = 0;

    void displayInfo()
    {
        cout << "Hotel Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Manager: " << manager << endl;
    }
};

class RegistanPlaza : public Hotel
{
private:
    double roomPrice;
    int numberOfRooms;

public:
    RegistanPlaza(const string &_name, const string &_address, const string &_manager, double _roomPrice, int _numberOfRooms)
        : Hotel(_name, _address, _manager), roomPrice(_roomPrice), numberOfRooms(_numberOfRooms) {}

    double calculateAnnualIncome() override
    {
        return roomPrice * numberOfRooms * 30 * 12;
    }
};

class RentHouse : public Hotel
{
private:
    double rentPrice;
    int numberOfHouses;

public:
    RentHouse(const string &_name, const string &_address, const string &_manager, double _rentPrice, int _numberOfHouses)
        : Hotel(_name, _address, _manager), rentPrice(_rentPrice), numberOfHouses(_numberOfHouses) {}

    // Yillik daromadni aniqlash
    double calculateAnnualIncome() override
    {
        return rentPrice * numberOfHouses * 30 * 12;
    }
};

int main()
{
    RegistanPlaza registanPlaza("Registan Plaza", "123 Registan St.", "John Doe", 100, 50);

    RentHouse rentHouse("Rent House", "456 Rental St.", "Alice Smith", 5000, 10);

    cout << "Registan Plaza info:" << endl;
    registanPlaza.displayInfo();
    cout << "Annual Income: $" << registanPlaza.calculateAnnualIncome() << endl;

    cout << "Rent House info:" << endl;
    rentHouse.displayInfo();
    cout << "Annual Income: $" << rentHouse.calculateAnnualIncome() << endl;

    return 0;
}
