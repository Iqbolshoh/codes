#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int a = 0;
    double t0, t1, t2, t3, t4;

    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 1)
    {
        t0 = MPI_Wtime();
        for (int i = 0; i < 10000000; i++)
        {
            a = i;
        }
        t1 = MPI_Wtime();
        cout << " time 1 = " << t1 - t0 << endl;
        MPI_Send(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }
    if (rank == 2)
    {
        t1 = MPI_Wtime();
        for (int i = 10000000; i > 7; i--)
        {
            a = i;
        }
        t2 = MPI_Wtime();
        cout << " time 2 = " << t2 - t1 << endl;
        MPI_Send(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }
    if (rank == 3)
    {
        t2 = MPI_Wtime();
        for (int i = 0; i < 900000000; i += 2)
        {
            a = i;
        }
        t3 = MPI_Wtime();
        cout << " time 3 = " << t3 - t2 << endl;
        MPI_Send(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
    }
    if (rank == 7)
    {
        t3 = MPI_Wtime();
        MPI_Recv(&a, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &status);
        MPI_Recv(&a, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &status);
        MPI_Recv(&a, 1, MPI_INT, 3, 1, MPI_COMM_WORLD, &status);
        for (int i = 0; i < 99999999; i += 1)
        {
            a = i;
        }
        t4 = MPI_Wtime();
        cout << " time 4 = " << t4 - t3 << endl;
    }

    MPI_Finalize();

    return 0;
}
