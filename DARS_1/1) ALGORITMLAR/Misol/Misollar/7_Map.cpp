#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> Map;

    // Element qo'shish
    Map.insert(pair<int, string>(1, "Olma"));
    Map.emplace(2, "Banana");

    // Element o'zgartirish
    Map[1] = "Apelsin";

    // Element o'chirish
    Map.erase(2);

    // Elementlar sonini olish
    cout << "Hajmi: " << Map.size() << endl;

    // Elementlar bo'shligini tekshirish
    if (Map.empty())
    {
        cout << "Map bo'sh" << endl;
    }
    else
    {
        cout << "Map bo'sh emas" << endl;
    }

    // Elementlarni qidirish
    auto it = Map.find(1);
    if (it != Map.end())
    {
        cout << "Topildi: " << it->second << endl;
    }
    else
    {
        cout << "Topilmadi" << endl;
    }

    // Barcha elementlarni chiqarish
    for (const auto &pair : Map)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Barcha elementlarni tozalash
    Map.clear();

    return 0;
}
