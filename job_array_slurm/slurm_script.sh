#!/bin/bash
#SBATCH -A trn035
#SBATCH -N 1
#SBATCH -t 0:01:00
#SBATCH --job-name=array_test
#SBATCH --array=1-3
#SBATCH --output=array_output_%A_%a.txt

srun python3 tasks.py $SLURM_ARRAY_TASK_ID
