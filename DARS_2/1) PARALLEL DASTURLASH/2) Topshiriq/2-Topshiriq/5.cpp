#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int flag = 0;
    MPI_Initialized(&flag);

    if (flag == 0)
    {
        MPI_Init(&argc, &argv);

        char processor_name[MPI_MAX_PROCESSOR_NAME];
        int name_len;
        MPI_Get_processor_name(processor_name, &name_len);

        cout << "Salom, " << processor_name << endl;

        MPI_Initialized(&flag);
        if (flag == 1)
        {
            cout << "MPI ishlayapti." << endl;
        }
    }

    MPI_Finalize();
    return 0;
}
