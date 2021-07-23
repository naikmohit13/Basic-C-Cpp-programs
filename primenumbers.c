#include<stdio.h>                              /*program to print prime numbers upto n*/
int main()
{
int n,i,fact,j;

 printf("Enter the Numbers\n");
 scanf("%d",&n);
 printf("Prime numbers are:\n");
printf("2\n");
 for(i=1;i<=n;i+=2)
 {
  	fact=0;
  	for(j=1;j<=i;j++)
  	{
  		if(i%j==0)
  			fact++;
  	}

		if(fact==2)
			printf("%d\n",i);
}
}
