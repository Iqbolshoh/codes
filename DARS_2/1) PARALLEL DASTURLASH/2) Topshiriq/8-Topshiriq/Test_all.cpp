#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[])
{
    int rank, size, flag, a = 0, b = 0;
    MPI_Request requests[2];
    MPI_Status statuses[2];

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    if (rank == 2)
    {
        a = 7, b = 5;
        MPI_Isend(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD, &requests[0]);
        MPI_Isend(&b, 1, MPI_INT, 7, 1, MPI_COMM_WORLD, &requests[1]);
    }

    if (rank == 7)
    {
        MPI_Irecv(&a, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &requests[0]);
        MPI_Irecv(&b, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &requests[1]);

        MPI_Testall(2, requests, &flag, statuses);
        if (flag == 0)
        {
            MPI_Waitall(2, requests, statuses);
            MPI_Testall(2, requests, &flag, statuses);
        }
        if (flag == 1)
        {
            cout << " Barcha xabar qabul qilindi " <<endl;
        }
    }
    cout << rank << " - Jarayon : a = " << a << " b = " << b << endl;
    MPI_Finalize();
    return 0;
}
