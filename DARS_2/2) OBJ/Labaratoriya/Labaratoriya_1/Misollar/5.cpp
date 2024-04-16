#include <iostream>

using namespace std;

class Sportsman
{
protected:
    string name;
    int age;

public:
    Sportsman(string n, int a) : name(n), age(a) {}

    void displayInfo()
    {
        cout << endl;
        cout << " Name : " << name << endl;
        cout << " Age : " << age << endl;
    }
};

class FootballPlayer : public Sportsman
{
private:
    string team;
    int goals;

public:
    FootballPlayer(string n, int a, string t, int g) : Sportsman(n, a), team(t), goals(g) {}

    void displayFootballPlayerInfo()
    {
        displayInfo();
        cout << " Team : " << team << endl;
        cout << " Goals : " << goals << endl;
    }
};

class BasketballPlayer : public Sportsman
{
private:
    float height;
    float weight;

public:
    BasketballPlayer(string n, int a, float h, float w) : Sportsman(n, a), height(h), weight(w) {}
    void displayBasketballPlayerInfo()
    {
        displayInfo();
        cout << " Height : " << height << " cm" << endl;
        cout << " Weight : " << weight << " kg " << endl;
    }
};

int main()
{
    Sportsman sportsman("Iqbolshoh", 18);
    sportsman.displayInfo();
    FootballPlayer FootballPlayer("Ronaldo", 38, "Al-Nassr FC", 20);
    FootballPlayer.displayFootballPlayerInfo();
    BasketballPlayer basketballPlayer("Michael", 60, 198, 89);
    basketballPlayer.displayBasketballPlayerInfo();

    return 0;
}
