#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    cout << " N = ";
    cin >> n;
    ofstream file("bo'luvchilar.txt");
    file << n << " ning bo'luvchilari: ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            file << i << " ";
        }
    }
    file.close();
}