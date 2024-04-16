#include <iostream>
#include <thread>
#include <math.h>

using namespace std;

void func(int a)
{
    cout << a << " ^ 2 = " << pow(a, 2) << endl;
}

int main()
{
    int a, b, c;

    cout << " a = ";
    cin >> a;

    cout << " b = ";
    cin >> b;

    cout << " c = ";
    cin >> c;

    thread t1(func, a);
    t1.join();
    thread t2(func, b);
    t2.join();
    thread t3(func, c);
    t3.join();
    return 0;
}