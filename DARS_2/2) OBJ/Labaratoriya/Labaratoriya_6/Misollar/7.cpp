#include <iostream>
#include <string>

using namespace std;

class Device
{
protected:
    string serialNumber;
    string name;

public:
    Device(const string &_serialNumber, const string &_name)
        : serialNumber(_serialNumber), name(_name) {}

    virtual void useOS() const = 0;
};

class Computer : public Device
{
private:
    string operatingSystem;

public:
    Computer(const string &_serialNumber, const string &_name, const string &_os)
        : Device(_serialNumber, _name), operatingSystem(_os) {}

    void useOS() const override
    {
        cout << "Using operating system: " << operatingSystem << endl;
    }
};

class Telephone : public Device
{
private:
    string operatingSystem;

public:
    Telephone(const string &_serialNumber, const string &_name, const string &_os)
        : Device(_serialNumber, _name), operatingSystem(_os) {}

    void useOS() const override
    {
        cout << "Using operating system: " << operatingSystem << endl;
    }
};

int main()
{
    Computer laptop("ABC123", "Laptop", "Windows 10");
    Telephone smartphone("XYZ456", "Smartphone", "Android");

    laptop.useOS();
    smartphone.useOS();

    return 0;
}
