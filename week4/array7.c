#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[5]={1,2,3,4,5};
   int check=1;
   {
    for(int i=0;i<5/2;i++)
    {
        if(arr[i]!=arr[5-1-i])
        {
            check=0;
        }
    }
   }
if(check)
{
    printf("palindrome");
}
else
{
    printf("not a palindrome");
}
}
