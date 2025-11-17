#include<iostream>
using namespace std;
class Demo
{
    public:
    int x;
    int *y;
    Demo()
    {
        y = new int(5);
        x=10;
    }
    Demo(const Demo &d)
    {
        x=d.x;
        y=new int (*(d.y));
    }
    ~Demo()
    {
        free(y);
    }
    void display()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<*y<<endl;
    }
};
int main()
{
    Demo d1;
    Demo d2 =d1;
    d1.display();d2.display(); *(d2.y)=50;
    d1.display();d2.display();
}