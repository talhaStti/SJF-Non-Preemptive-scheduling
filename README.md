# SJF Non-Preemptive Scheduling

This project demonstrates the implementation of **Shortest Job First (SJF)** Non-Preemptive scheduling algorithm in C.

## Description

Shortest Job First (SJF) is a CPU scheduling algorithm where the process with the shortest burst time is executed first. This implementation sorts processes based on their burst times and calculates the **average waiting time** and **average turnaround time**.

## Features

- Accepts burst time for `n` processes as input.
- Displays the execution order of processes.
- Calculates:
  - Average Waiting Time (AWT)
  - Average Turnaround Time (ATAT)

## Files

- `sjf_non_preemptive.c`: Contains the C code for the SJF Non-Preemptive scheduling algorithm.
- `output.txt`: Sample output of the program.

## How to Compile and Run

1. **Compile the Code**:
   Use the following command to compile the code:
   ```bash
   gcc sjf_non_preemptive.c -o sjf_non_preemptive
