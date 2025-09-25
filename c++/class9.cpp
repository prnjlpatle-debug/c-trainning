#include<iostream>
using namespace std;
class X
{
   public:
   int plusFunc(int x,int y)
   {
      return x+y;
   }
   double plusFunc(double x,double y)
{
   return x+y;
}
};
int main()
{
   X x1;
   int myNum1 = x1.plusFunc(8, 5);
   double myNum2 = x1.plusFunc(4.3, 6.26);
   cout << "Int:"<< myNum1 <<"\n";
   cout << "Double:" <<myNum2; 
   return 0;
}