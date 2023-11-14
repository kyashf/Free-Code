#include<stdio.h>
#define pi 3.14

void main()
{
float R, A, C;

    printf("Radius = ");
    scanf("%f", &R);
    A=pi*R*R;
    C=pi*2*R;
    
    printf("Area = %f", A);
    printf("\nCircumference = %f", C);
    
}