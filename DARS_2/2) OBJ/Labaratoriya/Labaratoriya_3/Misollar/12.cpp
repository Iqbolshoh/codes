#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Contract shablon sinfi
template <typename T>
class Contract
{
private:
    string fullName; // ism, familiya, sharif
    int id;
    T totalAmount; // umumiy to'lanadigan summa

public:
    // Konstruktor
    Contract(string name, int studentId, T amount) : fullName(name), id(studentId), totalAmount(amount) {}

    // Getter metodi
    T getDebtAmount() const
    {
        return totalAmount;
    }
    string getFullName() const { return fullName; }
    int getId() const { return id; }

    // Tashqi funksiya: 10 ta talaba ichidan eng katta qarzdor talabani aniqlash
    friend Contract<T> findMaxDebtor(const vector<Contract<T>> &contracts);
};

// 10 ta talaba ichidan eng katta qarzdor talabani topish
template <typename T>
Contract<T> findMaxDebtor(const vector<Contract<T>> &contracts)
{
    Contract<T> maxDebtor = contracts[0];
    for (const auto &contract : contracts)
    {
        if (contract.totalAmount > maxDebtor.totalAmount)
        {
            maxDebtor = contract;
        }
    }
    return maxDebtor;
}

int main()
{
    vector<Contract<double>> contracts;
    contracts.push_back(Contract<double>("Alijonov Alisher", 1, 50000));   // "Alijonov Alisher", id=1, umumiy summa=50000
    contracts.push_back(Contract<double>("Valiev Valijon", 2, 60000));     // "Valiev Valijon", id=2, umumiy summa=60000
    contracts.push_back(Contract<double>("Hasanov Hasan", 3, 70000));      // "Hasanov Hasan", id=3, umumiy summa=70000
    contracts.push_back(Contract<double>("Husanov Husan", 4, 80000));      // "Husanov Husan", id=4, umumiy summa=80000
    contracts.push_back(Contract<double>("Jamshidov Jamshid", 5, 90000));  // "Jamshidov Jamshid", id=5, umumiy summa=90000
    contracts.push_back(Contract<double>("Javohirov Javohir", 6, 100000)); // "Javohirov Javohir", id=6, umumiy summa=100000
    contracts.push_back(Contract<double>("Odilov Odil", 7, 110000));       // "Odilov Odil", id=7, umumiy summa=110000
    contracts.push_back(Contract<double>("Nodirov Nodir", 8, 120000));     // "Nodirov Nodir", id=8, umumiy summa=120000
    contracts.push_back(Contract<double>("Qodirov Qodir", 9, 130000));     // "Qodirov Qodir", id=9, umumiy summa=130000
    contracts.push_back(Contract<double>("Saidov Said", 10, 140000));      // "Saidov Said", id=10, umumiy summa=140000

    // Eng katta qarzdor talabani topish
    Contract<double> maxDebtor = findMaxDebtor(contracts);

    cout << "Eng katta qarzdor talaba: " << maxDebtor.getFullName() << " (id: " << maxDebtor.getId() << ", Qarz: " << maxDebtor.getDebtAmount() << " so'm)" << endl;

    return 0;
}
