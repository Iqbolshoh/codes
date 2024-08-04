#include <iostream>

using namespace std;

int main()
{
    int v1, v2, S, s;
    float t;
    cout << " 1 - mashina tezligi = ";
    cin >> v1;
    cout << " 2 - mashina tezligi = ";
    cin >> v2;
    cout << " Mashinlar orasidagi masofa = ";
    cin >> s;
    cout << " Vaqtni kiriting = ";
    cin >> t;
    S = s - (v1 + v2) * t;
    cout << " Qolgan masofa = " << S;
    return 0;
}