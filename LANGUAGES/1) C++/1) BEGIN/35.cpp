#include <iostream>

using namespace std;

int main()
{
    int v1, v2, t1, t2, S;
    cout << " QAYIQ TEZLIGI = ";
    cin >> v1;
    cout << " OQIM TEZLIGI = ";
    cin >> v2;
    cout << " OQIM BO'YICHA HARAKAT VAQT = ";
    cin >> t1;
    cout << " OQIMGA QARSHI HARAKAT VAQTI = ";
    cin >> t2;
    S = (v1 + v2) * t1 + (v1 - v2) * t2;
    cout << " UMUMIY YO'L = " << S;
    return 0;
}