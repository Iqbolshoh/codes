#include <iostream>
#include <thread>

using namespace std;

void func(string a)
{
    a = " salom " + a;
    cout << a;
    cout << endl;
}

int main()
{
    string a1, a2, a3;

    cout << " a1 = ";
    cin >> a1;

    cout << " a2 = ";
    cin >> a2;

    cout << " a3 = ";
    cin >> a3;

    thread t1(func, a1);
    t1.join();
    thread t2(func, a2);
    t2.join();
    thread t3(func, a3);
    t3.join();
    return 0;
}