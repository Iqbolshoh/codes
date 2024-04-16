#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int INIT;
    int rank, size;
    MPI_Initialized(&INIT);

    if (!INIT)
    {
        cout << "MPI Boshlanyapti " << endl;
        MPI_Init(&argc, &argv);
    }

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    cout << size << " ta Jarayon   Jarayon raqami: " << rank << endl;

    MPI_Finalize();
    return 0;
}
