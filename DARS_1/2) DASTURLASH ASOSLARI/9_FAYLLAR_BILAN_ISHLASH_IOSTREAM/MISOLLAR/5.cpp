#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    ofstream file("Kvadrad_Kub.text");
    for (int i = 1; i <= 10; i++)
    {
        file << i << " ^ 2 = " << pow(i, 2) << "    " << i << " ^ 3 = " << pow(i, 3) << endl;
    }
    file.close();
    return 0;
}