#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("test.txt");
    string qator;
    while (getline(file, qator))
    {
        cout << qator << endl;
    }
    file.close();
    return 0;
}