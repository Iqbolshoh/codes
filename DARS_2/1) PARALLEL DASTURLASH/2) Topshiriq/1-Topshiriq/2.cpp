// 2 - Dastur

#include "mpi.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n = 0;
    if(n == 0)
    {
        MPI_Init(&argc, &argv);
        n = 777;
        cout << " N = " << n << endl;
    }
    MPI_Finalize();

    return 0;
}

// NATIJA:
