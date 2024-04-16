#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> s; // Stack yaratish

    // empty() - Stack bo'shligini tekshirish
    if (s.empty())
    {
        cout << "Stack bo'sh" << endl;
    }
    else
    {
        cout << "Stack bo'sh emas" << endl;
    }

    // push() - Element qo'shish
    s.push(1);
    s.push(2);
    s.push(3);

    // size() - Stackning o'lchamini olish
    cout << "Stackning o'lchami: " << s.size() << endl;

    // top() - Eng yuqori elementni o'qish
    cout << "Eng yuqori element: " << s.top() << endl;

    // pop() - Eng yuqori elementni o'chirish
    s.pop();

    // top() - Yangi eng yuqori elementni o'qish
    cout << "Eng yuqori element: " << s.top() << endl;

    // empty() - Stack bo'shligini tekshirish
    if (s.empty())
    {
        cout << "Stack bo'sh" << endl;
    }
    else
    {
        cout << "Stack bo'sh emas" << endl;
    }

    return 0;
}
