#include <iostream>

using namespace std;

class Company
{
protected:
    string name;
    string model;

public:
    Company(string n, string m) : name(n), model(m) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Company: " << name << endl;
        cout << " Model: " << model << endl;
    }
};

class IPhone : public Company
{
private:
    string iOSVersion;

public:
    IPhone(string n, string m, string iOSVer) : Company(n, m), iOSVersion(iOSVer) {}

    void displayIPhoneInfo()
    {
        displayInfo();
        cout << " iOS Version: " << iOSVersion << endl;
    }
};

class Samsung : public Company
{
private:
    string androidVersion;

public:
    Samsung(string n, string m, string androidVer) : Company(n, m), androidVersion(androidVer) {}

    void displaySamsungInfo()
    {
        displayInfo();
        cout << " Android Version: " << androidVersion << endl;
    }
};

int main()
{
    Company genericCompany("Generic Corp", "Generic Model");
    genericCompany.displayInfo();
    IPhone iphone("Apple", "iPhone 13", "iOS 15");
    iphone.displayIPhoneInfo();
    Samsung samsung("Samsung", "Galaxy S21", "Android 12");
    samsung.displaySamsungInfo();

    return 0;
}
