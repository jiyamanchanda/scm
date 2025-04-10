// #include <stdio.h>
// #include <unistd.h> 
// int main () {
//     printf("Jiya Manchanda\n");
//     printf("Roll No: 2410990506\n");
//     printf("\n");
//     printf("Process ID: %d\n", getpid());
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("Jiya Manchanda\n");
//     printf("Roll No: 2410990506\n");
//     int n, i;
//     int bt[20], wt[20], tat[20];
//     float avg_wt = 0, avg_tat = 0;

//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     printf("Enter Burst Time for each process:\n");
//     for(i = 0; i < n; i++) {
//         printf("P%d: ", i + 1);
//         scanf("%d", &bt[i]);
//     }

//     wt[0] = 0;

//     for(i = 1; i < n; i++) {
//         wt[i] = wt[i - 1] + bt[i - 1];
//     }

//     for(i = 0; i < n; i++) {
//         tat[i] = bt[i] + wt[i];
//         avg_wt += wt[i];
//         avg_tat += tat[i];
//     }

//     printf("\nProcess\tBT\tWT\tTAT\n");
//     for(i = 0; i < n; i++) {
//         printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
//     }

//     printf("\nAverage Waiting Time: %.2f", avg_wt / n);
//     printf("\nAverage Turnaround Time: %.2f\n", avg_tat / n);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     printf("Jiya Manchanda\n");
// printf("Roll No: 2410990506\n");
//     int n, i, j, bt[20], p[20], pr[20], wt[20], tat[20], temp;
//     float avg_wt = 0, avg_tat = 0;

//     printf("Enter number of processes: ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++) {
//         printf("Enter Burst Time and Priority for Process %d: ", i + 1);
//         scanf("%d %d", &bt[i], &pr[i]);
//         p[i] = i + 1;
//     }

//     for(i = 0; i < n - 1; i++) {
//         for(j = i + 1; j < n; j++) {
//             if(pr[i] > pr[j]) {
//                 temp = pr[i]; pr[i] = pr[j]; pr[j] = temp;
//                 temp = bt[i]; bt[i] = bt[j]; bt[j] = temp;
//                 temp = p[i]; p[i] = p[j]; p[j] = temp;
//             }
//         }
//     }

//     wt[0] = 0;
//     for(i = 1; i < n; i++) {
//         wt[i] = wt[i - 1] + bt[i - 1];
//     }

//     for(i = 0; i < n; i++) {
//         tat[i] = wt[i] + bt[i];
//         avg_wt += wt[i];
//         avg_tat += tat[i];
//     }

//     printf("\nProcess\tBT\tPriority\tWT\tTAT\n");
//     for(i = 0; i < n; i++) {
//         printf("P%d\t%d\t%d\t\t%d\t%d\n", p[i], bt[i], pr[i], wt[i], tat[i]);
//     }

//     printf("\nAverage Waiting Time: %.2f", avg_wt / n);
//     printf("\nAverage Turnaround Time: %.2f\n", avg_tat / n);

//     return 0;
// }

#include <stdio.h>

int main() {

    printf("Jiya Manchanda\n");
    printf("Roll No: 2410990506\n");
    int n, i, j, qt, time = 0, rem_bt[20], bt[20], wt[20] = {0}, tat[20] = {0};
    float avg_wt = 0, avg_tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter Burst Time for each process:\n");
    for(i = 0; i < n; i++) {
        printf("P%d: ", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &qt);

    while(1) {
        int done = 1;
        for(i = 0; i < n; i++) {
            if(rem_bt[i] > 0) {
                done = 0;
                if(rem_bt[i] > qt) {
                    time += qt;
                    rem_bt[i] -= qt;
                } else {
                    time += rem_bt[i];
                    wt[i] = time - bt[i];
                    rem_bt[i] = 0;
                }
            }
        }
        if(done) break;
    }

    for(i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    printf("\nProcess\tBT\tWT\tTAT\n");
    for(i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    printf("\nAverage Waiting Time: %.2f", avg_wt / n);
    printf("\nAverage Turnaround Time: %.2f\n", avg_tat / n);

    return 0;
}