#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[])
{
    int rank;
    int a = 18, b = 2005;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank == 2)
    {
        a = 18;
        cout << "2 - rank yuborilgan qiymat a = " << a << endl;
        MPI_Sendrecv(&a, 1, MPI_INT, 11, 4, &b, 1, MPI_INT, 11, 3, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        cout << "2 - rankga qabul qilingan a = " << b << endl;
    }
    if (rank == 11)
    {
        b = 2005;
        cout << "11 - rank yuborilgan qiymat b = " << b << endl;
        MPI_Sendrecv(&b, 1, MPI_INT, 2, 3, &a, 1, MPI_INT, 2, 4, MPI_COMM_WORLD, MPI_STATUS_IGNORE);
        cout << "11 - rankga qabul qilingan b = " << a << endl;
    }

    MPI_Finalize();
    return 0;
}

// 11-jarayondan 2- jarayonga tug’ilgan yilingizni 3chi teg orqali jo’nating va
// 2-jarayondan 11- jarayonga yoshingizni 4chi teg orqali jo’nating va qabul qilingan
// malumotlarni ekranga chiqaring. Dasturda Sendrecv funksiyasidan foydalaning.
