#include<stdio.h>
#include<conio.h>
int main(){
    int num=123;
    int res;
    int n=num;
     system("cls");
    while (num!=0)
{
    int lastdigit=num%10;
    res= res*10+ lastdigit;
    num=num/10;
}
if(res==n)
{
    printf("palindrome");
}
else
{
    printf("not a palindrome");
}
}