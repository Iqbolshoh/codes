#include <iostream>
#include <thread>

using namespace std;

void func(string a)
{
    cout << a << endl;
}

int main()
{
    string a, b, c;

    cout << " 1 - str = ";
    cin >> a;

    cout << " 2 - str = ";
    cin >> b;

    cout << " 3 - str = ";
    cin >> c;

    thread t1(func, a);
    t1.join();
    thread t2(func, b);
    t2.join();
    thread t3(func, c);
    t3.join();
    return 0;
}