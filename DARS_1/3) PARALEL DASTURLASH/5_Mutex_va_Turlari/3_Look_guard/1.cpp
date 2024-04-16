#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void func(const string &str)
{
    lock_guard<mutex> lock(mtx);
    cout << str << endl;
}

int main()
{
    thread t1(func, "Salom");
    thread t2(func, "Hello");
    thread t3(func, "Iqbolshoh");

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
