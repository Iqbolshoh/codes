#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream cin("input.txt");
    int a;

    vector<int> v;
    while (cin >> a)
    {
        v.push_back(a);
    }

    int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());

    for (int i = mn; i <= mx; i++)
    {
        cout << i << " ";
    }
    return 0;
}
