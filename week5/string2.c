#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hii";
    int ln=strlen(str);
    for(int i=ln;str[i]!='\0';i--)
    {                            
        printf("%c\n",str[i]);
    }
    return 0;
}