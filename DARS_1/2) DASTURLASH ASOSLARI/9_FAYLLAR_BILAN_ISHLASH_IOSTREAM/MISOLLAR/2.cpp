#include <iostream>
#include <fstream>

using namespace std;

int EKUK(int a, int b)
{
    int ekuk = 1;
    for (int i = 1; i <= a and i <= b; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            ekuk = i;
        }
    }
    return (a * b) / ekuk;
}

int main()
{
    int n, m;
    ofstream file("EKUK.txt");
    for (int i = 1; i <= 10; i++)
    {
        cout << " N" << i << " = ";
        cin >> n;
        cout << " M" << i << " = ";
        cin >> m;
        file << " EKUK (" << n << "," << m << ") = ";
        file << EKUK(n, m) << endl;
    }
    file.close();
    return 0;
}