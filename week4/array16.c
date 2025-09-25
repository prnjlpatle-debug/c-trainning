#include<stdio.h>
int main()
{
int a[] = {-1,-2,-3,-4,-5};
int n= (sizeof a)/sizeof a[0];
int maxSum = a[0];
int curSum=a[0];
{
    for(int i=1;i<n;i++)
    {
        if(curSum>maxSum)
        maxSum=curSum;
    }
}
  printf("sum of %d\n",maxSum);
  return 0;
}
