#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int a, b;
    MPI_Status status[2];
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    a = 0, b = 0;
    MPI_Request request[2];

    if (rank == 2)
    {
        a = 77, b = 88;
        MPI_Isend(&a, 1, MPI_INT, 7, 11, MPI_COMM_WORLD, &request[0]);
        MPI_Isend(&b, 1, MPI_INT, 7, 11, MPI_COMM_WORLD, &request[1]);
    }
    if (rank == 7)
    {
        MPI_Irecv(&a, 1, MPI_INT, 2, 11, MPI_COMM_WORLD, &request[0]);
        MPI_Wait(&request[0], &status[0]); // Birinchi
        MPI_Irecv(&b, 1, MPI_INT, 2, 11, MPI_COMM_WORLD, &request[1]);
        MPI_Wait(&request[1], &status[1]); // Ikkinchi
    }

    cout << rank << " - Jarayon : " << " a = " << a << " b = " << b << endl;
    MPI_Finalize();
    return 0;
}
