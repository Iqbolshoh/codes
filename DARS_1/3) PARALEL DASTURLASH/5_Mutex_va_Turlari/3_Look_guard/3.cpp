#include <iostream>
#include <thread>

using namespace std;

void func(const string &str)
{
    cout << "vazifa " << str << " boshlash." << endl;
    cout << "vazifa " << str << " tugatish." << endl;
}

int main()
{
    thread t1(func, "vazifa 1");
    thread t2(func, "vazifa 2");
    thread t3(func, "vazifa 3");

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
