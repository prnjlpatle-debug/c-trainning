#include<stdio.h>
int main()
{
    int a[5]={1,4,5,6,7};
    int temp,i;
    for(int j=0;j<5;j++)
    
    for( int i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
        {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        }
    }
    {
    for(int i=0;i<5;i++)
    printf("%d\t",a[i]);
    }
}