#include<stdio.h>
long factorial(int);
void main()
{
    int n;
    printf("Enter the number to find its factorial\n");
    scanf("%d",&n);

    printf("Factorial of %d is %ld\n",n,factorial(n));
}

long factorial(int n)
{
    long fact=1;
    for(int i=2;i<=n;i++)
        fact=fact*i;

    return fact;
}
