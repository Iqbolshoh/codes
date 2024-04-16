#include <iostream>
#include <stack>

using namespace std;

stack<int> S;

int func(int a)
{
    if (a % 2 == 0)
    {
        S.push(a);
    }
}

int main()
{
    int n, a, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        func(a);
    }
    cout << " C = " << S.size() << endl;
    return 0;
}