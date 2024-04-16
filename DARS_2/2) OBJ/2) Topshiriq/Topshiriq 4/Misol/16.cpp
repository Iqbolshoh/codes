#include <iostream>

using namespace std;

class CurrencyConverter
{
private:
    int balance;

public:
    CurrencyConverter(int a) : balance(a) {}

    void displayBalance()
    {
        cout << " Balance : " << balance << " $ " << endl;
    }

    void displayBalanc()
    {
        cout << " Balance : " << balance << " sum " << endl;
    }

    friend void depozitAmount(CurrencyConverter &Bank, int newbalance);
};

void depozitAmount(CurrencyConverter &Bank, int newbalance)
{
    Bank.balance = newbalance * 12918;
}

int main()
{
    int dollar = 500;
    CurrencyConverter obj1(dollar);
    obj1.displayBalance();
    depozitAmount(obj1, dollar);
    obj1.displayBalanc();
    return 0;
}
