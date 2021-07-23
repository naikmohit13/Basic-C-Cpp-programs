#include <iostream>
using namespace std;
int main()
{
    int x;
    int &y=x;
    cout<<"ENter the number"<<endl;
    cin>>x;
    cout<<"Square of "<<x<<" is "<<x*x<<" and its address is "<< y;

    return 0;
}
