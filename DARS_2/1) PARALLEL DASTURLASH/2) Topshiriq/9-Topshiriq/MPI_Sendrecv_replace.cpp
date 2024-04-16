#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[])
{
    int rank;
    float a = 0, b = 0;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 2)
    {
        a = 77.7;
        cout << "2 - rank yuborilgan qiymat a = " << a << endl;
        MPI_Sendrecv_replace(&a, 1, MPI_FLOAT, 7, 111, 7, 222, MPI_COMM_WORLD, MPI_STATUSES_IGNORE);
        cout << "2 - rank qabul qilingan a = " << a << endl;
    }
    if (rank == 7)
    {
        b = 55.5;
        cout << "7 - rank yuborilgan qiymat b = " << b << endl;
        MPI_Sendrecv_replace(&b, 1, MPI_FLOAT, 2, 222, 2, 111, MPI_COMM_WORLD, MPI_STATUSES_IGNORE);
        cout << "7 - rank qabul qilingan b = " << b << endl;
    }
    MPI_Finalize();
    return 0;
}
