#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func(int a)
{

    for (int i = 0; i < a; i++)
    {
        cout << " For1 ";
    }
    cout << endl;

    mtx.lock();
    for (int i = 0; i < a; i++)
    {
        cout << " Mutex ";
    }
    cout << endl;
    mtx.unlock();
    
    cout << " For2 "
    
}
int main()
{
    thread t1(func,7);
    thread t2(func,12);
    thread t3(func,9);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
