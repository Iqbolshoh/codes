#include <omp.h>
#include <iostream>

using namespace std;

int main() {
    int c = 0;

    #pragma omp parallel num_threads(9)
    {
        #pragma omp atomic
        c++;
    }

    cout << "Natija: " << c << endl;

    return 0;
}
