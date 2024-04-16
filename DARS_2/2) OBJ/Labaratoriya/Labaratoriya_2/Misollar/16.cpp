#include <iostream>
#include <cmath>

using namespace std;

double DistanceBetweenPoints(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    cout << "Birinchi nuqtaning x va y koordinatalarini kiriting: ";
    cin >> x1 >> y1;
    cout << "Ikkinchi nuqtaning x va y koordinatalarini kiriting: ";
    cin >> x2 >> y2;

    try {
        double distance = DistanceBetweenPoints(x1, y1, x2, y2);
        cout << "Ikki nuqta orasidagi masofa: " << distance << endl;
    } catch (const exception &e) {
        cout << "Istisno: Ikki nuqta ustma-ustma tushgan. " << e.what() << endl;
    }

    return 0;
}
