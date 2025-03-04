import sys

task_id = sys.argv[1]

def task_1():
    # print your name followed by task_id

def task_2():
    # compute sum of numbers from 1 to task_id * 10000
    # print the output

def task_3():
    # implement recursive fibonacci function
    # follow up: 
    #   - print the time it took to run
    #   - try to find the biggest fib number you can compute
    #   - what could you modify in the sbatch script to compute bigger fib numbers?
    #   - if you are feeling fancy try incorporating memoization in the fib function

    def fib(n):
        pass

    print(fib(int(task_id) * 10))


if task_id == "1":
    task_1()

elif task_id == "2":
    task_2()

else:
    task_3()


