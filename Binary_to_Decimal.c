#include<stdio.h>
void main()
{
    int n,decimal=0,remainder,base=1;
    printf("Enter an integer in binary number system\n");
    scanf("%d",&n);

    printf("%d in Decimal is:\n\n",n);
    while(n>0)
    {
        remainder=n%10;
        decimal=decimal+remainder*base;
        n=n/10;
        base=base*2;
    }
    printf("%d",decimal);
}
