#include <iostream>

using namespace std;

class BankAccount
{
private:
    float balance;

public:
    BankAccount() : balance(0) {}

    void displayBalance()
    {
        cout << " Balance : " << balance << " $ " << endl;
    }

    friend BankAccount depozitAmount(BankAccount &Bank, float newbalance);
};

BankAccount depozitAmount(BankAccount &Bank, float newbalance)
{
    Bank.balance = newbalance;
}
int main()
{
    BankAccount obj1;
    obj1.displayBalance();
    depozitAmount(obj1, 777000);
    obj1.displayBalance();
    return 0;
}