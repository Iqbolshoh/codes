#include <iostream>
#include <string>

using namespace std;
 
class Ministry
{
public: 
    virtual string getMinistryName() const = 0;
};
 
class SportMinistry : public Ministry
{
public: 
    string getMinistryName() const override
    {
        return "Ministry of Sport";
    }
};
 
class EducationMinistry : public Ministry
{
public: 
    string getMinistryName() const override
    {
        return "Ministry of Education";
    }
};

int main()
{ 
    SportMinistry sportMinistry;
    EducationMinistry educationMinistry;
 
    cout << "Sport Ministry: " << sportMinistry.getMinistryName() << endl;
    cout << "Education Ministry: " << educationMinistry.getMinistryName() << endl;

    return 0;
}
