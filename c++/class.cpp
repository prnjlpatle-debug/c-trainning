#include<iostream>
using namespace std;
class Myclass
{
    int x;
    float y;
public:
Myclass()
{
  x=0;
  y=3;
}
Myclass(const Myclass &other)
{
    x=other.x;
    y=other.y;
}
void display()
{
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
}
};