#include <iostream>

using namespace std;

class SportClub
{
protected:
    string clubName;
    string location;

public:
    SportClub(string n, string l) : clubName(n), location(l) {}

    void displayClubInfo()
    {
        cout << endl;
        cout << " Club Name : " << clubName << endl;
        cout << " Location : " << location << endl;
    }
    virtual void additionalInfo() {}
};
class FootballClub : public SportClub
{
private:
    string coach;

public:
    FootballClub(string n, string l, string c) : SportClub(n, l), coach(c) {}
    void additionalInfo() override
    {
        cout << " Football Club Coach : " << coach << endl;
    }
};
class BasketballClub : public SportClub
{
private:
    int championships;

public:
    BasketballClub(string n, string l, int c) : SportClub(n, l), championships(c) {}
    void additionalInfo() override
    {
        cout << " Basketball Club Championships : " << championships << endl;
    }
};

int main()
{
    SportClub genericClub("Generic Sports Club", "City Stadium");
    genericClub.displayClubInfo();
    genericClub.additionalInfo();
    FootballClub footballClub("Football Stars", "Football City", "John Doe");
    footballClub.displayClubInfo();
    footballClub.additionalInfo();
    BasketballClub basketballClub("Bouncing Balls", "Basketball Town", 5);
    basketballClub.displayClubInfo();
    basketballClub.additionalInfo();

    return 0;
}
