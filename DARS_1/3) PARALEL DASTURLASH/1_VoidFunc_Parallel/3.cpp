#include <iostream>
#include <thread>

using namespace std;

void func(int a, int b)
{
    cout << " a = " << a << "  " << " b = " << b << " bo'ganda " << endl;

    for (int i = a; i <= b; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int a1, b1, a2, b2, a3, b3;

    cout << " a1 = ";
    cin >> a1;

    cout << " b1 = ";
    cin >> b1;

    cout << " a2 = ";
    cin >> a2;

    cout << " b2 = ";
    cin >> b2;

    cout << " a3 = ";
    cin >> a3;

    cout << " b3 = ";
    cin >> b3;

    thread t1(func, a1, b1);
    thread t2(func, a2, b2);
    thread t3(func, a3, b3);
    t1.join();
    t2.join();
    t3.join();
    return 0;
}