#include<stdio.h>
void main()
{
    float H, W, L, A, V;
    
    printf("FIND AREA & VOLUME\n");
    printf("Length = ");
    scanf("%f", &L);
    printf("Width = ");
    scanf("%f", &W);
    printf("Height = ");
    scanf("%f", &H);
    V=L*H*W;
    A=2*(L*H+L*W+H*W);
    printf("Area = %f\n",A);
    printf("Volume = %f",V);
    printf("\nThank You for using...");
    printf("\nCode by Firoziyash");
    
}