#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

recursive_mutex mtx;

void func(int a)
{

    mtx.lock();
    for (int i = 0; i < a; i++)
    {
        cout << " Mutex1 ";
    }
    cout << endl;
    mtx.unlock();

    for (int i = 0; i < a + 2; i ++)
    {
        cout << " For1 ";
    }
    cout << endl;

    mtx.lock();
    for (int i = 0; i < a; i++)
    {
        cout << " Mutex2 ";
    }
    cout << endl;
    mtx.unlock();

    for (int i = 1; i < a * 2; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    thread t1(func, 7);
    thread t2(func, 3);
    thread t3(func, 5);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
