#include <iostream>

using namespace std;

void tekshir(int kun, int oy)
{
    if (kun < 1 || kun > 31 || oy < 1 || oy > 12)
    {
        throw invalid_argument("Noto'g'ri san kiritildi!");
    }
}

int main()
{
    int kun, oy;
    cout << "Kunni kiriting (1-31): ";
    cin >> kun;
    cout << "Oy ni kiriting (1-12): ";
    cin >> oy;

    try
    {
        tekshir(kun, oy);
        cout << "Kiritilgan sanlar to'g'ri!" << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xato: " << e.what() << endl;
    }

    return 0;
}
