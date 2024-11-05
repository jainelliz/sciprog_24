/*Dynamic memory allocation*/
#include<stdio.h>
#include<stdlib.h>

int *allocatearray(int n);
void fillwithones(int *p, int n);
void printarray(int *p, int n);
void freepointer(int *p);

int main(){

    int size, *array;

    printf("Enter the size of the array:\n");
    if(scanf("%d", &size)!=1){
        printf("Did not enter a number\n");
        return 1;
    }

//allocate memory
    array=allocatearray(size);
//Fill memory with array values
    fillwithones(array, size);
//Print the filled array
    printarray(array, size);
//free the memory
    freepointer(array);

    return 0;

}

/*funciton that takes an integer n as argument and returns a pointer to 
dynamically allocated memory block with of n integers.*/
int *allocatearray(int n){

    return ((int *)malloc(n * sizeof(int)));

}

/*Function that takes a pointer to an array of integers and fills every
 cell of the array with a one.*/ 
void fillwithones(int *p, int n){

    for(int i=0; i<n ; i++){

        p[i]=1;

    }

}

//Function takes the a pointer to an array of integers and prints its elements.
void printarray(int *p, int n){

printf("\n");

    for (int i=0; i<n ; i++){

        printf(" %d ", p[i]);
    
    }
    printf("\n");

}

//function to free allocated memory
void freepointer(int *p){

    free(p);

}