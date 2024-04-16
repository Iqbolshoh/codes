// #include "mpi.h"
// #include <iostream>

// using namespace std;

// int main(int argc, char *argv[])
// {
//     MPI_Init(&argc, &argv);
//     cout << "Iqbolshoh_777" << endl;
//     MPI_Finalize();

//     return 0;
// }

// #include "mpi.h"
// #include <iostream>

// using namespace std;

// int main(int argc, char *argv[])
// {
//     int n = 0;
//     if(n == 0)
//     {
//         MPI_Init(&argc, &argv);
//         n = 777;
//         cout << " N = " << n << endl;
//     }
//     MPI_Finalize();

//     return 0;
// }

#include "mpi.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int id, num;
    MPI_Init(&argc, &argv);
    MPI_Comm_size(MPI_COMM_WORLD, &num);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);
    cout << num << " ta Jarayon     ID : " <<id << endl;
    MPI_Finalize();

    return 0;
}