// 3 - Dastur

#include "mpi.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int id, num;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &num);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);
    cout << num << " ta Jarayon     ID : " <<id << endl;
    MPI_Finalize();

    return 0;
}

// NATIJA:
