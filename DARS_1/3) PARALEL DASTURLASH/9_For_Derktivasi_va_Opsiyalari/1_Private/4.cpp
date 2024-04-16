#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    string str;
    
    #pragma omp parallel for private(str)
    for (int i = 0; i < 10; i++)
    {
        str = " Iqbolshoh ";
    
        cout << "Thread " << omp_get_thread_num() << ": STR = " << str<<endl;
    }

    return 0;
}
