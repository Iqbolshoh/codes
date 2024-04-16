#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func(int a)
{

    mtx.lock();
    for (int i = 0; i < a; i++)
    {
        cout << " Mutex ";
    }
    cout << endl;
    mtx.unlock();

    for (int i = 0; i < a; i++)
    {
        cout << " For ";
    }
    cout << endl;
    
}
int main()
{
    thread t1(func,5);
    thread t2(func,7);
    thread t3(func,9);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
