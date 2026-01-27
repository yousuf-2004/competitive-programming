#include <iostream>
#include <vector>

using namespace std;

void findAverageTime(int processes[], int n, int burst_time[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    // 1. Calculate Waiting Time
    wt[0] = 0; // First process doesn't wait
    for (int i = 1; i < n; i++) {
        wt[i] = burst_time[i - 1] + wt[i - 1];
    }

    // 2. Calculate Turnaround Time
    for (int i = 0; i < n; i++) {
        tat[i] = burst_time[i] + wt[i];
    }

    // Display results
    cout << "Process ID | Burst Time | Waiting Time | Turnaround Time" << endl;
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << "    " << processes[i] << "\t\t" << burst_time[i] << "\t\t" 
             << wt[i] << "\t\t" << tat[i] << endl;
    }

    cout << "\nAverage Waiting Time: " << (float)total_wt / n;
    cout << "\nAverage Turnaround Time: " << (float)total_tat / n << endl;
}

int main() {
    // Process IDs
    int processes[] = {1, 2, 3};
    int n = sizeof(processes) / sizeof(processes[0]);

    // Burst time of all processes
    int burst_time[] = {10, 5, 8};

    findAverageTime(processes, n, burst_time);
    return 0;
}