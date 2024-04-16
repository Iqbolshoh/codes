#include <iostream>

using namespace std;

int main()
{
    int v1, v2, S;
    float t;
    cout << " 1 - mashina tezligi = ";
    cin >> v1;
    cout << " 2 - mashina tezligi = ";
    cin >> v2;
    cout << " Vaqtni kiriting = ";
    cin >> t;
    S = (v1 + v2) * t;
    cout << " Mashinlar orasidagi masofa = " << S;
    return 0;
}