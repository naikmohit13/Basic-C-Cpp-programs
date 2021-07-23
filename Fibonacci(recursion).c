//Creating fibonacci sereis using recursion..
#include<stdio.h>
long fibonacci(int);
void main()
{
    int first=0,second=1,n;
    long term;
    printf("Enter the number of terms in fibonacci series\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        printf("%d\t",fibonacci(i));
}
long fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
