#include<stdio.h>
long factorial(int n);
long factorial(int n)
    {
        int fact=1;
        if (n>0)
        {
            return n*factorial(n-1);
        }
        else
            return fact;


    }

int main()
{
    int n;
    printf("Enter the no:\n");
    scanf("%d",&n);
    printf("The factorial %ld",factorial(n));
return 0;
}
