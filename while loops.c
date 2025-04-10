#ifdef OLD_CODE
#include <stdio.h>
int main () {
    int n=10;
    while (n<11) {
        printf("%d",n);
        n++;
    }
// }

#include <stdio.h>
int main () {
    int i=0;
    while (i<21) {
        if (i%2==0) {
            printf("%d\n",i);
            
        }
        i++; //here because it checks if its even or odd then incremates it
        
        }
    }


#include <stdio.h>
int main () {
    int i=0;
    int sum=0;
    while (i<10) {
        
        sum = sum +i; //first sums
        i++; // then iterates
       
        
    }
    printf("%d",sum); //then prints 
}

#include <stdio.h>
int main () {
    int i=0;
    int sum=0;
    while (i<10) {
        
        sum = sum +i; //sums 
        printf("%d",sum); //then prints
        i++; // then iterates
       
        
    }
    
}


#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int rev=0;
    int rem;
    while (n>0) {
        rem = n%10;
        rev=rev *10 + rem;
        n=n/10; //stores different n again and again
       
    }
    printf("%d",rev);

}


#include <stdio.h>
int main () {
    int hour;
    
    int opay;
    int i=1;
    while (i<=10){
        printf("enter no of hours worked:"); //print and scan statements here becauase we want to run it 10 times 
    scanf("%d",&hour);
    
    if (hour>40) {
        opay=(hour-40)*120;
        
    }
    else {
        opay=0;
    }
printf("%d\n",opay);
i++;
}
    

   

}


#include <stdio.h>
int main () {
    int fact=1;
    int i=1;
    int n;
    scanf("%d",&n);
    while (i<=n) {
        fact=fact*i; //set some value of fact as you need the value here
        i++;

    }
    printf("%d",fact);
}

#include <stdio.h>
int main () {
    int x=4,y,z;
    y=--x;  //pre decrement , first lower the value then saves     x is 4 to 3
    z=x--;// post decrement, first saved then lower the value then      already 3 but now x is 2
    printf("%d %d %d\n",x, y, z);
    return 0;
}


#include <stdio.h>
int main () {
    int x=4,y=3,z;
    z=--x - y;
    printf("%d %d %d\n",x,y,z);
    return 0;

}

#include <stdio.h>
int main () {
    int i;
    while (i=10) {  //assignment operator not a condition check which is then always true so infinite loop
        printf("%d\n",i);
        i=i+1; //it goes to 11 but it keeps getting assigned to 10 when the loop starts
    }
    return 0;
}



#include <stdio.h>
int main () {
    float x=1.1;
    while (x==1.1) {  //no output because 1.1 is actually smth greater than 1.1 and condition was always false
        printf("%f\n",x);
        x=x-0.1;
    }
    return 0;
}
#endif

