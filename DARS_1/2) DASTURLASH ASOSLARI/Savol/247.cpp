#include <iostream>
#include <fstream>

using namespace std;

struct Kurs
{
    string ism;
    string fam;
    int yosh;
    int ID;
    int baho;
};

int main()
{
    Kurs obj;
    obj.ism = "Iqbolshoh";
    obj.fam = "Ilhomjonov";
    obj.yosh = 18;
    obj.ID = 777;
    obj.baho = 5;

    ofstream file("struct.txt");
    file << "Ism: " << obj.ism << "\n";
    file << "fam: " << obj.fam << "\n";
    file << "yosh: " << obj.yosh << "\n";
    file << "ID: " << obj.ID << "\n";
    file << "baho:" << obj.baho << "\n";
    file.close();
    return 0;
}