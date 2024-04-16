#include <iostream>

using namespace std;

class Organization
{
protected:
    string name;
    string address;

public:
    Organization(string n, string a) : name(n), address(a) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Organization Name : " << name << endl;
        cout << " Address : " << address << endl;
    }
};

class Bank : public Organization
{
private:
    string bankType;

public:
    Bank(string n, string a, string type) : Organization(n, a), bankType(type) {}

    void displayBankInfo()
    {
        displayInfo();
        cout << " Bank Type : " << bankType << endl;
    }
};

class School : public Organization
{
private:
    int studentCount;

public:
    School(string n, string a, int count) : Organization(n, a), studentCount(count) {}

    void displaySchoolInfo()
    {
        displayInfo();
        cout << " Student Count : " << studentCount << endl;
    }
};

int main()
{
    Organization organization("Iqbolshoh Dev", "Samarkand city");
    organization.displayInfo();
    Bank bank("National Bank", " Samarkand, Bulvard St", "National");
    bank.displayBankInfo();
    School school("33 - School", "Samarkand district, Ravanak St", 500);
    school.displaySchoolInfo();

    return 0;
}
