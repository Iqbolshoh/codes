#include <iostream>
#include <stdexcept>

using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

int CalculateAge(const Date &birthdate, const Date &currentdate)
{
    int age = currentdate.year - birthdate.year;
    if (currentdate.month < birthdate.month ||
        (currentdate.month == birthdate.month && currentdate.day < birthdate.day))
    {
        age--;
    }
    return age;
}

int CalculateMonths(const Date &birthdate, const Date &currentdate)
{
    int months = (currentdate.year - birthdate.year) * 12 + (currentdate.month - birthdate.month);
    if (currentdate.day < birthdate.day)
    {
        months--;
    }
    return months;
}

int main()
{
    Date birthdate, currentdate;

    cout << "Insonning tug'ilgan sanasini kiritish:\n";
    cout << "Yil: ";
    cin >> birthdate.year;
    cout << "Oy: ";
    cin >> birthdate.month;
    cout << "Kun: ";
    cin >> birthdate.day;

    cout << "\nJoriy sana (Yil Oy Kun):\n";
    cin >> currentdate.year >> currentdate.month >> currentdate.day;

    try
    {
        int age = CalculateAge(birthdate, currentdate);
        int months = CalculateMonths(birthdate, currentdate);

        cout << "\nInson " << age << " yoshda.\n";
        cout << "Inson " << months << " oydan beri yashayapti.\n";
    }
    catch (const exception &e)
    {
        cout << "Xatolik: " << e.what() << endl;
    }

    return 0;
}
