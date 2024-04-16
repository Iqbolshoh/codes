#include <iostream>

using namespace std;

void func(int *a)
{
    cout << " a = " << *a << endl;
    (*a)++;
}
int main()
{
    int n = 7;
    func(&n);
    cout << " n = " << n << endl;
    return 0;
}