#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Apartment
{
protected:
    double price; // Narx
    int rooms;    // Xonalar soni

public:
    Apartment(double _price, int _rooms) : price(_price), rooms(_rooms) {}

    virtual bool isFullyOccupied() const = 0;
};

class StudentHouse : public Apartment
{
private:
    int tenants;

public:
    // Konstruktor
    StudentHouse(double _price, int _rooms, int _tenants)
        : Apartment(_price, _rooms), tenants(_tenants) {}

    void addTenants(int count)
    {
        tenants += count;
    }

    bool isFullyOccupied() const override
    {
        return tenants >= rooms;
    }
};

class RentHouse : public Apartment
{
private:
    int tenants;

public:
    RentHouse(double _price, int _rooms, int _tenants)
        : Apartment(_price, _rooms), tenants(_tenants) {}

    void addTenants(int count)
    {
        tenants += count;
    }

    bool isFullyOccupied() const override
    {
        return tenants >= rooms;
    }
};

int main()
{
    StudentHouse studentHouse(1500.0, 3, 2);
    studentHouse.addTenants(1);

    RentHouse rentHouse(2000.0, 4, 3);
    rentHouse.addTenants(1);

    cout << "Student House is fully occupied: " << (studentHouse.isFullyOccupied() ? "Yes" : "No") << endl;
    cout << "Rent House is fully occupied: " << (rentHouse.isFullyOccupied() ? "Yes" : "No") << endl;

    return 0;
}
