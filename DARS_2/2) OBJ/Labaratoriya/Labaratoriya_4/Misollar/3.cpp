#include <iostream>

using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public: 
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}
 
    friend ostream &operator<<(ostream &out, const Time &time)
    {
        out << time.hours << " soat " << time.minutes << " daqiqa " << time.seconds << " soniya";
        return out;
    }

    friend istream &operator>>(istream &in, Time &time)
    {
        cout << "Soatni kiriting: ";
        in >> time.hours;
        cout << "Daqiqani kiriting: ";
        in >> time.minutes;
        cout << "Soniyaning kiriting: ";
        in >> time.seconds;
        return in;
    }
};

int main()
{
    Time t;
 
    cin >> t;
 
    cout << "Kiritilgan vaqt: " << t << endl;

    return 0;
}
