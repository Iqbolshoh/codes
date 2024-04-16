#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> V; // Vector yaratish

    // empty() - Vector bo'shligini tekshirish
    if (V.empty())
    {
        cout << "Vector bo'sh" << endl;
    }
    else
    {
        cout << "Vector bo'sh emas" << endl;
    }

    // size() - Vectorning o'lchamini olish
    cout << "Vectorning o'lchami: " << V.size() << endl;

    // push_back() - Elementni ohiriga qo'shish
    V.push_back(1);
    V.push_back(2);
    V.push_back(3);

    // size() - Vectorning yangi o'lchamini olish
    cout << "Vectorning yangi o'lchami: " << V.size() << endl;

    // at() - Indeks orqali elementni o'qish
    cout << "Elementlar: ";
    for (int i = 0; i < V.size(); ++i)
    {
        cout << V.at(i) << " ";
    }
    cout << endl;

    // front() - Eng oldagi elementni o'qish
    cout << "Eng oldagi element: " << V.front() << endl;

    // back() - Eng ohiridagi elementni o'qish
    cout << "Eng ohiridagi element: " << V.back() << endl;

    // pop_back() - Eng ohiridagi elementni o'chirish
    V.pop_back();

    // size() - Vectorning yangi o'lchamini olish
    cout << "Vectorning yangi o'lchami: " << V.size() << endl;

    // empty() - Vector bo'shligini tekshirish
    if (V.empty())
    {
        cout << "Vector bo'sh" << endl;
    }
    else
    {
        cout << "Vector bo'sh emas" << endl;
    }

    return 0;
}
