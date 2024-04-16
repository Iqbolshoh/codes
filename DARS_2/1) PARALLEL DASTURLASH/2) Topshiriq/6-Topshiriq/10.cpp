#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int b;
    double a;
    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    a = 0, b = 0;
    MPI_Request request;

    if (rank == 2)
    {
        a = 0.1111, b = 222;
        MPI_Isend(&a, 1, MPI_DOUBLE, 7, 11, MPI_COMM_WORLD, &request);
        MPI_Isend(&b, 1, MPI_INT, 7, 11, MPI_COMM_WORLD, &request);
    }
    if (rank == 7)
    {
        MPI_Irecv(&a, 1, MPI_DOUBLE, 2, 11, MPI_COMM_WORLD, &request);
        MPI_Irecv(&b, 1, MPI_INT, 2, 11, MPI_COMM_WORLD, &request);
        MPI_Wait(&request, &status);
    }

    cout << rank << " - Jarayon : a = " << a << " b = " << b << endl;
    MPI_Finalize();
    return 0;
}
