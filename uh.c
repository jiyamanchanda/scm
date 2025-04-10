// #include <stdio.h>

// int isPrime(int num) {
//     if (num < 2) return 0; 
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0)
//             return 0; 
//     }
//     return 1; 

// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Prime numbers between 1 and %d are: ", n);
//     for (int i = 2; i <= n; i++) {
//         if (isPrime(i))
//             printf("%d ", i);
//     }
    
//     return 0;
// }
// }


// #include <stdio.h>
// int fun () {
//     static int num = 16;

// }

#include <stdio.h>
void fib(int n) {
    static int n1=0,n2=1,n3;
if (n>0) {
    n3=n2+n1;
    n1=n2;
    n2=n3;
    printf("%d",n3);
    fib(n-1);
}

}

int main () [
    int n;
    printf("enter");
    scanf("%d",&n);
    printf("fibonacc")
]