#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func(const char* v)
{
    unique_lock<mutex> lock(mtx);
    cout << "Vazifa: " << v << ", Thread ID: " << this_thread::get_id() << endl;
}

int main()
{
    const char* v1 = "Vazifa 1";
    const char* v2 = "Vazifa 2";
    const char* v3 = "Vazifa 3";

    thread t1(func, v1);
    thread t2(func, v2);
    thread t3(func, v3);


    t1.join();
    t2.join();
    t3.join();

    return 0;
}
