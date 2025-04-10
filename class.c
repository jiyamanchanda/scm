// #include <stdio.h>
// int main () {
//     int x=50;
//     int *ptr1=&x;
//     int *ptr2=&x;
//     int y = ++*pttr2;
//     printf("%d %d",)
// }

// #include <stdio.h>
// int swap(int *a, int *b ,int *c) {
// 	*b=*a^*b;
// 	*a=*a^*b;
// 	*b=*a^*b;
	
	
// 	printf("inside %d %d %d\n",*a,*b,*c);
// 	return 0;
// }
// int main() {
// 	int a=10;
// 	int b=20;
// 	int c=30;
// 	printf("before %d %d %d\n",a,b,c);
// 	swap(&a,&b,&c);
// 	printf("after %d %d %d\n",a,b,c);
// 	return 0;
// }
 
// #include <stdio.h>
// int main() {
//     int i, size = 5, pos = 1; 
//     int a[] = {10, 20, 30, 5, 6};
//    for(i = pos; i < size - 1; i++) {
//         a[i] = a[i + 1];
// 		}
//     size--;
//     for(i = 0; i < size; i++) {
//         printf("%d\n", a[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, size = 5, pos = 3;
//     int a[] = {10, 20, 30, 40, 50};
//     for (i = pos - 1; i < size - 1; i++) {
//         a[i] = a[i + 1];
//     }
//     size--; 
//     printf("Updated Array: ");
//     for (i = 0; i < size; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// int main () {
//     int found=0,num=200;
//     int a[5] = {10,20,12,13,6};
//     for (int i=0;i<=5;i++) 
//     if (a[i]==num) {
//         printf("element found at index %d",i);
//         found = 1;
//         break;
//     }
// }
// if (found==0) {
//     printf("element not found");
// }
// return 0;

// #include <stdio.h>
// int main () {
//     int found=0, num=6, left=0,right=6;
//     int a[7] = {5,6,10,19,25,32,68};

//     while (left<=right) {
//         int mid = ceil((left+right)/2);
//         if (a[mid]==num)
//         {
//             printf("element found at %d",mid);
//             found =1;
//             break;
//         }
//         if (a[mid]<num)
//     } 
// }

// #include <stdio.h>
// int main() { //bubble sort -> pases=n-1 (here, 6-1=5)
// 	int a[] = {34,69,68,18,81,7};
// 	int i,n,j,temp;
// 	n=sizeof(a)/sizeof(a[0]);
// 	for(i=0;i<n-1;i++) {
// 		for(j=0;j<n-1;j++) {
// 			if(a[j]>a[j+1]) {
// 				temp=a[j];
// 				a[j]=a[j+1];
// 				a[j+1]=temp;
// 			}
// 		}
// 	}
// 	printf("sorted elements\n");
// 	for(i=0;i<n;i++) {
// 		printf("%d ",a[i]);
// 	}
// 	printf("\n");
// 	return 0;
// }

// selection sort 
// #include <stdio.h>
// int main() {
// 	int a[] = {34,69,68,18,81,7};
// 	int i,n,j,temp,min;
// 	n=sizeof(a)/sizeof(a[0]);
// 	for(i=0;i<n-1;i++) {  //for each pass
// 		min=i;
// 		for(j=i+1;j<n;j++) {
// 			if(a[j]<a[min]) {
// 				min=j;
// 			}
// 		}
// 		if(min!=i) {
// 			temp=a[i];
// 			a[i]=a[min];
// 			a[min]=temp;
// 		}
// 	}
// 	printf("sorted elements\n");
// 	for(i=0;i<n;i++) {
// 		printf("%d ",a[i]);
// 	}
// 	printf("\n");
// 	return 0;
// }


// #include <stdio.h>
// int main () {
// 	int a[2][3];
// 	for (int i=0;i<2;i++) {
// 		for (int j=0;j<3;j++) {
// 			scanf("%d",&a[i][j]);
			
// 		}
// 	}
// 	for (int i=0;i<2;i++) {
// 		for (int j=0;j<3;j++) {
// 			printf("%d ",a[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

// #include <stdio.h>
// int main() {
//     int a[2][3], b[2][3], sum[2][3];
//     int i, j;
//     printf("first 2x3 matrix:\n");
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 3; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("second 2x3 matrix:\n");
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 3; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 3; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 3; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int matrix[2][2];
//     int i, j;
//     int isSymmetric = 1;
//     printf("Enter the elements of the 2x2 matrix:\n");
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 2; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Output the matrix
//     printf("The matrix is:\n");
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 2; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     // Check for symmetry
//     for(i = 0; i < 2; i++) {
//         for(j = 0; j < 2; j++) {
//             if(matrix[i][j] != matrix[j][i]) {
//                 isSymmetric = 0;
//                 break;
//             }
//         }
//         if(!isSymmetric) break;
//     }

//     if(isSymmetric)
//         printf("symmetric\n");
//     else
//         printf("not symmetric\n");

//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int m, n;
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &m, &n);
//     int arr[m][n];
//     //Input
//     printf("Enter elements of the 2D array:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     //using bubble sort
//     for (int i = 0; i < m; i++) {
//         for (int pass = 0; pass < n - 1; pass++) {
//             for (int j = 0; j < n - pass - 1; j++) {
//                 if (arr[i][j] > arr[i][j + 1]) {
//                     int temp = arr[i][j];
//                     arr[i][j] = arr[i][j + 1];
//                     arr[i][j + 1] = temp;
//                 }
//             }
//         }
//     }
//     // Output
//     printf("\nSorted 2D array row-wise:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int *ptr = arr;

//     for (int i = 0; i < 5; i++) {
//         printf("%d ", *(ptr + i));
//     }

//     return 0;
// }

#include <stdio.h>
int main () {
    void +
}
