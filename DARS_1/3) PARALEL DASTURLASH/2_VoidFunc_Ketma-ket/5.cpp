#include <iostream>
#include <thread>

using namespace std;

void func(char ch)
{
    cout << " char = " << ch << " ning ACII raqami = ";
    int a = ch;
    cout << a << endl;
}

int main()
{
    char a, b, c;

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