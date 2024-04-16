#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    virtual double getPrice() const = 0;
};

class BMW : public Car
{
public:
    double getPrice() const override
    {
        return 50000.0;
    }
};

class Toyota : public Car
{
public:
    double getPrice() const override
    {
        return 30000.0;
    }
};

int main()
{
    BMW bmw;
    Toyota toyota;

    cout << "BMW price: $" << bmw.getPrice() << endl;
    cout << "Toyota price: $" << toyota.getPrice() << endl;

    return 0;
}
