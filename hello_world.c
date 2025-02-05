#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int rank, size;

    // Initialize MPI
    MPI_Init(&argc, &argv);

    // Get the rank and size of the communicator
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);

    // Print a message from each process
    printf("Hello, World! I am process %d out of %d\n", rank, size);

    // Finalize MPI
    MPI_Finalize();

    return 0;
}
