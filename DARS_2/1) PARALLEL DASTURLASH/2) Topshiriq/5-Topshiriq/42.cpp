#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int a[5] = {0}, b[3] = {0};
    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 1)
    {
        for (int i = 0; i < 5; i++)
            a[i] = 111;
        MPI_Send(a, 5, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }
    if (rank == 2)
    {
        for (int i = 0; i < 3; i++)
            b[i] = 222;
        MPI_Send(b, 3, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }

    if (rank == 7)
    {
        MPI_Probe(MPI_ANY_SOURCE, 1, MPI_COMM_WORLD, &status);

        if (status.MPI_SOURCE == 1)
        {
            int message_count;
            MPI_Get_count(&status, MPI_INT, &message_count);

            if (message_count == 5)
            {
                MPI_Recv(a, 5, MPI_INT, 1, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            }
            else if (message_count == 3)
            {
                MPI_Recv(b, 3, MPI_INT, 2, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            }
        }

        if (status.MPI_SOURCE == 2)
        {
            int message_count;
            MPI_Get_count(&status, MPI_INT, &message_count);

            if (message_count == 3)
            {
                MPI_Recv(b, 3, MPI_INT, 2, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            }
            else if (message_count == 5)
            {
                MPI_Recv(a, 5, MPI_INT, 1, 1, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
            }
        }
    }

    cout << rank << " - Jarayon : a = ";
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << "   b = ";

    for (int i = 0; i < 3; i++)
        cout << b[i] << " ";
    cout << endl;

    MPI_Finalize();
    return 0;
}
