#include <iostream>
#include <mpi.h>

using namespace std;

int main(int argc, char **argv)
{
    int a = 0;
    float b = 0;
    int rank, size;
    MPI_Status status, source, Istatus[2];
    MPI_Request request, Irequest[2];
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // 1) Get protsessor name

    int flag, name_len;
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    MPI_Get_processor_name(processor_name, &name_len);
    MPI_Initialized(&flag);
    if (flag == 1 and rank == 0)
        cout << size << " ta Jarayon " << rank << " - Jarayon Salom, " << processor_name << endl;

    // 2) Send, Recv, Probe, Any_Source, Wtime

    if (rank == 1)
    {
        a = 777;
        MPI_Send(&a, 1, MPI_INT, 7, 1, MPI_COMM_WORLD);
        cout << rank << " - Jarayon (Send, Recv, Probe, Any_Source, Wtime) : a = " << a << " b = " << b << endl;
    }
    if (rank == 2)
    {
        b = 55.5;
        double t1, t2;
        t1 = MPI_Wtime();
        int c = 7777777;
        while (c > 0)
        {
            c -= 1;
        }
        MPI_Send(&b, 1, MPI_FLOAT, 7, 1, MPI_COMM_WORLD);
        t2 = MPI_Wtime();
        cout << rank << " - Jarayon (Send, Recv, Probe, Any_Source, Wtime) : b = " << b << " Time = " << t2 - t1 << endl;
    }
    if (rank == 7)
    {
        MPI_Probe(MPI_ANY_SOURCE, 1, MPI_COMM_WORLD, &source);

        if (source.MPI_SOURCE == 1)
        {
            MPI_Recv(&a, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &status);
            MPI_Recv(&b, 1, MPI_FLOAT, 2, 1, MPI_COMM_WORLD, &status);
        }

        if (source.MPI_SOURCE == 2)
        {
            MPI_Recv(&b, 1, MPI_FLOAT, 2, 1, MPI_COMM_WORLD, &status);
            MPI_Recv(&a, 1, MPI_INT, 1, 1, MPI_COMM_WORLD, &status);
        }
        cout << rank << " - Jarayon (Send, Recv, Probe, Any_Source, Wtime) : a = " << a << " b = " << b << endl;
    }

    // 3) Isend, Iresv wait

    if (rank == 3)
    {
        a = 111, b = 22.2;
        MPI_Isend(&a, 1, MPI_INT, 5, 11, MPI_COMM_WORLD, &request);
        MPI_Isend(&b, 1, MPI_FLOAT, 5, 11, MPI_COMM_WORLD, &request);
        cout << rank << " - Jarayon : a = " << a << " b = " << b << endl;
    }
    if (rank == 5)
    {
        MPI_Irecv(&a, 1, MPI_INT, 3, 11, MPI_COMM_WORLD, &request);
        MPI_Irecv(&b, 1, MPI_FLOAT, 3, 11, MPI_COMM_WORLD, &request);
        MPI_Wait(&request, &status);
        cout << rank << " - Jarayon (Isend, Iresv, Wait) : a = " << a << " b = " << b << endl;
    }

    // 4) Isend, Iresv waitall

    if (rank == 3)
    {
        a = 11, b = 2.2;
        MPI_Isend(&a, 1, MPI_INT, 5, 111, MPI_COMM_WORLD, &Irequest[0]);
        MPI_Isend(&b, 1, MPI_FLOAT, 5, 111, MPI_COMM_WORLD, &Irequest[1]);
        cout << rank << " - Jarayon :  a = " << a << " b = " << b << endl;
    }
    if (rank == 5)
    {
        MPI_Irecv(&a, 1, MPI_INT, 3, 111, MPI_COMM_WORLD, &Irequest[0]);
        MPI_Irecv(&b, 1, MPI_FLOAT, 3, 111, MPI_COMM_WORLD, &Irequest[1]);

        MPI_Waitall(2, Irequest, Istatus);
        cout << rank << " - Jarayon (Waitall) :  a = " << a << " b = " << b << endl;
    }

    // 5) Weitany

    if (rank == 2)
    {
        a = 123, b = 123;
        MPI_Isend(&a, 1, MPI_INT, 7, 22, MPI_COMM_WORLD, &Irequest[0]);
        MPI_Isend(&b, 1, MPI_INT, 7, 33, MPI_COMM_WORLD, &Irequest[1]);
        cout << rank << " - Jarayon :  a = " << a << " b = " << b << endl;
    }

    if (rank == 7)
    {
        MPI_Irecv(&a, 1, MPI_INT, 2, 22, MPI_COMM_WORLD, &Irequest[0]);
        MPI_Irecv(&b, 1, MPI_INT, 2, 33, MPI_COMM_WORLD, &Irequest[1]);

        int completed_index;
        MPI_Waitany(2, Irequest, &completed_index, Istatus);
        cout << rank << " - Jarayon (Waitany) :  a = " << a << " b = " << b << endl;
    }

    // 6) Weitsome

    if (rank == 2)
    {
        a = 77, b = 88;
        MPI_Isend(&a, 1, MPI_INT, 7, 222, MPI_COMM_WORLD, &Irequest[0]);
        MPI_Isend(&b, 1, MPI_INT, 7, 222, MPI_COMM_WORLD, &Irequest[1]);
    }
    if (rank == 7)
    {
        int indices[2];
        int completed;
        MPI_Irecv(&a, 1, MPI_INT, 2, 222, MPI_COMM_WORLD, &Irequest[0]);
        MPI_Irecv(&b, 1, MPI_INT, 2, 222, MPI_COMM_WORLD, &Irequest[1]);

        MPI_Waitsome(2, Irequest, &completed, indices, Istatus);
        cout << rank << " - Jarayon (Waitsome) :  a = " << a << " b = " << b << endl;
    }

    MPI_Finalize();
    return 0;
}
