#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Contract sinfi
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

// Dekanat sinfi
template <typename T>
class Dekanat
{
private:
    string groupName;  // Guruh nomi
    int studentCount;  // Talaba soni
    int girlsCount;    // Qizlar soni
    int boysCount;     // O'g'illar soni
    string tutorName;  // Tyutor FISH
    int directionCode; // Yo'nalish kodi

    vector<Contract<T>> contracts; // Guruh to'laydigan kontraktlar

public:
    // Konstruktor
    Dekanat(string name, int sCount, int gCount, int bCount, string tName, int code)
        : groupName(name), studentCount(sCount), girlsCount(gCount), boysCount(bCount), tutorName(tName), directionCode(code) {}

    // Metodlar
    void addContract(Contract<T> contract)
    {
        contracts.push_back(contract);
    }

    T calculateTotalDebt() const
    {
        T totalDebt = 0;
        for (const auto &contract : contracts)
        {
            totalDebt += contract.getDebtAmount();
        }
        return totalDebt;
    }

    T calculateAverageScholarship() const
    {
        // Siz istalgan hisoblovni shu funksiya orqali qo'shishingiz mumkin
        // Ushbu misol uchun maqbul bir formulla hisoblov qilamiz
        return 1000; // Masofaviy qiymat
    }
};

int main()
{
    // Dekanat obyektini yaratish
    Dekanat<double> dekanat("B1701", 50, 20, 30, "Abdulloh Abdullaev", 1234);

    // Kontraktlarni qo'shish
    dekanat.addContract(Contract<double>("Alijonov Alisher", 1, 50000));
    dekanat.addContract(Contract<double>("Valiev Valijon", 2, 60000));
    // Qolgan kontraktlar kiritiladi

    // Umumiy qarzni hisoblash
    double totalDebt = dekanat.calculateTotalDebt();

    // O'rtacha bursni hisoblash
    double averageScholarship = dekanat.calculateAverageScholarship();

    // Natijalarni chiqarish
    cout << "Umumiy qarz: " << totalDebt << " so'm" << endl;
    cout << "O'rtacha burs: " << averageScholarship << " so'm" << endl;

    return 0;
}
