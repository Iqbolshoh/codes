#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func(float v)
{
    unique_lock<mutex> lock(mtx);
    cout << "Vazifa: " << v << ", Thread ID: " << this_thread::get_id() << endl;
}

int main()
{
    float v1 = 1.23;
    float v2 = 4.56;
    float v3 = 7.89;

    thread t1(func, v1);
    thread t2(func, v2);
    thread t3(func, v3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
