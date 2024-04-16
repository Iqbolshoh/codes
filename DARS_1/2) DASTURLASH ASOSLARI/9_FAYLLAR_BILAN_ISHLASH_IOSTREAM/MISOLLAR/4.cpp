#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, s = 0;
    cout << " N = ";
    cin >> n;

    ofstream file("muk_Son.txt");

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                s += j;
            }
        }
        if (s == i)
        {
            file << i << " Soni mukkammal son " << i << " = (0";
            for (int j = 1; j < i; j++)
            {
                if (s % j == 0)
                {
                    file << " + " << j;
                }
            }
            file << ")" << endl;
        }
        s = 0;
    }
    file.close();

    return 0;
}