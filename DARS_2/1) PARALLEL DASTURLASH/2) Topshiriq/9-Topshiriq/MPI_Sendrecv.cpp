#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[])
{
    double a = 7.7;
    float b = 2.2;
    int rank;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 2)
    {
        a = 7.77;
        MPI_Sendrecv(&a, 1, MPI_DOUBLE, 7, 111, &b, 1, MPI_FLOAT, 7, 222, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        cout << "2 - rank yuborilgan qiymat a = " << a << " qabul qilingan b = " << b << endl;
    }
    if (rank == 7)
    {
        b = 55.5;
        MPI_Sendrecv(&b, 1, MPI_FLOAT, 2, 222, &a, 1, MPI_DOUBLE, 2, 111, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        cout << "7 - rank yuborilgan qiymat b = " << b << " qabul qilingan a = " << a << endl;
    }
    MPI_Finalize();
    return 0;
}
