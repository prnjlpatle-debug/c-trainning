#include<iostream>
using namespace std;
class dog
{
    public:
    void bark(int woof);
};
void dog::bark(int woof)
{
    cout<<"\nwoof :"<<woof;
}
int main()
{
   dog pilla,puppy;
   pilla.bark(8);
   puppy.bark(7);
   return 0; 
}