#include <iostream>

using namespace std;

class User
{
private:
    string name;

public:
    User() : name("Iqbolshoh") {}

    void Print()
    {
        cout << " name : " << name << endl;
    }

    friend User Autentifikatsiya(User &user, string newname);
};

User Autentifikatsiya(User &user, string newname)
{
    if (user.name == newname)
    {
        cout << " Ma'lomot bir xil " << endl;
    }
    else
    {
        cout << " Ma'lumot Bir xil emas " << endl;
    }
}
int main()
{
    User obj1;
    obj1.Print();
    Autentifikatsiya(obj1, "Iqbolshoh");
    return 0;
}