#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class Uchburchak {
private:
    T tomon1, tomon2, tomon3;

public:
    Uchburchak(T t1, T t2, T t3) : tomon1(t1), tomon2(t2), tomon3(t3) {}

    T yuzasi() {
        T s = perimetr() / 2;
        return sqrt(s * (s - tomon1) * (s - tomon2) * (s - tomon3));
    }

    T perimetr() {
        return tomon1 + tomon2 + tomon3;
    }

    T median1() {
        return sqrt((2 * tomon2 * tomon2 + 2 * tomon3 * tomon3 - tomon1 * tomon1) / 4);
    }

    T median2() {
        return sqrt((2 * tomon1 * tomon1 + 2 * tomon3 * tomon3 - tomon2 * tomon2) / 4);
    }

    T median3() {
        return sqrt((2 * tomon1 * tomon1 + 2 * tomon2 * tomon2 - tomon3 * tomon3) / 4);
    }

    T burchak1() {
        return acos((tomon2 * tomon2 + tomon3 * tomon3 - tomon1 * tomon1) / (2 * tomon2 * tomon3)) * 180 / M_PI;
    }

    T burchak2() {
        return acos((tomon1 * tomon1 + tomon3 * tomon3 - tomon2 * tomon2) / (2 * tomon1 * tomon3)) * 180 / M_PI;
    }

    T burchak3() {
        return acos((tomon1 * tomon1 + tomon2 * tomon2 - tomon3 * tomon3) / (2 * tomon1 * tomon2)) * 180 / M_PI;
    }

    T balandlik1() {
        return 2 * yuzasi() / tomon1;
    }

    T balandlik2() {
        return 2 * yuzasi() / tomon2;
    }

    T balandlik3() {
        return 2 * yuzasi() / tomon3;
    }

    T bissektrisa1() {
        return sqrt(tomon1 * tomon2 * (tomon1 + tomon2 + tomon3) * (tomon1 + tomon2 - tomon3)) / (tomon1 + tomon2);
    }

    T bissektrisa2() {
        return sqrt(tomon1 * tomon3 * (tomon1 + tomon2 + tomon3) * (tomon1 + tomon3 - tomon2)) / (tomon1 + tomon3);
    }

    T bissektrisa3() {
        return sqrt(tomon2 * tomon3 * (tomon1 + tomon2 + tomon3) * (tomon2 + tomon3 - tomon1)) / (tomon2 + tomon3);
    }

    T tashqiAylanaRadius() {
        return (tomon1 * tomon2 * tomon3) / (4 * yuzasi());
    }

    T ichkiAylanaRadius() {
        return yuzasi() / (perimetr() / 2);
    }
};

int main() {
    Uchburchak<double> uchburchak(3, 4, 5);

    cout << "Yuzasi: " << uchburchak.yuzasi() << endl;
    cout << "Perimetri: " << uchburchak.perimetr() << endl;
    cout << "1- Median uzunligi: " << uchburchak.median1() << endl;
    cout << "2- Median uzunligi: " << uchburchak.median2() << endl;
    cout << "3- Median uzunligi: " << uchburchak.median3() << endl;
    cout << "A burchagi: " << uchburchak.burchak1() << endl;
    cout << "B burchagi: " << uchburchak.burchak2() << endl;
    cout << "C burchagi: " << uchburchak.burchak3() << endl;
    cout << "1- Balandlik: " << uchburchak.balandlik1() << endl;
    cout << "2- Balandlik: " << uchburchak.balandlik2() << endl;
    cout << "3- Balandlik: " << uchburchak.balandlik3() << endl;
    cout << "1- Bissektrisa: " << uchburchak.bissektrisa1() << endl;
    cout << "2- Bissektrisa: " << uchburchak.bissektrisa2() << endl;
    cout << "3- Bissektrisa: " << uchburchak.bissektrisa3() << endl;
    cout << "Tashqilgan aylana radiusi: " << uchburchak.tashqiAylanaRadius() << endl;
    cout << "Ichki aylana radiusi: " << uchburchak.ichkiAylanaRadius() << endl;

    return 0;
}
