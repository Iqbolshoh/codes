#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream file("struct.txt");
    if (file.is_open())
    {
        string qator;
        while(getline(file,qator))
        {
            cout << qator << endl;
        }
    }
    else
    {
        cout << " File ochimadi! ";
    }
    file.close();
    return 0;
}