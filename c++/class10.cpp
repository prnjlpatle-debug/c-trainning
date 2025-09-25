#include<iostream>
using namespace std;
class X
{
   public:
   int plusFunc(int x,int y)
   {
      return x+y;
   }
   int plusFunc(int x,int y,int z)
{
   return x+y+z;
}
};
int main()
{
   X x1;
   int result1=x1.plusFunc (8,5);
   int result2 =x1.plusFunc (4,5,7);
   cout << "sum of 2 no.: "<<  result1<<"\n";
   cout << "sum of 3 no.: " << result2; 
   return 0;
}