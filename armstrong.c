#include<stdio.h>
int main()
{
int num,originalnumber,rem,result=0;

printf("\n\tEnter the three digit number\t\n");
scanf("%d",&num);

originalnumber=num;

while (originalnumber !=0)
{
	rem=originalnumber%10;
	result +=rem*rem*rem;
	originalnumber/=10;
}

	if(result == num)
			printf("The number entered is armstrong number\n\n");
		
	else
			printf("The number entered is not a armstrong number\n\n");
	
return 0;
}
