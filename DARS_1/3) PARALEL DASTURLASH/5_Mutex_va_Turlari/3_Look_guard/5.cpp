#include <iostream>
#include <thread>

using namespace std;

void func(int n)
{
    cout << "Service " << n << " started." << endl;

    switch (n)
    {
    case 1:
        cout << " vazifa 1" << endl;
        break;
    case 2:
        cout << " vazifa 2" << endl;
        break;
    case 3:
        cout << " vazifa 3" << endl;
        break;
    default:
        cout << " ID " << endl;
    }

    cout << " vazifa " << n << " tugadi." << endl;
}

int main()
{
    thread t1(func, 1);
    thread t2(func, 2);
    thread t3(func, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
