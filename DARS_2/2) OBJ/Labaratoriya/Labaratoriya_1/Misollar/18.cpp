#include <iostream>

using namespace std;

class ElectronDevice
{
protected:
    string deviceType;

public:
    ElectronDevice(string type) : deviceType(type) {}

    void displayDeviceInfo()
    {
        cout << endl;
        cout << " Device Type : " << deviceType << endl;
    }
};

class Computer : public ElectronDevice
{
protected:
    string brand;
    string model;

public:
    Computer(string type, string b, string m) : ElectronDevice(type), brand(b), model(m) {}

    void displayComputerInfo()
    {
        displayDeviceInfo();
        cout << " Brand : " << brand << endl;
        cout << " Model : " << model << endl;
    }
};

class Planshet : public Computer
{
private:
    string screenSize;

public:
    Planshet(string b, string m, string size) : Computer("Tablet", b, m), screenSize(size) {}

    void displayPlanshetInfo()
    {
        displayComputerInfo();
        cout << " Screen Size : " << screenSize << " inches" << endl;
    }
};

class Notebook : public Computer
{
private:
    string processor;

public:
    Notebook(string b, string m, string proc) : Computer("Laptop", b, m), processor(proc) {}

    void displayNotebookInfo()
    {
        displayComputerInfo();
        cout << " Processor : " << processor << endl;
    }
};

class Telephone : public Computer
{
private:
    string operatingSystem;

public:
    Telephone(string b, string m, string os) : Computer("Phone", b, m), operatingSystem(os) {}

    void displayTelephoneInfo()
    {
        displayComputerInfo();
        cout << " Operating System : " << operatingSystem << endl;
    }
};

int main()
{
    Planshet planshet("Samsung", "Galaxy Tab", "10.1");
    planshet.displayPlanshetInfo();
    Notebook notebook("Dell", "Inspiron", "Intel Core i5");
    notebook.displayNotebookInfo();
    Telephone telephone("iPhone", "12 Pro", "iOS");
    telephone.displayTelephoneInfo();

    return 0;
}
