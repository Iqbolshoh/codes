#include <iostream>
#include <thread>

using namespace std;

string func(string str)
{
    return str + " Iqbolshoh ";
}

int main()
{
    string a, b, c;

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
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
