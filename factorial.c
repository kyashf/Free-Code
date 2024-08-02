#include<stdio.h>

int factorial(int n)
{
    if (n==0)
    return 1;
    else
    return n * factorial(n-1);
}

int main()
{
    int n = 10;
    int f = factorial(n);
    printf("%d",f);
    return 0;
}