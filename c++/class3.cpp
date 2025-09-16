#include<iostream>
using namespace std;
class test
{
    public:
    void show(int val);

};
void test::show(int val)
{
    cout<<"\nvalue is"<<val;
}
int main()
{
    test p1,s2;
    p1.show(9);
    s2.show(8);
    return 0;
}