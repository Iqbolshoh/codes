#include <iostream>
#include <string>

using namespace std;

string decimal_to_any_base(int decimal_num, int base)
{
    if (base < 2 || base > 16)
        return "Noto'g'ri sanoq sistema";

    string hex_chars = "0123456789ABCDEF";
    string result_num = "";
    while (decimal_num > 0)
    {
        int remainder = decimal_num % base;
        result_num = hex_chars[remainder] + result_num;
        decimal_num /= base;
    }
    return result_num;
}

int main()
{
    int decimal_number, base;
    cin >> decimal_number >> base;

    string result = decimal_to_any_base(decimal_number, base);
    if (result == "")
        cout << 0 << endl;
    else
        cout << result << endl;

    return 0;
}
