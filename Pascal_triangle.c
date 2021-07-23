#include<stdio.h>
long fact(int);
void main()
{
    int n,i,c;
    printf("Enter the number of rows in Pascal triangle\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(c=0;c<=(n-i-2);c++)
            printf(" ");
        for(c=0;c<=i;c++)
            printf("%ld ",fact(i)/(fact(c)*fact(i-c)));
        printf("\n");
    }
}

long fact(int n)
{
    long result=1;
    for(int c=1;c<=n;c++)
        result=result*c;
    return result;
}
