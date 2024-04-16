#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("text.txt");
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << " File ochilmadi ";
    }
    return 0;
}