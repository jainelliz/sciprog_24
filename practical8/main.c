/*
Euclid's algorithm for iterative and recursive 
gcd calculations of 2 positive numbers
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "gcd_random.h"

int main(){
int a,b;

//Generate 2 random positive integers

srand(time(NULL));//provide seed as current time in sec (as integer)

//random value creation between 1 & 20
a=(rand()%20)+1;
b=(rand()%20)+1;

//call functions via header file
printf("IterativeGCD(%d,%d)=%d\n",a,b,iterativeGCD(a,b));
printf("RecursiveGCD(%d,%d)=%d\n",a,b,recursiveGCD(a,b));

return 0;
}