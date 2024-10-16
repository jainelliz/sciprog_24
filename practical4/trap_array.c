#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *tan_Array=NULL;
float deg_to_rad(float deg);
float trapezoidal(int N);
float a_deg;
float b_deg;

int main(void) {
    int N = 12;
    a_deg=0.0;
    b_deg=60.0;
    float deg;
    tan_Array=(float*)malloc((N+1)*sizeof(float));

    // Loop counter to generate the degree angles and convert them to radians.
    int i;
    for (i = 0; i <=N; i++){
    deg=i*5;
    tan_Array[i]=tan(deg_to_rad(deg));
    printf("tan_Array[%d] = %f\n", i , tan_Array[i]);
    }

//Call function to calculate area under curve by trapezoidal rule
float area = trapezoidal(N);

printf("The area under the curve of tan(x) from 0 → 60 degrees using the Trapezoidal Rule is %f.\n", area);

//Print actual result to compare i.e. ln (2)
printf("The actual area is %f.\n", logf(2));

    return 0;
}

//function to convert degree to radians
float deg_to_rad(float deg){
    return ((M_PI*deg)/180);
}

//function to calculate part of area under the curve of tan(x) from 0 → 60
float trapezoidal(int N){
float area_sum;
area_sum=tan_Array[0]+tan_Array[N];
int i;

for(i=1; i<N; i++){
    area_sum+=2*tan_Array[i];
}

area_sum=area_sum*(deg_to_rad(b_deg)-deg_to_rad(a_deg))/(2*N);
return area_sum;
}