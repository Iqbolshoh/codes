#include <iostream>
#include <thread>
#include <math.h>

using namespace std;

int func(int a)
{
    return a + 1;
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

    thread t1([&](){a = func(a);});
    thread t2([&](){b = func(b);});
    thread t3([&](){c = func(c);});
    t1.join();
    t2.join();
    t3.join();
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;
    return 0;
}
