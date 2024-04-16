#include <iostream>

using namespace std;

void func(int *a)
{
    *a *= 4;
}

int main()
{
    int a;
    cin >> a;
    func(&a);
    cout << " P = " << a << endl;
    return 0;
}