#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[] = "a12345";
    char b = 'b';
    int sizeA = strlen(a);
    int sizeB = sizeof(b);

    cout << "Size of a: " << sizeA << endl;
    cout << "Size of b: " << sizeB << endl;
    return 0;
}
