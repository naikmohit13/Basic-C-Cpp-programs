#include <iostream>
using namespace std;

int main()
{
	int a[100],i,n,min,max;
	cout<< "Enter the size of array"<<endl;
	cin >> n;
	
	cout<< "Enter the numbers in  array" << endl;
	for (i=0;i<n;i++)
			cin >> a[i];

	max = a[0];
	min = a[0];
	for (int j=1;j<n;j++)
	{	
		if (max < a[j])
				max = a[j];
		
		if (min > a[j])
				min = a[j];
	}
	
	cout << "Maximum element in the array is " << max <<endl;
	cout << "Minimum element in the array is " << min <<endl;
	return 0;
}
