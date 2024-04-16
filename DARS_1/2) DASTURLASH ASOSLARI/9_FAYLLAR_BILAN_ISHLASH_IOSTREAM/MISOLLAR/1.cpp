#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int s = 0;
    for (int i = -49; i < 200; i++)
    {
        if (i % 5 == 0 and i % 8 == 0)
        {
            s += i;
        }
    }
    ofstream file("write.txt");
    file << " S = " << s << endl;
    file.close();
    return 0;
}