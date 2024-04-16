#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[])
{
    int rank, size, flag, a = 0, b = 0;
    MPI_Request request;
    MPI_Status status;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 2)
    {
        a = 7, b = 5;
        MPI_Isend(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD, &request);
        MPI_Test(&request, &flag, &status);
        cout << rank << " - Jarayon flag a = " << flag << endl;

        MPI_Isend(&b, 1, MPI_INT, 7, 1, MPI_COMM_WORLD, &request);
    }

    if (rank == 7)
    {
        MPI_Irecv(&a, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &request);
        MPI_Wait(&request, &status);
        MPI_Test(&request, &flag, &status);
        cout << rank << " - Jarayon flag a = " << flag << endl;

        MPI_Irecv(&b, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &request);
        MPI_Wait(&request, &status);
    }

    cout << rank << " - Jarayon : a = " << a << " b = " << b << endl;
    MPI_Finalize();
    return 0;
}
