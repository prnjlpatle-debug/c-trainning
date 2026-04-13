#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[]="hii";
    char newstr[10];
    int ln=strlen(str);
    for( i=0;str[i]!='\0';i++)
    {                            
        newstr[i]=str[i];
    }
    printf("%s",newstr[i]);
    return 0;
}