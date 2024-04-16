#include <iostream>

using namespace std;

class A
{

public:
    A()
    {
        cout << " constructor A " << endl;
    };
    ~A()
    {
        cout << " destructor A " << endl;
    };
};

int main()
{
    A a;
    return 0;
}