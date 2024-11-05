#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//function declaration for calculation of factorial
int factorial(int x);

int main(void){
    int i, x_power;
    double estimated_e=1.0, actual_e,*terms;

    actual_e=exp(1.0);

    printf("Enter the required polynomial order\n");

//Check if entered value is a number or not. If not print error.
    if(scanf("%d", &x_power)!=1){
        printf("The provided input is not a number!\n");
        return 1;
    }

//dynamically allocate array of type double
    terms = (double *)malloc(x_power * sizeof(double));

    for(i=0;i<x_power;i++){
//Calculate each term and add to array. Here x=1 so no need to use power
        terms[i]=1.0/(double)factorial(i+1);
        printf("%.16lf\n", terms[i]);

    }

//Find final sum of the terms in the formula
    for (i=0; i < x_power; i++){
        estimated_e+=terms[i];

    }

    free(terms);

//print calculated value and difference with actual e value
    printf("e is estimated as %.10lf, with difference %e\n",estimated_e, actual_e);
    
    return 0;
}

//function definition for calculation of factorial
int factorial(int n){

//factorial of negative numbers not defined
    if(n < 0){
        printf("Factorial is not defined for negative numbers.!\n");
        return (-1);

    }

//factorial of 0 is 1
    else if (n==0){
        return 1;

    }

    else{
        return (n * factorial(n-1));  
    }
}