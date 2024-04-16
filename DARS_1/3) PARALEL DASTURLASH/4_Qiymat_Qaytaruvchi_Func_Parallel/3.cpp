#include <iostream>
#include <thread>

using namespace std;

char func(char ch)
{
    return ch + 1;
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
