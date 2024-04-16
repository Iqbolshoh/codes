#include <iostream>
#include <thread>

using namespace std;

void func(int n)
{
    cout << " vazifa " << n << " boshlash " << endl;
    cout << " vazifa " << n << " tugatish " << endl;
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
