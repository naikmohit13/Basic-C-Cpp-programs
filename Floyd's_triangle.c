#include<stdio.h>
void main()
{
    int n,i,j,a=1;
    printf("Enter the number of rows\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            {
                printf("%d ",a);
                a++;
            }
        printf("\n");
    }
}
