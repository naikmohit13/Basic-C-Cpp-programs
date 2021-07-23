#include<stdio.h>
void main()
{
    int n,binary=0,remainder,base=1;
    printf("Enter an integer in decimal number system\n");
    scanf("%d",&n);

    printf("%d in binary is:\n\n",n);
    while(n>0)
    {
        remainder=n%2;
        binary=binary+remainder*base;
        n=n/2;
        base=base*10;
    }
    printf("%d\n",binary);
}
