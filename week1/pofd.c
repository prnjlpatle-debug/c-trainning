#include<stdio.h>
#include<conio.h>
int main()
{
 int n,p,count=1;
 printf("enter a number:");
 scanf("%d",&n);
 while(n!=0)
 {
    p=n%10;
    n=n/10;
    count=count*p;
 }
 printf("%d\n",count);
 return 0;
}