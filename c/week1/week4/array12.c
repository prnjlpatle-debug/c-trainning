#include<stdio.h>
#include<limits.h>
int main()
{  
   int a[5]={1,-2,3,-4,5};
   int maxSum=0;
   for (int i = 0; i<5; i++)
       {
        int curSum = 0; 
        for (int j = 0; j<5; j++)
        {
            curSum= curSum+a[j];
        }
        if (curSum> maxSum)
        {
            maxSum = curSum;
        }
        } 
    printf("%d", maxSum);
   }
