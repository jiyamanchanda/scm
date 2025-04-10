#ifdef OLD_CODE
#include <stdio.h>
int main () {
printf("hello world");
}

COUNT DIGITS
#include <stdio.h>
int main () {
    int n=3432;
    
    int rem=0;
    while (n>0) {
        rem=rem+1;//keeps adding 1 every time loop runs and loop runs until its zero. niceeee
        n=n/10;

    }
    printf("%d",rem); 
}


#include <stdio.h>
int main () {
    int i;
    for (i=0;i<11;i++) //initiaze, check condition(if true), add it 
    printf("%d",i);
}


#include <stdio.h>
int main () {
    int n;
    int i=2;
    
    for (n=1;n<11;n++) //you have to increment n ki value pehle then multiply it 
    printf("%d\n",n*i);
}

#include <stdio.h>
int main () {
    int n=23456;
    
    int rev=0;  //need value in rev already so need to initialze it 
    int rem;
    while (n>0) {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;

        
    }printf("%d",rev);
}


#include <stdio.h>
int main () {
   int a=5;
   int n;
   int fact =1;
    
    for (n=1;n<=a;n++) 
    fact=fact*n;
    printf("%d",fact);
}

#include <stdio.h>
int main () {
    int n;
    int sum=0;
    for (n=1;n<51;n++) {
        if (n%2==0){
            sum=sum+n;
        }
    }printf("%d",sum);
}

#endif