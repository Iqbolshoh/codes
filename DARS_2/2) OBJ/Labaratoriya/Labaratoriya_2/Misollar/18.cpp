#include <iostream>

using namespace std;

string DecimalToBinary(int number)
{
    if (number == 0)
        return "0";
    string binary = "";
    while (number > 0)
    {
        binary = to_string(number % 2) + binary;
        number /= 2;
    }
    return binary;
}

int main()
{
    int number;
    cout << "Ikkilik sanoq sistemasidagi sonni kiriting: ";
    cin >> number;

    try
    {
        if (number < 0 || number > 1)
        {
            throw invalid_argument("Kiritilgan son ikkilik sanoq sistemasiga mos kelmaydi.");
        }

        cout << "Ikkilik sanoq sistemasidagi " << number << " soni " << DecimalToBinary(number) << " ga mos keladi." << endl;
    }
    catch (const invalid_argument &e)
    {
        cout << "Xatolik: " << e.what() << endl;
    }

    return 0;
}
