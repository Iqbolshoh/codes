#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
    int c;
    
    #pragma omp parallel for private(c)
    for (int i = 0; i < 10; i++)
    {
        c = 0;
        c++;
        cout << "Thread " << omp_get_thread_num() << ": C = " << c << endl;
    }

    return 0;
}
