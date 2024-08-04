#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;
    cout << " a = ";
    cin >> a;
    cout << " b = ";
    cin >> b;
    swap(&a, &b);
    cout << a << " " << b;
    return 0;
}