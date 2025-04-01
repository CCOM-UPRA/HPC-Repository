#include <iostream>
#include <omp.h>
#include <cmath>

#define N 100

using namespace std;

// verifies if num is a prime number
bool isPrime(int num)
{
    // your code goes here
    return false;
}

int main()
{
    int primeCount = 0;

    // reduction is used to combine the result of each prime_count in each of the threads at the end
    // think of it sort of like the merge step in merge sort!
#pragma omp parallel for schedule(/*KIND-GOES-HERE*/, /*CHUNK-SIZE-GOES-HERE*/) reduction(+ : primeCount)
    for (int i = 2; i < N; i++)
    {
        if (isPrime(i))
            primeCount++;

        int threadId = omp_get_thread_num();
        cout << "Thread " << threadId << " checked number " << i << endl;
    }

    cout << "Total primes: " << primeCount << endl;
    return 0;
}