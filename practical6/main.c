#include<stdio.h>

//Function initialization (from mmlt.c)
void matrixmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main(){
    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];

    //Create values for matrix A
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            A[i][j]=i+j;
        }
    }

    //Create values for matrix B
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            B[i][j]=i-j;
        }
    }

    //Intialising C to 0
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            C[i][j]=0.0;
        }
    }

    //Call matrix multiplication function from mmlt.c
    matrixmult(n, p, q, A, B, C);

    //Matrix A
    printf("Matrix A:\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%3.0lf\t",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Matrix B
    printf("Matrix B:\n\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%3.0lf\t",B[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //Matrix C
    printf("Matrix C:\n\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            printf("%3.0lf\t",C[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;

}