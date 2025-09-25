#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50]={1,2,3,4,5,6,7,8};
    int max=a[0]+a[1]+a[2];
    int sum,i,j,k;
    for(i=0;i<6;i++)
    {
        j=i+1;
        k=j+1;
        sum=a[i]+a[j]+a[k];
        if(sum>max)
        max=sum;
    }
    printf("%d",max);
}



