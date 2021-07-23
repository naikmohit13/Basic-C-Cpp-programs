#include<stdio.h>
void main()
{
    int n,k;
    printf("Enter an integer in decimal number system\n");
    scanf("%d",&n);

    printf("%d in binary is:\n\n",n);
    for(int c=31;c>=0;c--)
    {
        k=n>>c;
        if(k & 1)
            printf("1");
        else
            printf("0");
    }
}
