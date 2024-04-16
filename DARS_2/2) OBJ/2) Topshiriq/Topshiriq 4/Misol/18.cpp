#include <iostream>

using namespace std;

class Bank
{
private:
    float balance;

public:
    Bank() : balance(0) {}

    void displayBalance()
    {
        cout << " Balance : " << balance << " $ " << endl;
    }

    friend Bank depozitAmount(Bank &Bank, float newbalance);
};

Bank depozitAmount(Bank &Bank, float newbalance)
{
    Bank.balance = newbalance;
}
int main()
{
    Bank obj1;
    obj1.displayBalance();
    depozitAmount(obj1, 777000);
    obj1.displayBalance();
    return 0;
}