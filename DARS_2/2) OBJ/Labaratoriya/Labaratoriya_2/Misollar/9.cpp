#include <iostream>

using namespace std;

int Aniqlash(int tugilgan_yil, int tugilgan_oy, int bugungi_yil, int bugungi_oy)
{
    int yosh;

    if (bugungi_oy < tugilgan_oy)
    {
        yosh = bugungi_yil - tugilgan_yil - 1;
    }
    else
    {
        yosh = bugungi_yil - tugilgan_yil;
    }

    return yosh;
}

int main()
{
    int tugilgan_yil, tugilgan_oy;
    int bugungi_yil, bugungi_oy;

    cout << "Tug'ilgan yilni kiriting: ";
    cin >> tugilgan_yil;
    cout << "Tug'ilgan oy raqamini kiriting (yanvar - 1, fevral - 2, ... dekabr - 12): ";
    cin >> tugilgan_oy;

    cout << "Bugungi yilni kiriting: ";
    cin >> bugungi_yil;
    cout << "Bugungi oy raqamini kiriting (yanvar - 1, fevral - 2, ... dekabr - 12): ";
    cin >> bugungi_oy;

    int yosh = Aniqlash(tugilgan_yil, tugilgan_oy, bugungi_yil, bugungi_oy);

    cout << "Siz " << yosh << " yoshdasiz." << endl;

    return 0;
}
