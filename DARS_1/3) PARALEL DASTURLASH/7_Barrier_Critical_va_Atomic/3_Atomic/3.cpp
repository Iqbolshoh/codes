#include <omp.h>
#include <iostream>

using namespace std;

int main() {
    #pragma omp parallel num_threads(4)
    {
        #pragma omp atomic
        cout << "Sodda dastur " << omp_get_thread_num() << endl;
    }

    return 0;
}
