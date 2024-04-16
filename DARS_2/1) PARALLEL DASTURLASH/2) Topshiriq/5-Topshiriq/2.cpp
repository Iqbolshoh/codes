#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int a = 0;

    MPI_Status status, tag_source;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 1)
    {
        a = 55;
        MPI_Send(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }
    if (rank == 2)
    {
        a = 77;
        MPI_Send(&a, 1, MPI_INT, 7, 2, MPI_COMM_WORLD);
    }
    if (rank == 7)
    {
        MPI_Probe(MPI_ANY_SOURCE, MPI_ANY_TAG, MPI_COMM_WORLD, &tag_source);

        if (tag_source.MPI_TAG == 1 and tag_source.MPI_SOURCE == 1)
        {
            MPI_Recv(&a, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &status);
            MPI_Recv(&a, 1, MPI_INT, 2, 2, MPI_COMM_WORLD, &status);
        }

        if (tag_source.MPI_TAG == 2 and tag_source.MPI_SOURCE == 2)
        {
            MPI_Recv(&a, 1, MPI_INT, 2, 2, MPI_COMM_WORLD, &status);
            MPI_Recv(&a, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &status);
        }
    }

    cout << rank << " - Jarayon :  a = " << a << endl;
    MPI_Finalize();
    return 0;
}
