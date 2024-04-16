#include <iostream>
#include <thread>

using namespace std;

void func(int n)
{
    cout <<" n = "<<  n << " bo'ganda " << endl;

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
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