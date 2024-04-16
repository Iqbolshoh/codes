#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int rank;
    int a = 0;
    float b = 0;
    double c = 0;
    char d = '0';
    long long e = 0;

    MPI_Status status;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 2)
    {
        a = 777, b = 5.5;
        MPI_Send(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
        MPI_Send(&b, 1, MPI_FLOAT, 7, 2, MPI_COMM_WORLD);

        MPI_Recv(&c, 1, MPI_DOUBLE, 7, 3, MPI_COMM_WORLD, &status);
        MPI_Recv(&d, 1, MPI_CHAR, 7, 4, MPI_COMM_WORLD, &status);
        MPI_Recv(&e, 1, MPI_LONG_LONG, 7, 5, MPI_COMM_WORLD, &status);
    }
    if (rank == 7)
    {
        MPI_Recv(&a, 1, MPI_INT, 2, 1, MPI_COMM_WORLD, &status);
        MPI_Recv(&b, 1, MPI_FLOAT, 2, 2, MPI_COMM_WORLD, &status);

        c = 7.777, d = 'I', e = 11111111111;
        MPI_Send(&c, 1, MPI_DOUBLE, 2, 3, MPI_COMM_WORLD);
        MPI_Send(&d, 1, MPI_CHAR, 2, 4, MPI_COMM_WORLD);
        MPI_Send(&e, 1, MPI_LONG_LONG, 2, 5, MPI_COMM_WORLD);
    }
    cout << rank << " - Jarayon :   a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << endl;
    MPI_Finalize();
    return 0;
}
