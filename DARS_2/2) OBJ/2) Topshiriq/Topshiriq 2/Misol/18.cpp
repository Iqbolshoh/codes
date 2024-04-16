#include <iostream>

using namespace std;

class Xodim
{
private:
    string name;
    int solary;

public:
    Xodim() : name(""), solary(0) {}
    ~Xodim()
    {
        cout << name << " objekti o'chirib tashlandi " << endl;
    }
    void Set(string a, int b)
    {
        name = a;
        solary = b;
    }
    void Print()
    {
        cout << " 1) Nomi: " << name << endl;
        cout << " 2) Maosh: " << solary << "$" << endl;
        cout << endl;
    }
};

int main()
{
    Xodim obj1, obj2;
    obj1.Set("Iqbolshoh", 2500);
    obj2.Set("Azizjon", 1700);
    obj1.Print();
    obj2.Print();
    return 0;
}