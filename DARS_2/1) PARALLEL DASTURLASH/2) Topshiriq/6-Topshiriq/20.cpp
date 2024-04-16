#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    double a = 0;
    int b = 0;
    char c = '0';
    float d = 0;
    long long e = 0;
    short f = 0;
    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Request request;

    if (rank == 2)
    {
        a = 0.1111;
        MPI_Isend(&a, 1, MPI_DOUBLE, 7, 11, MPI_COMM_WORLD, &request);

        MPI_Irecv(&b, 1, MPI_INT, 7, 22, MPI_COMM_WORLD, &request);
        MPI_Irecv(&c, 1, MPI_CHAR, 7, 33, MPI_COMM_WORLD, &request);
        MPI_Irecv(&d, 1, MPI_FLOAT, 7, 44, MPI_COMM_WORLD, &request);
        MPI_Irecv(&e, 1, MPI_LONG_LONG, 7, 55, MPI_COMM_WORLD, &request);
        MPI_Irecv(&f, 1, MPI_SHORT, 7, 66, MPI_COMM_WORLD, &request);
    }
    if (rank == 7)
    {
        MPI_Irecv(&a, 1, MPI_DOUBLE, 2, 11, MPI_COMM_WORLD, &request);
        MPI_Wait(&request, &status);

        b = 111, c = 'S', d = 0.5, e = 99999999999, f = 5;

        MPI_Isend(&b, 1, MPI_INT, 2, 22, MPI_COMM_WORLD, &request);
        MPI_Isend(&c, 1, MPI_CHAR, 2, 33, MPI_COMM_WORLD, &request);
        MPI_Isend(&d, 1, MPI_FLOAT, 2, 44, MPI_COMM_WORLD, &request);
        MPI_Isend(&e, 1, MPI_LONG_LONG, 2, 55, MPI_COMM_WORLD, &request);
        MPI_Isend(&f, 1, MPI_SHORT, 2, 66, MPI_COMM_WORLD, &request);
    }

    cout << rank << " - Jarayon : a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << " f = " << f << endl;
    MPI_Finalize();
    return 0;
}
