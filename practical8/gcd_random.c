//include custom header file with function declarations
#include "gcd_random.h"

//function definition for iterative GCD
int iterativeGCD(int a, int b){
int temp;
while(b!=0){
temp=b;
b=a%b;
a=temp;
}
return a;
}

//function definition for recursive GCD
int recursiveGCD(int a, int b){
if(b==0){
return a;
}
else{
return(recursiveGCD(b,a%b));
}
}

