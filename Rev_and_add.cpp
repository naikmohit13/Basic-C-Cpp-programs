//Reverse and add program.
#include <bits/stdc++.h>
using namespace std;
typedef long int lt;

lt rev_num(lt);

int main()
{
	int t;
	cin>>t; //no. of test cases
	while(t--)
	{
		lt n; 			//input the number
		int count=0; 
		
		cin>>n;
		while(rev_num(n) != n ){
			 cout<<n<<"+"<<rev_num(n)<<" ";
			n += rev_num(n);
			 cout<<n<<"\n";
			count++; 		//count of additions.
		}
		cout<<count<<" "<<n<<"\n"; 
	}
	return 0;
	
}

lt rev_num(lt k) 		//function to reverse a number.
{	
	 lt rev=0;
	 int rem = 0;
	
	while(k!=0){
	
	rem = k%10;
	rev = rev*10 + rem;
	k = k/10;
	}
	return rev;
}
