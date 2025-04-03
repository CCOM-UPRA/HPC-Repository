#include <mpi.h>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    MPI_Init(&argc, &argv);

    int world_rank, world_size;
    /* Insert code here*/

    cout << "Hello world from process " << world_rank << " out of " << world_size << endl;

    MPI_Finalize();
    return 0;
}