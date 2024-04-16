#include <iostream>

using namespace std;

int main()
{
    int a = 5; // 0101
    int b = 3; // 0011

    int And = a & b; // 0001 ikkalasi ham 1 bo'lsa 1 bo'ladi
    int Or = a | b;  // 0111 bittasi 1 bo'lsa ham 1 bo'ladi
    int Xor = a ^ b; // 0110 ikki xil bit bo'lsa 1 bo'ladi

    cout << " AND: " << And << endl;
    cout << " OR: " << Or << endl;
    cout << " XOR: " << Xor << endl;
    cout << " O'ngga surish: " << (b >> 0) << endl; // o'ngga surish 110
    cout << " Chapga surish: " << (b << 1) << endl; // chapga surish 001
    return 0;
}
