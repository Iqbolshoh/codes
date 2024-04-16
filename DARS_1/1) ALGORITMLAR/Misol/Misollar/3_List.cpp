#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> L; // List yaratish

    // empty() - List bo'shligini tekshirish
    if (L.empty())
    {
        cout << "List bo'sh" << endl;
    }
    else
    {
        cout << "List bo'sh emas" << endl;
    }

    // size() - Listning o'lchamini olish
    cout << "Listning o'lchami: " << L.size() << endl;

    // push_back() - Elementni ohiriga qo'shish
    L.push_back(1);
    L.push_back(2);
    L.push_back(3);

    // size() - Listning yangi o'lchamini olish
    cout << "Listning yangi o'lchami: " << L.size() << endl;

    // push_front() - Elementni oldiga qo'shish
    L.push_front(0);

    // size() - Listning yangi o'lchamini olish
    cout << "Listning yangi o'lchami: " << L.size() << endl;

    // front() - Eng oldagi elementni o'qish
    cout << "Eng oldagi element: " << L.front() << endl;

    // back() - Eng ohiridagi elementni o'qish
    cout << "Eng ohiridagi element: " << L.back() << endl;

    // pop_front() - Eng oldagi elementni o'chirish
    L.pop_front();

    // pop_back() - Eng ohiridagi elementni o'chirish
    L.pop_back();

    // front() - Yangi eng oldagi elementni o'qish
    cout << "Yangi eng oldagi element: " << L.front() << endl;

    // back() - Yangi eng ohiridagi elementni o'qish
    cout << "Yangi eng ohiridagi element: " << L.back() << endl;

    // empty() - List bo'shligini tekshirish
    if (L.empty())
    {
        cout << "List bo'sh" << endl;
    }
    else
    {
        cout << "List bo'sh emas" << endl;
    }

    return 0;
}
