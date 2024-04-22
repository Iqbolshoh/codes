#include <iostream>

using namespace std;

int main()
{
    for (int i = 1000; i <=9999; i++){
        int t = i % 10 * 1000 + i / 10 % 10 * 100 + i / 100 % 10 * 10 + i / 1000;
        if(t*4==i) cout << t << endl;
    }
    return 0;
}
