#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;

public:
    void set_data(int x, int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<endl<<a<<" + "<<b<<"i";
    }
    Complex add(Complex c,Complex d)
    {
        Complex temp;
        temp.a = d.a+c.a;
        temp.b = d.b+c.b;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c1.show_data();
    c2.set_data(5,6);
    c2.show_data();
    c3=c3.add(c1,c2);
    cout<<"\nAddition of two complex numbers is";
    c3.show_data();


    return 0;
}
