#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    float a = 0, b = 0;
    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 2)
    {
        a = 5.5, b = 7.7;
        MPI_Send(&a, 1, MPI_FLOAT, 7, 11, MPI_COMM_WORLD);
        MPI_Send(&b, 1, MPI_FLOAT, 7, 11, MPI_COMM_WORLD);
    }
    if (rank == 7)
    {
        MPI_Recv(&a, 1, MPI_FLOAT, 2, 11, MPI_COMM_WORLD, &status);
        MPI_Recv(&b, 1, MPI_FLOAT, 2, 11, MPI_COMM_WORLD, &status);
    }
    cout << rank << " - Jarayon :   a = " << a << " b = " << b << endl;
    MPI_Finalize();
    return 0;
}
