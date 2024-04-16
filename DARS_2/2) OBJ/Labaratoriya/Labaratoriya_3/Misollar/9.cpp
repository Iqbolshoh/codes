#include <iostream>
#include <vector>

using namespace std;

class FootballPlayer
{
private:
    string name;
    int age;
    double salary;
    int goals;

public:
    FootballPlayer(string n, int a, double s, int g) : name(n), age(a), salary(s), goals(g) {}

    // Getter methods
    string getName() const { return name; }
    int getAge() const { return age; }
    double getSalary() const { return salary; }
    int getGoals() const { return goals; }
};

template <typename T>
class FootballClub
{
private:
    vector<FootballPlayer> players;

public:
    FootballClub(vector<FootballPlayer> p) : players(p) {}

    T ortachaMaosh()
    {
        T sum = 0;
        for (const auto &player : players)
        {
            sum += player.getSalary();
        }
        return sum / players.size();
    }

    T ortachaYosh()
    {
        T sum = 0;
        for (const auto &player : players)
        {
            sum += player.getAge();
        }
        return sum / players.size();
    }

    T ortachaGollarSon()
    {
        T sum = 0;
        for (const auto &player : players)
        {
            sum += player.getGoals();
        }
        return sum / players.size();
    }

    void gollarSoniniBaholash()
    {
        int maxGoals = -1;
        double maxSalary = 0;
        string topScorer, highestPayingPlayer;
        for (const auto &player : players)
        {
            if (player.getGoals() > maxGoals)
            {
                maxGoals = player.getGoals();
                topScorer = player.getName();
            }
            if (player.getSalary() > maxSalary)
            {
                maxSalary = player.getSalary();
                highestPayingPlayer = player.getName();
            }
        }
        cout << "Gollari soni eng yuqori bolgan sportchi: " << topScorer << endl;
        cout << "Eng kop maosh oladigan sportchi: " << highestPayingPlayer << endl;
    }
};

int main()
{
    // Oyinchilar haqida maʼlumotlar
    vector<FootballPlayer> players;
    players.push_back(FootballPlayer("John", 25, 5000.0, 10));
    players.push_back(FootballPlayer("Mike", 28, 6000.0, 15));
    players.push_back(FootballPlayer("Alice", 23, 4500.0, 8));

    // Klub haqida maʼlumotlar
    FootballClub<double> club(players);

    cout << "Klubning ortacha maoshi: $" << club.ortachaMaosh() << endl;
    cout << "Klubning ortacha yoshi: " << club.ortachaYosh() << " yil" << endl;
    cout << "Klubning ortacha gollari soni: " << club.ortachaGollarSon() << endl;

    club.gollarSoniniBaholash();

    return 0;
}
