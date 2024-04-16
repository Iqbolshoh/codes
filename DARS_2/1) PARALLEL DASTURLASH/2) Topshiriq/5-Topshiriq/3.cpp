#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int message_count;
    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    int a[7] = {0};

    if (rank == 2)
    {
        int a[] = {1, 2, 3, 4, 5, 6, 7};
        MPI_Send(a, 7, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }

    if (rank == 7)
    {
        MPI_Probe(2, 1, MPI_COMM_WORLD, &status);
        MPI_Get_count(&status, MPI_INT, &message_count);
        MPI_Recv(a, message_count, MPI_INT, 2, 1, MPI_COMM_WORLD, &status);
    }
    cout << rank << " - Jarayon :  ";
    for (int i = 0; i < message_count; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    MPI_Finalize();
    return 0;
}
