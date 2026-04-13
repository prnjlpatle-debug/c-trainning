#include <stdio.h>
int main()
{
int num=123;
int sum=0;
while (num>0)
{
int lastdigit=num%10;
sum=sum+lastdigit;
num=num/10;
}
return 0;

}