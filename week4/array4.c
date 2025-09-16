#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int max=a[0],min=a[0];
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0;i<5;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("max. element is %d",max);
    printf("\nmin element is %d",min);
}