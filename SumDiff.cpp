# include <iostream>
using namespace std;
int main()
{	
	int a,b;
	cout << "Enter two numbers" <<endl;
	cin >> a;
	cin >> b;
	
	if (a>b)
		cout << a-b <<endl;
	else
		cout<< a+b <<endl;  
	return 0;
}
