#include <iostream>
#include <math.h>

using namespace std;

class User
{
private:
    int day;
    int month;
    int year;
    string name;
    string surname;

public:
    User(int day, int month, int year, string name, string surname)
    {
        this->day = day;
        this->month = month;
        this->year = year;
        this->name = name;
        this->surname = surname;
        func(day, month, year, name, surname);
    }
    void func(int day, int month, int year, string name, string surname)
    {
        cout << " Name : " << name << endl;
        cout << " surname : " << surname << endl;
        cout << " " << day << "." << month << "." << year << endl;
        cout << " Tugilgan fasl : ";
        if (month == 1 or month == 12 or month == 2)
        {
            cout << " Qish oyi ";
        }
        if (month == 3 or month == 4 or month == 5)
        {
            cout << " Bahor oyi ";
        }
        if (month == 6 or month == 7 or month == 8)
        {
            cout << " Yoz oyi ";
        }
        if (month == 9 or month == 10 or month == 11)
        {
            cout << " Kuz oyi ";
        }
    }
};

int main()
{
    User obj(20, 4, 2005, "Iqbolshoh", "Ilhomjonov");
    return 0;
}
