#include <iostream>
#include <algorithm>

using namespace std;

class Xodim
{
public:
    int ID;
    float Maosh;

    void Print() const
    {
        cout << " ID = " << ID << " Maosh = " << Maosh << endl;
    }
};
bool operator<(const Xodim &a, const Xodim &b)
{
    return a.Maosh < b.Maosh;
}

int main()
{
    const int size = 3;
    Xodim xodimlar[size];

    for (int i = 0; i < size; ++i)
    {
        cout << i + 1 << " - Xodim ID va maoshni kiriting: ";
        cin >> xodimlar[i].ID >> xodimlar[i].Maosh;
    }

    cout << "Saralashdan oldin:" << endl;
    for (const Xodim &xodim : xodimlar)
    {
        xodim.Print();
    }

    sort(xodimlar, xodimlar + size);

    cout << "Saralashdan so'ng:" << endl;
    for (const Xodim &xodim : xodimlar)
    {
        xodim.Print();
    }

    return 0;
}
