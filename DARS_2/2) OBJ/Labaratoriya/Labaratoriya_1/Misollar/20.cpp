#include <iostream>
#include <string>

using namespace std;

class OperationSystem
{
protected:
    string osName;

public:
    OperationSystem(string name) : osName(name) {}

    void displayOSInfo()
    {
        cout << "Operation System: " << osName << endl;
    }
};

class Android : public OperationSystem
{
public:
    Android(string name) : OperationSystem(name) {}

    void displayAndroidInfo()
    {
        displayOSInfo();
        cout << "Android Version: " << osName << endl;
    }

    void additionalMethod()
    {
        cout << "Additional method specific to Android" << endl;
    }
};

class IOS : public OperationSystem
{
public:
    IOS(string name) : OperationSystem(name) {}

    void displayIOSInfo()
    {
        displayOSInfo();
        cout << "iOS Version: " << osName << endl;
    }

    void additionalMethod()
    {
        cout << "Additional method specific to iOS" << endl;
    }
};

int main()
{
    Android android("Android 12");
    android.displayAndroidInfo();
    android.additionalMethod();

    IOS ios("iOS 15");
    ios.displayIOSInfo();
    ios.additionalMethod();

    return 0;
}
