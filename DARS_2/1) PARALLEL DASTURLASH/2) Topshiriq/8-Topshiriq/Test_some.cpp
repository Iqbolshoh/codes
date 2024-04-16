#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[])
{
    int rank, index[3], flag, outcount;
    int a = 0, b = 0, c = 0;
    MPI_Request requests[3];s
    MPI_Status statuses;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 2)
    {
        a = 111, b = 222, c = 222;
        MPI_Isend(&a, 1, MPI_INT, 7, 111, MPI_COMM_WORLD, &requests[0]);
        MPI_Isend(&b, 1, MPI_INT, 7, 222, MPI_COMM_WORLD, &requests[1]);
        MPI_Isend(&c, 1, MPI_INT, 7, 333, MPI_COMM_WORLD, &requests[2]);
    }
    if (rank == 7)
    {
        MPI_Irecv(&a, 1, MPI_INT, 2, 111, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(&b, 1, MPI_INT, 2, 222, MPI_COMM_WORLD, &requests[1]);
        MPI_Irecv(&c, 1, MPI_INT, 2, 333, MPI_COMM_WORLD, &requests[2]);
        MPI_Waitsome(3, requests, &outcount, index, &statuses);
        MPI_Testsome(3, requests, &outcount, index, &statuses);
        for (int i = 0; i < outcount; i++)
        {
            cout << " Index = " << index[i] << " outcount = " << outcount << endl;
        }
    }
    cout << rank << " - Jarayon : a = " << a << " b = " << b << " c = " << c << endl;

    MPI_Finalize();
    return 0;
}
