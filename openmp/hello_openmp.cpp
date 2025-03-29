#include <iostream>
#include <omp.h>

int main() {
    // Set the number of threads
    int num_threads = 4; // You can change this number as needed
    // Hint: The function needed to set the number of threads can be found on page 11 of the reference guide
    /* your code here */


    #pragma omp parallel
    {
        // Get the id of the thread currently being executed
        int thread_id = /* your code here */ ;// Hint: The function needed can be found on page 11 of the reference guide
        std::cout << "Hello, World! from thread " << thread_id << std::endl;
    }

    return 0;
}