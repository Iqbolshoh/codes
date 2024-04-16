#include <iostream>
#include <string>

using namespace std;

class OperationSystem {
protected:
    string osName;

public:
    OperationSystem(string name) : osName(name) {}

    void displayOSInfo() {
        cout << "Operation System: " << osName << endl;
    }
};

class Windows : public OperationSystem {
public:
    Windows(string name) : OperationSystem(name) {}

    void displayWindowsInfo() {
        displayOSInfo();
        cout << "Windows Version: " << osName << endl;
    }
};

class WindowsXP : public Windows {
public:
    WindowsXP() : Windows("Windows XP") {}

    void additionalMethod() {
        cout << "Additional method specific to Windows XP" << endl;
    }
};

class Windows7 : public Windows {
public:
    Windows7() : Windows("Windows 7") {}

    void additionalMethod() {
        cout << "Additional method specific to Windows 7" << endl;
    }
};

class Windows8 : public Windows {
public:
    Windows8() : Windows("Windows 8") {}

    void additionalMethod() {
        cout << "Additional method specific to Windows 8" << endl;
    }
};

class Windows10 : public Windows {
public:
    Windows10() : Windows("Windows 10") {}

    void additionalMethod() {
        cout << "Additional method specific to Windows 10" << endl;
    }
};

int main() {
    WindowsXP xp;
    xp.displayWindowsInfo();
    xp.additionalMethod();
    
    Windows7 seven;
    seven.displayWindowsInfo();
    seven.additionalMethod();

    Windows8 eight;
    eight.displayWindowsInfo();
    eight.additionalMethod();

    Windows10 ten;
    ten.displayWindowsInfo();
    ten.additionalMethod();

    return 0;
}
