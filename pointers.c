// #include <stdio.h>
// int main () {
// int i=1;
// int *p = &i;

// int *q=p;
//  *q=5;
// printf("%d",p);  //without star it will show the memory adress as its not a pointer now but
// printf("%d",*p); //with star it will show the value at that memory location as now its a pointer  //pointer is value at address



// }

// #include <stdio.h>
// int main () {
//     int a=1;
//     int b=2;
//     int *p=&a;
//     int *q=&b;

// }


#include <stdio.h>
int main()
{ 
int x = 50;
int *ptr1 = &x;
int *ptr2 = &x;
int y = ++*ptr2 ;
printf("%d %d", ++*ptr1, y);
return 0;
} 
