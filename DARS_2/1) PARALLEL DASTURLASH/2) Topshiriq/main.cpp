#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char *argv[])
{
    MPI_Init(&argc, &argv);

    int a;
    int rank;
    MPI_Status status;

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 0)
    {
        a = 777;
        MPI_Send(&a, 1, MPI_INT, 7, 111, MPI_COMM_WORLD);
    }

    if (rank == 7)
    {
        MPI_Recv(&a, 1, MPI_INT, 0, 111, MPI_COMM_WORLD, &status);
        cout << "Received value: " << a << " in process 7." << endl;
    }

    MPI_Finalize();
    return 0;
}
