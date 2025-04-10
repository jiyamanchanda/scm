// #include <stdio.h>
// // int sum(int x,int y,int z) {
// //     int d;
// //     d=x+y+z;   //either write the function pehle or define it before . but like the function used in the main should be defined or ////written before
// //     return d;

// // }
// int main () {
//     // int a,b,c,fsum;
//     // scanf("%d %d %d",&a,&b,&c);
//     // fsum=sum(a,b,c);
//     // printf("%d",fsum);
//     // return 0;

//     int a=1;
//     printf ( "%d %d %d\n", a, ++a, a++ ) ;   //okay so the compiler starts from right to left. post decrement so it prints 1 but the value of a have been increased to 2, now 2 to 3, predecrement, so it prints 3 , now a is 3 so it prints 3.


// }


// #include <stdio.h>
// float square (float x) {
//     float y;
//     y=x*x;
//     return y;

// }

// int main () {
//     float a,b;
//     scanf("%f",&a);
//     b=square(a);
//     printf("%f",b);
    
// }

// #include <stdio.h>
// int factorial (int a) {
//     int fact=1;
//     for (int i=1;i<=a;i++) 
    
//     {
//         fact=fact*i;
        
//     }
//     // printf("%d",fact);  //returns an extra integer as it is supposd to return a value;
//     return fact;

// }

// int main (){
//     int loll;
//     scanf("%d",&loll);
//     printf("%d",factorial(loll));
    
// }

//cant return 2 arguments like return (u,v)

// #include <stdio.h>

// int message() {
//     printf("Hello World\n");
//     return 0;     //returning 0 as it is an integer function
//     //but if we use void function we dont need to return anything and we dont have to assign it to a variable
    
// }

// int main () {
// int a;

// a=message();  //oh its a void function so it will not return anything
// printf("%d",a);
    
//     return 0;
    
// }

# include <stdio.h>

void printit(  a,  ch )  //no data type mentioned so it will take it as integer by default, hence error
{
 printf ( "%f %c\n", a, ch ) ;
}

int main( )
{
 float a = 15.5 ;
 char ch = 'C' ;
 printit ( a, ch ) ;
 return 0 ;
}


