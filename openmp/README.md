# OpenMP Practice Exercises

OpenMP is a parallel programming model for shared-memory systems, and it allows you to easily parallelize your C/C++ programs. We will be using these practice exercises in class to learn how to use openMP.

## Getting Started

To get started with OpenMP, you can begin by running a simple "Hello, World!" program that demonstrates the basic use of OpenMP's parallel directive. This example will show you how to parallelize a simple task using multiple threads. For these exercises we will be using the openmp reference guide found [here](https://www.openmp.org/wp-content/uploads/OpenMP-RefGuide-6.0-OMP60SC24-web.pdf).

### Steps to Run the "Hello, World!":

1. Locate the file named `hello_openmp.cpp` that has been partially implemented for you.

2. Using the reference guide call on the functions needed to complete the program.

3. **Compile the code with OpenMP support**. Navigate to the folder where the code is saved and use the following command to compile:

   ```bash
   g++ -fopenmp -o hello_openmp hello_openmp.cpp
   ```

   This command tells the compiler to enable OpenMP support (`-fopenmp`) and generates an executable file named `hello_openmp`.

4. **Run the compiled program**. Execute the program using the following command:

   ```bash
   ./hello_openmp
   ```

### Expected Output:

You should see something like this:

```
Hello, World! from thread 0
Hello, World! from thread 1
Hello, World! from thread 2
Hello, World! from thread 3
```

(Note: The order of the output may vary each time because the threads are executing in parallel.)

---
### Steps to Run the "Matrix multiplication script":
1. Locate the file named `matrix_mult.cpp` that has been partially implemented for you.

2. Using the reference guide call on the functions needed to complete the program.

3. **Compile the code with OpenMP support**. Navigate to the folder where the code is saved and use the following command to compile:

   ```bash
   g++ -fopenmp -o matrix_mult matrix_mult.cpp
   ```

   This command tells the compiler to enable OpenMP support (`-fopenmp`) and generates an executable file named `matrix_mult`.

4. **Run the compiled program**. Execute the program using the following command:

   ```bash
   ./matrix_mult
   ```

