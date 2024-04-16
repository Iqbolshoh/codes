#include <iostream>
#include <string>

using namespace std;

class SportClub
{
protected:
    string teamName;
    string coachName;

public:
    SportClub(const string &_teamName, const string &_coachName)
        : teamName(_teamName), coachName(_coachName) {}

    virtual double calculateAnnualPayment() const = 0;
};

class FootballClub : public SportClub
{
private:
    int numberOfPlayers;
    double salaryPerPlayer;

public:
    FootballClub(const string &_teamName, const string &_coachName, int _numberOfPlayers, double _salaryPerPlayer)
        : SportClub(_teamName, _coachName), numberOfPlayers(_numberOfPlayers), salaryPerPlayer(_salaryPerPlayer) {}
    double calculateAnnualPayment() const override
    {
        return numberOfPlayers * salaryPerPlayer;
    }
};

class BasketballClub : public SportClub
{
private:
    int numberOfPlayers;
    double salaryPerPlayer;

public:
    BasketballClub(const string &_teamName, const string &_coachName, int _numberOfPlayers, double _salaryPerPlayer)
        : SportClub(_teamName, _coachName), numberOfPlayers(_numberOfPlayers), salaryPerPlayer(_salaryPerPlayer) {}

    double calculateAnnualPayment() const override
    {
        return numberOfPlayers * salaryPerPlayer;
    }
};

int main()
{
    FootballClub footballTeam("FC Barcelona", "Ronald Koeman", 25, 100000);        // 25 o'yinchi, har biri uchun 100000 dollar
    BasketballClub basketballTeam("Los Angeles Lakers", "Frank Vogel", 15, 80000); // 15 o'yinchi, har biri uchun 80000 dollar

    cout << "Football team annual payment: $" << footballTeam.calculateAnnualPayment() << endl;
    cout << "Basketball team annual payment: $" << basketballTeam.calculateAnnualPayment() << endl;

    return 0;
}
