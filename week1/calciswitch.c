#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    char c;
    printf("Enter first number:");
    scanf("%d",&a); 
    printf("Enter second number:");
    scanf("%d",&b); 
    printf("Enter operator(+,-,*,/):");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("Sum=%d",a+b);
        break;
    case '-':
        printf("Difference=%d",a-b);    
        break;
    case '*':
        printf("Product=%d",a*b);   
        break;
    case '/':   
        if(b!=0)
        printf("Quotient=%d",a/b);  
        else
        printf("Division by zero is not allowed");
        break;
    default:
        printf("Invalid operator");     
        break;
    } 
}       
    
