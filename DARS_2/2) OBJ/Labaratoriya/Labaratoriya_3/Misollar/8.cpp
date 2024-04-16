#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Books
{
private:
    vector<T> prices;  // Kitob narxlari
    vector<int> ids;   // Kitob id raqamlari
    vector<int> years; // Kitob chop etilgan yillari

public:
    Books(vector<T> p, vector<int> i, vector<int> y) : prices(p), ids(i), years(y) {}

    T ortachaNarx()
    {
        T sum = 0;
        for (T price : prices)
        {
            sum += price;
        }
        return sum / prices.size();
    }

    int yuqoriNarxdanKatta()
    {
        T ortacha = ortachaNarx();
        int count = 0;
        for (T price : prices)
        {
            if (price > ortacha)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    // Kitoblar haqida ma'lumotlar
    vector<double> prices = {50.0, 30.0, 40.0, 60.0, 45.0};
    vector<int> ids = {101, 102, 103, 104, 105};
    vector<int> years = {2020, 2019, 2021, 2020, 2018};

    // Kitoblar sinfiga ma'lumotlarni uzatish
    Books<double> books(prices, ids, years);

    // O'rtacha narxni chiqarish
    cout << "Kitoblar o'rtacha narxi: $" << books.ortachaNarx() << endl;

    // O'rtacha narxdan yuqori kitoblar sonini chiqarish
    cout << "O'rtacha narxdan yuqori kitoblar soni: " << books.yuqoriNarxdanKatta() << endl;

    return 0;
}
