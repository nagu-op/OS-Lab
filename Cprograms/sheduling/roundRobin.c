#include <stdio.h>

int main() {
    printf("Enter number of processes: ");
    int limit, quantum;
    scanf("%d", &limit);
    
    printf("Enter time quantum: ");
    scanf("%d", &quantum);
    
    int process[limit], bt[limit], wt[limit], tat[limit], remaining_bt[limit], i;
    
    printf("Enter processes and corresponding burst time:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d %d", &process[i], &bt[i]);
        remaining_bt[i] = bt[i];
    }
    
    int t = 0;
    float tot_wt = 0, tot_tat = 0;
    
    while (1) {
        int done = 1;
        for (i = 0; i < limit; i++) {
            if (remaining_bt[i] > 0) {
                done = 0;
                if (remaining_bt[i] > quantum) {
                    t += quantum;
                    remaining_bt[i] -= quantum;
                } else {
                    t += remaining_bt[i];
                    wt[i] = t - bt[i];
                    remaining_bt[i] = 0;
                }
            }
        }
        if (done == 1)
            break;
    }
    
    for (i = 0; i < limit; i++) {
        tat[i] = bt[i] + wt[i];
        tot_wt += wt[i];
        tot_tat += tat[i];
    }
    
    printf("Process\tBT\tWT\tTAT\n");
    for (i = 0; i < limit; i++) {
        printf("%d\t%d\t%d\t%d\n", process[i], bt[i], wt[i], tat[i]);
    }

    printf("Average WT = %.2f\nAverage TAT = %.2f\n", tot_wt / limit, tot_tat / limit);
    
    return 0;
}
