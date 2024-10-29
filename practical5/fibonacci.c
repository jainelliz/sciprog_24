#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n){

    int f0=0;
    int f1=1; 
    int f2;
    int i;
    printf("The fibonacci series upto %d terms is given by:\n",n);

    if(n==1){
        printf("%d\n", f0);    
    }
    else{
        printf("%d\n%d\n", f0, f1);

        //We need f2 to f(n-1) calculated via loop:
        for(i=2;i<n;i++){
            f2=f0 + f1;
            f0=f1;
            f1=f2;
            printf("%d\n",f2);
        } 
    }
}

int main(void){
    int n;
    printf("Please enter a postive number n:\n");
    scanf("%d",&n);
    //check if entered number is positive, i.e., negative and 0 not accepted.
    if(n<1){
        printf("n is not positive!\n");
        exit(1);
    }
    fibonacci(n);
    return 0;
}