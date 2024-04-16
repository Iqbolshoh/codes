#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream Matn("struct.txt");

    string matn;
    getline(Matn, matn);
    cout << "Matn rejimida oqilgan ma'lumotlar: " << matn << endl;

    Matn.close();



    fstream Obj("struct.txt");

    string obyekt;
    Obj >> obyekt;
    cout << "Ob'ekt rejimida o'qilgan ma'lumotlar: " << obyekt << endl;

    Obj.close();
    return 0;
}
