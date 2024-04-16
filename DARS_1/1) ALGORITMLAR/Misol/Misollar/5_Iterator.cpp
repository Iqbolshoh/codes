#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> V;
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);
    V.push_back(4);
    V.push_back(5);

    vector<int>::iterator it;
    for (it = V.begin(); it != V.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
