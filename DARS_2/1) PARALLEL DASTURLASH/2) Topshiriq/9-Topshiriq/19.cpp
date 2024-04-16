#include <iostream>
#include "mpi.h"

using namespace std;

int main(int argc, char *argv[])
{
    int rank;
    int a = 0, b = 0;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    if (rank == 1)
    {
        a = 777;
        cout << "1 - rank yuborilgan qiymat a = " << a << endl;
        MPI_Sendrecv_replace(&a, 1, MPI_INT, 4, 111, 4, 222, MPI_COMM_WORLD, MPI_STATUSES_IGNORE);
        cout << "1 - rankga qabul qilingan a = " << a << endl;
    }
    if (rank == 4)
    {
        b = 555;
        cout << "4 - rank yuborilgan qiymat b = " << b << endl;
        MPI_Sendrecv_replace(&b, 1, MPI_INT, 1, 222, 1, 111, MPI_COMM_WORLD, MPI_STATUSES_IGNORE);
        cout << "4 - rankga qabul qilingan b = " << b << endl;
    }
    MPI_Finalize();
    return 0;
}

// Quyidagicha dastur tuzing 1- jarayon 4- jarayonga int tipidagi
// ma’lumotni jo’natsin 4- jarayon esa 1- jarayonga boshqa int tipidagi
// ma’lumotni jo’natsin. Har ikkala jarayon ham ma’lumotni qabul qilib,
// olingan ma’lumotni ekranga namoyish qilsin. Har ikkala jarayon ham ma’lumot jo’natish
// va qabul qilishda bitta xotira manzilidan foydalansin. Dasturda xabar almashish uchun MPI_Sendrecv_replace funksiyasidan foydalaning.
