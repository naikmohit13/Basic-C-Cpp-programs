#include<iostream>
using namespace std;
class Account
{
private:
    int balance;
    static int rio;
public:
    void setBalance(int b)
    {
        balance=b;
    }
    static void setRio(float r)
    {
        rio=r;
    }
    static void show_Rio()
    {
        cout<<rio;
    }
};
int main()
{
    Account::setRio(4.5f);
    Account::show_Rio();
    return 0;
}
