#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int a = 0, b = 0;

    MPI_Status status, source;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 1)
    {
        a = 55;
        MPI_Send(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }
    if (rank == 2)
    {
        b = 77;
        MPI_Send(&b, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }
    if (rank == 7)
    {
        MPI_Probe(MPI_ANY_SOURCE, 1, MPI_COMM_WORLD, &source);

        if (source.MPI_SOURCE == 1)
        {
            MPI_Recv(&a, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &status);
            MPI_Recv(&b, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &status);
        }

        if (source.MPI_SOURCE == 2)
        {
            MPI_Recv(&b, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &status);
            MPI_Recv(&a, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &status);
        }
    }

    cout << rank << " - Jarayon :  a = " << a << " b = " << b << endl;
    MPI_Finalize();
    return 0;
}
