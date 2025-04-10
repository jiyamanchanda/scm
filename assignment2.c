#include <stdio.h>

void printDiamond(int n) {
    int i, j;
    
    for(i = 1; i <= n; i += 2) {
        for(j = 1; j <= (n - i) / 2; j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    for(i = n - 2; i >= 1; i -= 2) {
        for(j = 1; j <= (n - i) / 2; j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter an odd number for the diamond height: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number!\n");
    } else {
        printDiamond(n);
    }

    return 0;
}
