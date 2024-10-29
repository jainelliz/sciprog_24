#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Initialise functions
double arctanh1(double x, double delta);
double arctanh2(double x);

//Enter main
int main(void){

    //Get delta value from the user
    double delta;
    printf("Please enter a positive real number delta:\n");
    scanf("%lf",&delta);

    //Make sure entered value is postive
    if(delta<0){
        printf("delta cannot be negative\n");
        exit(1);
    }

    //create arrays of 1000 elements to store the values of both functions at each point in x
    int length =1000;
    double tan1[length];
    double tan2[length];

    //compare both functions at each point in [−0.9,0.9]
    int i=0;
    double x=-0.9;
    while(x<=0.9 && i<length){
        tan1[i]=arctanh1(x,delta);
        tan2[i]=arctanh2(x);
        //printf("The difference at x=%lf is %.10lf \n",x,fabs(tan1[i]-tan2[i]));
        printf("The relative difference at x=%lf is %.10lf \n", x, fabs((tan1[i] - tan2[i]) / tan2[i]));
        x+=0.01;
        i++;
    }
    return 0;
}


//function1 to calculate the hyperbolic arc tangent
double arctanh1(double x, double delta){
    double sum=0;
    double element;
    int n=0;
    do{ 
        element = pow (x ,(2*n+1)) / (2*n+1);
        sum += element;
        n++;
    }while(fabs(element)>=delta);
    return sum;
}

//function2 to calculate the hyperbolic arc tangent
double arctanh2(double x){
    return (1.0/2)*(log(1+x) - log(1-x));
}

