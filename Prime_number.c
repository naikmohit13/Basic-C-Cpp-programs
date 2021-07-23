#include<stdio.h>
void main()
{
    int n,flag=1;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Entered number is not a Prime number\n");
            flag=0;
            break;
        }
    }
    if(flag==1)
        printf("Entered number is a Prime number\n");
}
