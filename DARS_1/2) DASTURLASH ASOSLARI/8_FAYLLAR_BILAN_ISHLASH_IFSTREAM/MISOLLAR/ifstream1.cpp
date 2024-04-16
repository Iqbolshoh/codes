#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("Oqish.txt");
    if (file.is_open())
    {
        string qator;
        while (getline(file, qator))
        {
            cout << qator << endl;
        }
        file.close();
    }
    else
    {
        cout << " File ochilmadi!" << endl;
    }

    return 0;
}