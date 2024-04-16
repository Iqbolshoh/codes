#include <iostream>

using namespace std;

class Odam
{
private:
    int a;

public:
    void Func(int a)
    {
        switch (a)
        {
        case 1:
        case 2:
            cout << " Yomon " << endl;
            break;
        case 3:
            cout << " Qoniqarli " << endl;
            break;
        case 4:
            cout << " Yaxshi " << endl;
            break;
        case 5:
            cout << " Zo'r " << endl;
            break;
            default: 
            cout << " Bunday natija yo'q ";
        }
    }
};

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
    Odam obj1;
    obj1.Func(n);
    return 0;
}