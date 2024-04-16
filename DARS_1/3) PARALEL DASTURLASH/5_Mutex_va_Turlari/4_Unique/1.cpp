#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func()
{
    unique_lock<mutex> lock(mtx);
    cout << "Sodda dastur: " << this_thread::get_id() << endl;
}

int main()
{
    thread t1(func);
    thread t2(func);
    thread t3(func);


    t1.join();
    t2.join();
    t3.join();

    return 0;
}
