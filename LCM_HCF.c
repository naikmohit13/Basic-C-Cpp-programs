#include<stdio.h>
long int HCF(long int,long int);
void main()
{
    long int x,y,lcm,hcf;

    printf("Enter the two integers\n");
    scanf("%ld %ld",&x,&y);
    hcf=HCF(x,y);
    lcm=(x*y)/hcf;

    printf("LCM and HCF of %d and %d is %d and %d respectively\n",x,y,lcm,hcf);

}

long int HCF(long int x,long int y)
{
    if(x==0)
    {
        return y;
    }
    while(y!=0)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }
return x;
}
