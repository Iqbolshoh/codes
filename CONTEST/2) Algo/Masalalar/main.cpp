#include <iostream>
#include <cstdint>

using namespace std; 

uint64_t descendingOrder(uint64_t n)
{
    uint64_t k = 0;
    while (n > 0)
    {
        if (k % 10 < n % 10)
            k = (n % 10) * 10;
        else
            k = k * 10 + n % 10;
        n /= 10;
    }
    return k;
}

int main()
{
    uint64_t kirish_son;
    cin >> kirish_son;
    cout << descendingOrder(kirish_son) << endl;
    return 0;
}
