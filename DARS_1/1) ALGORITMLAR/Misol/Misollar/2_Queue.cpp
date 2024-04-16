#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q; // Queue yaratish

    // empty() - Queue bo'shligini tekshirish
    if (q.empty())
    {
        cout << "Queue bo'sh" << endl;
    }
    else
    {
        cout << "Queue bo'sh emas" << endl;
    }

    // size() - Queuening o'lchamini olish
    cout << "Queuening o'lchami: " << q.size() << endl;

    // push() - Elementni ohiriga qo'shish
    q.push(1);
    q.push(2);
    q.push(3);

    // size() - Queuening yangi o'lchamini olish
    cout << "Queuening yangi o'lchami: " << q.size() << endl;

    // front() - Eng oldagi elementni o'qish
    cout << "Eng oldagi element: " << q.front() << endl;

    // back() - Eng ohiridagi elementni o'qish
    cout << "Eng ohiridagi element: " << q.back() << endl;

    // pop() - Eng oldagi elementni o'chirish
    q.pop();

    // front() - Yangi eng oldagi elementni o'qish
    cout << "Yangi eng oldagi element: " << q.front() << endl;

    // back() - Yangi eng ohiridagi elementni o'qish
    cout << "Yangi eng ohiridagi element: " << q.back() << endl;

    // empty() - Queue bo'shligini tekshirish
    if (q.empty())
    {
        cout << "Queue bo'sh" << endl;
    }
    else
    {
        cout << "Queue bo'sh emas" << endl;
    }

    return 0;
}
