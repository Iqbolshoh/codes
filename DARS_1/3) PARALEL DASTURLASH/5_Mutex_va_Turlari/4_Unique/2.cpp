#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func(int id)
{
    unique_lock<mutex> lock(mtx);
    cout << "Sodda dastur " << id << ": " << this_thread::get_id() << endl;
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
