#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int flag = 0, rank, size, name_len;
    MPI_Initialized(&flag);

    MPI_Init(&argc, &argv);

    char processor_name[MPI_MAX_PROCESSOR_NAME];
    MPI_Get_processor_name(processor_name, &name_len);

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    cout << "Salom, " << processor_name << "  " << size << " ta Jarayon   Jarayon raqami: " << rank << endl;

    MPI_Finalize();

    return 0;
}
// NATIJA:
