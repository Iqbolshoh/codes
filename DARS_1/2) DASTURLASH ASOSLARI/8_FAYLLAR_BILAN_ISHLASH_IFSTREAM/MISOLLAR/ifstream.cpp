#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fayl("Oqish.txt"); // Faylni ochish

    if (fayl.is_open()) // Fayl muvaffaqiyatli ochilgan bo'lsa
    { 
        string qator;

        while (getline(fayl, qator))
        {
            cout << qator << endl; // Qatorlarni o'qib olish va ekranga chiqarish
        }

        fayl.close(); // Faylni yopish
    }
    else
    {
        cout << "Faylni ochilmadi!" << endl;
    }

    return 0;
}
