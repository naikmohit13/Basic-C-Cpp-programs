#include<stdio.h>									// program to check whether the entered number is palindrome or not
int main()
{
int n,reverse=0,temp;

printf("\tEnter a number to check whether it is a palindrome number or not\n");
scanf("%d",&n);

temp=n;

while(temp!=0)
{

	reverse=reverse*10;
	reverse=reverse+temp%10;
	temp=temp/10;
	}
	
	if(n==reverse)
		printf("\t%d is a palindrome number\n",n);
		
	else
		printf("\t%d is not a palindrome number\n",n);
		
		return 0;
}
	
