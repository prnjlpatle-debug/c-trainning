#include<stdio.h>
#include<conio.h>
int main()
{
    int a[6]={1,3,4,2,5,6};
    int temp=0,i;
    for(int i=0;i<6;i++)
    {
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
   }
   for(int i=0;i<6;i++)
   printf("%d\t",a[i]);
}