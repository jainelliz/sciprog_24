#include <stdio.h>
#include <math.h>

int main(void) {
    int N = 12;
    float a = 0;
    float b = M_PI / 3;
    float b_deg = (180 / M_PI) * b;
    float sum = 0;
    float gap = (b_deg-a) / N;
    float calc_integral = 0;
    
    printf("The value of b is %f radians, i.e., %f degrees\n", b, b_deg);

    // Calculate sum of functions at a and b
    sum = tan(a) + tan(b);
    printf("First part of sum is %f\n", sum);

    // Calculate sum of functions at points in between
    int i;
    for (i = gap; i < b_deg; i = i + gap) {
        sum += 2 * tan((M_PI / 180) * i);
    }

    printf("Combined sum of functions is %f\n", sum);
    calc_integral = (b - a) / (2 * N) * sum;
    printf("Calculated integral value of the function using trapezoidal rule is %f\n", calc_integral);
    printf("Actual value of integral is %f\n", logf(2));

    // Calculate difference between the two values using absolute value of floats
    float abs_diff = fabs(calc_integral - logf(2));
    float rel_diff = fabs(1 - (calc_integral / logf(2)));
    printf("Absolute difference = %f\nRelative difference = %f\n", abs_diff, rel_diff);

    return 0;
}

