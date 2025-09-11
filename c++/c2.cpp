#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    a=7;
    b=4;
    cout<<"before swapping are a="<<a<<"b="<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nafter swapping are a="<<a<<"b="<<b;
    return 0;
}