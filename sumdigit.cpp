//Program to calculate the sum of digits of the given number;
#include <iostream>
using namespace std;

int main()
{
	int n,rem=0,sum=0,temp;
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rem = temp%10;
		sum += rem;
		temp/= 10;
	}
	cout<<sum<<"\n";
	return 0;
}
