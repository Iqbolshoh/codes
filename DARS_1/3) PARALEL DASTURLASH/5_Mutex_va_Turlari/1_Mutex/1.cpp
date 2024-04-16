#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func(int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << " 1 ";
    }
    cout << endl;
    mtx.lock();
    
    for (int i = 0; i < a; i++)
    {
        cout << " Mutex ";
    }
    cout << endl;

    mtx.unlock();
    for (int i = 0; i < a; i++)
    {
        cout << " 2 ";
    }
    cout << endl;
    
}
int main()
{
    int a, b, c;

    cout << " a = ";
    cin >> a;

    cout << " b = ";
    cin >> b;

    cout << " c = ";
    cin >> c;

    thread t1(func,a);
    thread t2(func,b);
    thread t3(func,c);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
