#include <iostream>
#include <math.h>

using namespace std;

void func(int *a, int  *b)
{
    *b = pow(*a,2);
}

int main()
{
    int a,b;
    cin >> a;
    func(&a,&b);
    cout << " a^2  = " << b << endl;
    return 0;
}