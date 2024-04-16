#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t --) {
        string a,b;
        cin >> a >> b;

        bool  f = 0;
        for(int i = 0; i < a.size();i ++) {
            if(b.find(a[i]) != -1) {
                cout << "YES\n";
                f = 1;
                break;
            }

            if(f == 1) {
                break;
            }
        }

        if(!f) {
            cout << "NO\n";
        }
    }
    return 0;
}