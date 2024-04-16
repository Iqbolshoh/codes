#include <iostream>

using namespace std;

template <typename T>
class Car
{
private:
    T tezlik; // km/soat
    T sarf;   // litr/100 km

public:
    Car(T t, T s) : tezlik(t), sarf(s) {}

    T bosibOtdiMiqdori(T vaqt)
    {
        return tezlik * vaqt;
    }

    T sarflaganYogilgi(T masofa)
    {
        return (masofa / 100) * sarf;
    }
};

int main()
{
    Car<double> car(60, 8);

    double vaqt = 2.5;
    double masofa = car.bosibOtdiMiqdori(vaqt);
    cout << "Ma'lum vaqt asosida bosib o'tgan masofa: " << masofa << " km" << endl;

    double masofa2 = 150;
    double yogilgi = car.sarflaganYogilgi(masofa2);
    cout << "Ma'lum masofa asosida sarflagan yog'ilgi miqdori: " << yogilgi << " litr" << endl;

    return 0;
}
