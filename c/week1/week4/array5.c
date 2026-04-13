#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int num=5,f;
    for(int i=0;i<5;i++)
    {
        if(a[i]==num)
        {
          f=1;
        }
    }
    if(f==1)
    {
        printf("element is found");
    }
    else
    {
        printf("element not found");
    }
}