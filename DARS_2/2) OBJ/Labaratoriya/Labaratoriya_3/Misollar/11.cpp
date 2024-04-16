#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Fermer sinfi
template <typename T>
class Farmer
{
private:
    string fullName; // FISH -> fullName ga o'zgardi
    T harvestAmount;

public:
    // Konstruktor
    Farmer(string name, T amount) : fullName(name), harvestAmount(amount) {}

    // Getter metodi
    T getHarvestAmount() const
    {
        return harvestAmount;
    }
    string getFullName() const { return fullName; } // fullName() -> getFullName() ga o'zgardi

    template <typename U>
    friend Farmer<U> findMaxHarvest(const vector<Farmer<U>> &farmers);
};

template <typename T>
Farmer<T> findMaxHarvest(const vector<Farmer<T>> &farmers)
{
    Farmer<T> maxFarmer = farmers[0];
    for (const auto &farmer : farmers)
    {
        if (farmer.harvestAmount > maxFarmer.harvestAmount)
        {
            maxFarmer = farmer;
        }
    }
    return maxFarmer;
}

int main()
{
    vector<Farmer<int>> farmers;
    farmers.push_back(Farmer<int>("Alijonov Alisher", 500));   // "Ali" -> "Alijonov Alisher"
    farmers.push_back(Farmer<int>("Valiev Valijon", 600));     // "Vali" -> "Valiev Valijon"
    farmers.push_back(Farmer<int>("Hasanov Hasan", 700));      // "Hasan" -> "Hasanov Hasan"
    farmers.push_back(Farmer<int>("Husanov Husan", 800));      // "Husan" -> "Husanov Husan"
    farmers.push_back(Farmer<int>("Jamshidov Jamshid", 900));  // "Jamshid" -> "Jamshidov Jamshid"
    farmers.push_back(Farmer<int>("Javohirov Javohir", 1000)); // "Javohir" -> "Javohirov Javohir"
    farmers.push_back(Farmer<int>("Odilov Odil", 1100));       // "Odil" -> "Odilov Odil"
    farmers.push_back(Farmer<int>("Nodirov Nodir", 1200));     // "Nodir" -> "Nodirov Nodir"
    farmers.push_back(Farmer<int>("Qodirov Qodir", 1300));     // "Qodir" -> "Qodirov Qodir"
    farmers.push_back(Farmer<int>("Saidov Said", 1400));       // "Said" -> "Saidov Said"

    // Eng ko'p hosil yetishtirgan fermerni topish
    Farmer<int> maxHarvestFarmer = findMaxHarvest(farmers);

    cout << "Eng ko'p hosil yetishtirgan fermer: " << maxHarvestFarmer.getFullName() << " (" << maxHarvestFarmer.getHarvestAmount() << " ton)" << endl;

    return 0;
}
