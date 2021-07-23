#include<stdio.h>
void main()
{
    long int n,digit,temp,arm=0;
    printf("Enter the number upto which you want to generate armstrong number.\n");
    scanf("%ld",&n);
    int flag=1;
    printf("Following armstrong numbers are found\n");
    for(long int i=1;i<=n;i++)
    {
        temp=i;
        while(temp!=0)
        {
            digit=temp%10;
            arm+=(digit*digit*digit);
            temp=temp/10;
        }
        if(i==arm)
        {
          printf("%ld\n",i);
          flag=0;
        }
        arm=0;
    }
    if(flag==1)
        printf("No armstrong number in this range\n");
}
