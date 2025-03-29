#include <iostream>
#include <omp.h>
#include <vector>

#define SIZE 500  // Size of the matrices
#define PRINT_SIZE 5  // Size of the portion to print (e.g., top-left 5x5 section)

// Function to multiply two matrices
void multiply_matrices(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B, std::vector<std::vector<int>>& C) {
    // Parallelize over rows and columns (Students must parallelize both loops not just the outermost loop)
    // Hint: The directive needed can be found on page 4 of the reference guide along with its required clause
    /* your code here */
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print a small portion of the matrix (top-left PRINT_SIZE x PRINT_SIZE)
void print_matrix(const std::vector<std::vector<int>>& mat) {
    for (int i = 0; i < PRINT_SIZE; ++i) {
        for (int j = 0; j < PRINT_SIZE; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Initialize matrices A, B, and C
    std::vector<std::vector<int>> A(SIZE, std::vector<int>(SIZE, 1));  // Matrix A filled with 1s
    std::vector<std::vector<int>> B(SIZE, std::vector<int>(SIZE, 2));  // Matrix B filled with 2s
    std::vector<std::vector<int>> C(SIZE, std::vector<int>(SIZE, 0));  // Result matrix C initialized to 0


     // Print top-left portion of matrices before multiplication
     std::cout << "Matrix A (top-left " << PRINT_SIZE << "x" << PRINT_SIZE << " portion):" << std::endl;
     print_matrix(A);
 
     std::cout << "\nMatrix B (top-left " << PRINT_SIZE << "x" << PRINT_SIZE << " portion):" << std::endl;
     print_matrix(B);
 
    // Start the timer
    // Hint: The function needed can found on page 17 of the reference guide
    double start_time = /* your code here */ ;

    // Multiply the matrices
    multiply_matrices(A, B, C);

    // End the timer
    // Hint: The function needed can found on page 17 of the reference guide
    double end_time = /* your code here */ ; 

     // Print result matrix (top-left portion) after multiplication
     std::cout << "\nResult Matrix C (after multiplication, top-left " << PRINT_SIZE << "x" << PRINT_SIZE << " portion):" << std::endl;
     print_matrix(C);

     // Print time taken for multiplication
    std::cout << "\nMatrix multiplication took " << (end_time - start_time) << " seconds." << std::endl;

    return 0;
}
