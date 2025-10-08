#include<stdio.h>
int main()
{
    char str[]="hii";
    char copy[10];
    int i;
    for(int i=0;str[i]!='\0';i++)
    copy[i]=str[i];
    copy[i]='\0';
    {            
        for(i=0;copy[i]!='\0';i++)                
        printf("%c\n",copy[i]);
    }
    return 0;
}