#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> S;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '{')
        {
            S.push(i);
        }
        if (str[i] == '}')
        {
            S.pop();
        }
    }
    if (S.empty())
    {
        cout << " To'gri ";
    }
    else
    {
        cout << " xato ";
    }
    cout << S.top();
    return 0;
}