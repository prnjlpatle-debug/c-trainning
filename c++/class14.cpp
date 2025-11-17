#include<iostream>
#include<string.h>
using namespace std;
class bankaccount
{
    int accno,balance=0;
    string name;
    public:
    bankaccount(string s,int a )
    {
      name =s;
      accno =a;
    }

    void deposit(int d)
    {
        balance = balance+d;
    }
    void withdraw(int w)
    {
        balance=balance-w;
    }
    void displaybalance()
    {
        cout<<"balance is:"<<balance<<endl;
        cout<<"name is:"<<name<<endl;
        cout<<"accountno is:"<<accno<<endl;
    }

};
int main()
{
        bankaccount b1("pranjal",202);
        b1.deposit(100);
        b1.displaybalance();
}
