# MPI Practice Exercises

MPI (Message Passing Interface) is a standardized and portable communication protocol used for parallel programming on distributed memory systems. It allows you to divide tasks among multiple processes that can run on different nodes in a cluster. We will use these practice exercises in class to learn how to write and run MPI programs.

## Getting Started

To get started with MPI, begin by running a simple "Hello, World!" program that demonstrates the basic MPI routines such as MPI_Init, MPI_Comm_rank, and MPI_Comm_size. This example will show you how to launch parallel processes that communicate with each other.

### Steps to Run the "Hello, World!":

1. Find the file named `hello_world.cpp` that has been partially implemented for you.

2. Follow the in-code comments and class instructions to add any missing parts.

3. **Compile the Code with MPI Support**. Navigate to the folder where the code is saved and use the following command to compile:

   ```bash
   mpic++ -o hello_world hello_world.cpp
   ```

   This command uses an MPI-aware compiler to create an executable named hello_world.

4. Submit your SLURM job script using the sbatch command.

### Expected Output:

You should see something like this:

```
Hello world from process 0 out of 4
Hello world from process 1 out of 4
Hello world from process 2 out of 4
Hello world from process 3 out of 4
```

(Note: The order of the output may vary each time because the threads are executing in parallel.)

---