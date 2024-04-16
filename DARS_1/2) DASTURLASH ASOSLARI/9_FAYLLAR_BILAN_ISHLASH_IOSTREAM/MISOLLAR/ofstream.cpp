#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fayl("Yozish.txt"); // Faylni ochish yoki yaratish

        fayl << " Iqbolshoh " << endl;
        fayl << " Iqbolshoh_777 " << endl;

        fayl.close(); // Faylni yopish
        cout << " Matn fayliga yozildi." << endl;

    return 0;
}
