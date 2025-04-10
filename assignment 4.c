

// #include <stdio.h>

// int main() {
//     int rollno, rem, sum = 0;

//     // Take roll number input
//     printf("Enter roll number: ");
//     scanf("%d", &rollno);

//     // Compute sum of digits
//     while (rollno > 0) {
//         rem = rollno % 10;
//         rollno = rollno / 10;
//         sum = sum + rem;
//     }

//     // If sum > 26, reduce it further
//     if (sum > 26) {
//         int nroll = sum, nsum = 0;

//         while (nroll > 0) {
//             rem = nroll % 10;
//             nroll = nroll / 10;
//             nsum = nsum + rem;
//         }

//         // Convert reduced sum to letter
//         char letter = 'A' + (nsum - 1);
//         printf("Corresponding letter: %c\n", letter);
//     } 
//     else {
//         // Convert sum to letter
//         char letter = 'A' + (sum - 1);
//         printf("Corresponding letter: %c\n", letter);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main () {
// 	float a[4] = {1.11,2.22,3.33,4.44};
// 	int i;
// 	for (i=0;i<=3;i++){
// 		printf("%.2f\t",a[i]);
// 	}
// }

// #include <stdio.h>
// int main () {
//     int n,sum=0;
//     printf("no of entries:");
//     scanf("%d",&n);
//     if (n==0){
//     printf("Invalid Input");
//     printf("%d",sum);}
//     else{
//     for (int i=0;i<n;i++) {
//     int earnings;
//     scanf("%d",&earnings);
//     if(earnings<0)
//      {
//         printf("Error Detected");
//         break;
//     }
//     sum=sum+earnings;
    
   
    
// }
// printf("%d",sum);
// }

// }

// #include <stdio.h>

// int reverseNumber(int num);
// int sumOfNaturalNumbers(int n);
// int isPalindrome(int num);

// int main() {
//     int num;
    
//     printf("Enter a number to reverse: ");
//     scanf("%d", &num);
//     printf("Reversed Number: %d\n", reverseNumber(num));
    
//     printf("\nEnter a number to find the sum of natural numbers: ");
//     scanf("%d", &num);
//     printf("Sum of Natural Numbers from 1 to %d: %d\n", num, sumOfNaturalNumbers(num));
    
//     printf("\nEnter a number to check for palindrome: ");
//     scanf("%d", &num);
//     if (isPalindrome(num))
//         printf("The number %d is a palindrome.\n", num);
//     else
//         printf("The number %d is not a palindrome.\n", num);
    
//     return 0;
// }

// int reverseNumber(int num) {
//     static int rev = 0;
//     if (num == 0) {
//         int temp = rev;
//         rev = 0;
//         return temp;
//     }
//     rev = rev * 10 + num % 10;
//     return reverseNumber(num / 10);
// }

// int sumOfNaturalNumbers(int n) {
//     if (n == 0)
//         return 0;
//     return n + sumOfNaturalNumbers(n - 1);
// }

// int isPalindrome(int num) {
//     return num == reverseNumber(num);
// }


// #include <stdio.h>

// void swapNumbers(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int findLarger(int *a, int *b) {
//     return (*a > *b) ? *a : *b;
// }

// void calculateSumAndProduct(int *a, int *b, int *sum, int *product) {
//     *sum = *a + *b;
//     *product = (*a) * (*b);
// }

// int main() {
//     int num1, num2, sum, product;
    
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
    
//     printf("\nBefore swapping: a = %d, b = %d\n", num1, num2);
//     swapNumbers(&num1, &num2);
//     printf("After swapping: a = %d, b = %d\n", num1, num2);
    
//     printf("\nLarger number is: %d\n", findLarger(&num1, &num2));
    
//     calculateSumAndProduct(&num1, &num2, &sum, &product);
//     printf("Sum = %d, Product = %d\n", sum, product);
    
//     return 0;
// }
