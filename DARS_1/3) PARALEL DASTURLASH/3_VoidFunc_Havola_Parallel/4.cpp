#include <iostream>
#include <thread>

using namespace std;

void func(char &ch)
{
    ch = '+';
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

    thread t1(func, ref(a));
    thread t2(func, ref(b));
    thread t3(func, ref(c));
    t1.join();
    t2.join();
    t3.join();
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;
    return 0;
}