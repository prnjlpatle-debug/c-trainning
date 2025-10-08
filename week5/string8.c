#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "mmnnkk";
    int count = 0;
    int ln =strlen(str);
    for(int i=0;i<ln;i++){
        for(int j=i+1;j<ln;j++)
        if(str[i]==str[j]){
            count++;
        }
    }
    if(count==0)
    {
        printf(
    }
}