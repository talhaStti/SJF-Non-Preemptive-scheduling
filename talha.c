/*os project 
NON Permitive SJFS(shortest job first) */

#include <stdio.h>

// Process structure
struct Process {
    int id;
    int burst_time;
};

// Function to perform SJF scheduling
void sjf_non_preemptive(struct Process processes[], int n) {
    // Sorting the processes based on burst time
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (processes[j].burst_time > processes[j + 1].burst_time) {
                // Swap the processes
                struct Process temp = processes[j];
                processes[j] = processes[j + 1];
                processes[j + 1] = temp;
            }
        }
    }

    // Display the order of execution
    printf("Order of Execution: ");
    for (int i = 0; i < n; i++) {
        printf("P%d ", processes[i].id);
    }
    printf("\n");

    // Calculate waiting time and turnaround time
    int waiting_time = 0;
    int turnaround_time = processes[0].burst_time;
    for (int i = 1; i < n; i++) {
        waiting_time += turnaround_time;
        turnaround_time += processes[i].burst_time;
    }

    // Calculate average waiting time and turnaround time
    float avg_waiting_time = (float)waiting_time / n;
    float avg_turnaround_time = (float)turnaround_time / n;

    // Display average waiting time and turnaround time
    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
}

int main() {
    // Number of processes
    int n;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    // Array to store processes
    struct Process processes[n];

    // Input burst time for each process
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        printf("Enter burst time for process P%d: ", i + 1);
        scanf("%d", &processes[i].burst_time);
    }

    // Perform SJF scheduling
    sjf_non_preemptive(processes, n);

    return 0;
}
