#include <iostream>

using namespace std;

int main()
{
    int w;
    cin >> w;
    w > 2 && w % 2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}
