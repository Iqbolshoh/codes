#include <iostream>

using namespace std;
int main()
{
    int i = 1;
    while (i++ > 0)
    {
        int S = 0;
        S += i % 10;
        i /= 10;
        if (S == 19)
        {
            cout << i;
            return 0;
        }
        cout << i << " " << S << endl;
    }
    return 0;
}
